#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Node
{
   int data;
   struct Node *next;
}
*front = NULL,*rear = NULL;
void insert(int value){
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
}
void dequeue(){
   if(front == NULL)
      cout<<"Queue is Empty"<<endl;
   else{
      struct Node *temp = front;
      front = front -> next;
      cout<<"Deleted element"<<temp->data<<endl;
      free(temp);
   }
}
void display()
{
   if(front == NULL)
    	cout<<"Queue is empty."<<endl;
   else{
   		cout<<"The elements of the Queue are:"<<endl;
    	struct Node *temp = front;
    	while(temp->next != NULL){
		cout<<temp->data<<" ";
		temp = temp -> next;
    	}
   }
}

int main(){
   clrscr() ;
   int choice, val;
   cout<<"QUEUE DATA STRUCTURE USING LINKED LIST"<<endl;
   while(true){
      cout<<"\n----- MENU-----\n";
      cout<<"1. Insert()"<<endl;
	  cout<<"2. Delete()"<<endl;
	  cout<<"3. Display()"<<endl;
	  cout<<"4. Exit()\n"<<endl;;
      cout<<"Enter your choice: ";
      cin>>choice;
      switch(choice){
		 case 1: 
		 		cout<<"Enter the value of the element: ";
				cin>>val;
			 	insert(val);
			 	break;
		 case 2: 
		 		dequeue(); 
				break;
		 case 3: 
		 		display(); 
				break;
		 case 4: 
		 		exit(0);
		 default: 
		 		cout<<"Invalid Input, Please Try again.\n";
      }
   }
}



