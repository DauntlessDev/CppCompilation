#include <iostream>
using namespace std;

struct ItemDetails
{	
	string color;
	char name[50];
	char address[50];
	char subject[50];
	char section[50];
	char email[50];
	char number[50];
	int pinkCount;
	int blueCount;
} details;

void inputDetails();
void displayDetails();
void newLine();
int main(){
	int i=0;
	while(i<38){
		cout<<"Enter Index Information\n";
		inputDetails();
		displayDetails();
		system("pause>0");
		newLine();
		i++;
	}
	return 0;
}

void inputDetails(){
	cout<<"Name: ";
	cin.getline(details.name,49);
	cout<<"Address: ";
	cin.getline(details.address,49);
	cout<<"Subject: ";
	cin.getline(details.subject,49);
	cout<<"Section: ";
	cin.getline(details.section,49);
	cout<<"Number: ";
	cin.getline(details.number,49);
	cout<<"Email: ";
	cin.getline(details.email,49);
	cout<<"Favorite Color(pink/blue only): ";
	cin>>details.color;
	while (details.color != "pink" && details.color != "blue")
		cin>>details.color;
	if (details.color == "pink")
		details.pinkCount++;
	if (details.color == "blue")
		details.blueCount++;
}
void displayDetails(){
	cout<<"\n\nIndex Information:\n";
	cout<<"Name: "<<details.name<<endl;
	cout<<"Address: "<<details.address<<endl;
	cout<<"Subject: "<<details.subject<<endl;
	cout<<"Section: "<<details.section<<endl;
	cout<<"Number: "<<details.number<<endl;
	cout<<"Email: "<<details.email<<endl;
	cout<<"Favorite Color: "<<details.color<<endl;
	cout<<"Pink Color: "<<details.pinkCount<<endl;
	cout<<"Blue Color: "<<details.blueCount<<"\n\n\n";
}
void newLine(){
	char s;
	do{
		cin.get(s);
	}while(s!='\n');
}
