#include <iostream>
using namespace std;

void LeuterioDisplayEven(int num1, int num2, int num3){
	cout<<"Enter 3 numbers: "<<endl;
	cin>>num1>>num2>>num3;
	if (num1%2==0)
		cout<<num1<<" is even number"<<endl;	
	if (num2%2==0)
		cout<<num2<<" is even number"<<endl;	
	if (num3%2==0)
		cout<<num3<<" is even number"<<endl;	
}

int main(){
	int num1,num2,num3;
	LeuterioDisplayEven(num1,num2,num3);
}

