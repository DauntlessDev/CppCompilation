#include <iostream>
using namespace std;
struct ItemRec
{
	int id;
	char name[50];
	double price;
} item;

void inputItem();
void displayItem();
void newLine();

int main(){
	cout<<"Enter Item Information\n";
	inputItem();
	displayItem();
	system("pause>0");
	return 0;
}

void inputItem(){
	cout<<"ID: ";
	cin>>item.id;
	newLine();
	cout<<"Name: ";
	cin.getline(item.name,49);
	cout<<"Price: ";
	cin>>item.price;
}
void displayItem(){
	cout<<"\n\nItem Information:\n";
	cout<<"ID: "<< item.id<<endl;
	cout<<"Name: "<<item.name
	<<endl;
	cout<<"Price: "<<item.price
		<<endl;
}

void newLine(){
	char s;
	do{
		cin.get(s);
	}while(s!='\n');
}
