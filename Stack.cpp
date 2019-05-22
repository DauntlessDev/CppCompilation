#include<iostream>
using namespace std;

int top = -1, size = 5;
int stack[7];

void push(int);
void pop();
void display();

int main(){
	int data, choice;
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Top"<<endl;
	while(true){
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter data: ";
				cin>>data;
				push(data);
				break;
			case 2:
				pop();
				break;
			case 3:
				cout<<"The top is: "<<stack[top];
				break;
			default:
				cout<<"Invalid input.";
		}display();
	}
}
void push(int data){
	if (top == (size-1))
		cout<<"Stack is full";
	else
		stack[++top] = data;
}
void pop(){
	if (top == -1)
		cout<<"Stack is empty";
	else
		cout<<"You removed: "<<stack[top--];
}
void display(){
	if (top == -1)
		cout<<"Stack is empty";
	else{
		for(int i=top; i>=0; i--){
			cout<<stack[i]<<" ";
		}cout<<endl;
	}
}
