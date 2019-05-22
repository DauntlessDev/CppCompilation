#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
}; 
Node *head = NULL;
void insertFront(int data){
	Node *newnode = new Node();
	newnode->data = data;
	newnode->next = head;
	head = newnode;
}
void insertBack(int data){
	Node *ptr = new Node();
	ptr = head;
	while(ptr->next != NULL)
		ptr = ptr->next;
	Node *newnode = new Node();
	newnode->data = data;
	ptr->next = newnode;
	newnode->next = NULL;
}
void insertPosition(int data, int position){
	Node *ptr = new Node();
	ptr = head;
	for(int i=1; i<(position-1); i++){
		ptr = ptr->next;	
	}
	Node *newnode = new Node();
	newnode->data = data;
	newnode->next = ptr->next;
	ptr->next = newnode;
}
void deleteFront(){
	Node *newhead = new Node();
	Node *temp = new Node();
	temp = head;
	newhead = head->next;
	head = newhead;
	delete temp;
}
void deleteBack(){
	Node *ptr1 = new Node();
	Node *ptr2 = new Node();
	ptr1 = head;
	ptr2 = head->next;
	while(ptr2->next != NULL){
		ptr2 = ptr2->next;
		ptr1 = ptr1->next;
	}ptr1->next = NULL;
	delete ptr2;
	
}
void deletePosition(int position){
	Node *ptr1 = new Node();
	Node *ptr2 = new Node();
	ptr1 = head;
	ptr2 = head->next;
	for(int i=1; i<(position-1); i++){
		ptr2 = ptr2->next;
		ptr1 = ptr1->next;
	}ptr1->next = ptr2->next;
	delete ptr2;
}
display(){
	Node *ptr = new Node();
	ptr = head;
	cout<<"Linked List: ";
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}cout<<"\n\n";
}
int main(){
	cout<<"Choose from the ff: \n\n";
	cout<<"1. Insert from front"<<endl;
	cout<<"2. Insert from back"<<endl;
	cout<<"3. Insert from position"<<endl;
	cout<<"4. Delete from front"<<endl;
	cout<<"5. Delete from back"<<endl;
	cout<<"6. Delete from position \n"<<endl;
	while (true){
		int choice,data,position;
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter the data: ";
				cin>>data;
				insertFront(data);
				break;
			case 2:
				cout<<"Enter the data: ";
				cin>>data;
				insertBack(data);
				break;
			case 3:
				cout<<"Enter the data and position: ";
				cin>>data;
				cin>>position;
				insertPosition(data,position);
				break;
			case 4:
				deleteFront();
				break;
			case 5:
				deleteBack();
				break;
			case 6:
				cout<<"Enter the position: ";
				cin>>position;
				deletePosition(position);
				break;
			default:
				cout<<"Invalid Input, Try Again."<<endl;
		}display();
	}return 0;
}

