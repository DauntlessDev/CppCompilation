#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
   int data;
   struct Node *next;
}
*front = NULL,*rear = NULL;
void enqueue(int value){
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
void isEmpty(){
   if(front != NULL) cout<<"Queue is not Empty."<<endl;
}
void dequeue(){
   if(front != NULL){
      struct Node *temp = front;
      front = front -> next;
      cout<<"Deleted element: "<<temp->data<<endl;
      free(temp);
   }
}
void getFront(){
	if(front != NULL) cout<<"The value of front is: "<<front->data<<endl;
}
void display(){
   if(front == NULL)
    	cout<<"Queue is empty."<<endl;
   else{
   		cout<<"The elements of the Queue are: ";
    	struct Node *temp = front;
    	while(temp!= NULL){
		cout<<temp->data<<" ";
		temp = temp -> next;
    	}cout<<endl;
   }
}

int main(){
   int choice, val;
   while(true){
   	  system("CLS");
   	  cout<<"QUEUE DATA STRUCTURE USING LINKED LIST"<<endl;
      cout<<"\n----- MENU-----\n";
      cout<<"1. Enqueue()"<<endl;
	  cout<<"2. Dequeue()"<<endl;
	  cout<<"3. Front()"<<endl;
	  cout<<"4. IsEmpty()"<<endl;
	  cout<<"5. Exit()\n"<<endl;;
      cout<<"Enter your choice: ";
      cin>>choice;
      switch(choice){
		 case 1: 
		 		cout<<"Enter the value of the element: ";
				cin>>val;
			 	enqueue(val);
			 	break;
		 case 2: 
		 		dequeue(); 
				break;
		 case 3: 
		 		getFront();
				break;
		 case 4:
		 		isEmpty();
		 		break;
		 case 5:
		 		exit(0);
		 default: 
		 		cout<<"Invalid Input, Please Try again.\n";
      }display();
	  system("pause");
   }
}



