#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node { 
   int data1; 
   float data2;
   char data3;
   struct Node *next; 
}; 
struct Node* top = NULL; 
void pushi(int val) {
	
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node)); 
   newnode->data1 = val; 
   newnode->next = top; 
   top = newnode; 
}
void pushf(float val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node)); 
   newnode->data2 = val; 
   newnode->next = top; 
   top = newnode; 
}
void pushc(char val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node)); 
   newnode->data3 = val; 
   newnode->next = top; 
   top = newnode; 
}

void pop(int choice) {
   if(top==NULL)
      cout<<"Stack Underflow"<<endl;
   else {
	   cout<<"The popped element is ";
	   if (choice ==1)
	   		cout<<top->data1 <<endl;
	   if (choice ==2)
   			cout<<top->data2<<endl;
	   if (choice ==3)
    		cout<<top->data3 <<endl;
       top = top->next;
	}	
}
void isEmpty(){
	if(top==NULL)
    	cout<<"The Stack is Empty"<<endl;
    else{
    	cout<<"The Stack is not Empty"<<endl;
	}
}
void checkTop(int choice){
	cout<<"The value of the top is: ";
	if (choice == 1)
		cout<< top->data1<<endl;
	if (choice == 2)
		cout<< top->data2<<endl;
	if (choice == 3)
		cout<< top->data3<<endl;
}
void display(int choice) {
   struct Node* ptr;
   if(top==NULL)
      cout<<"stack is empty";
   else {	   
      ptr = top; 
      while (ptr != NULL) { 
         if (choice ==1)
			cout<<ptr->data1<<" ";
		if (choice ==2)
			cout<<ptr->data2<<" "; 
		if (choice ==3)
	   		cout<<ptr->data3<<" ";
         ptr = ptr->next; 
      } cout<<endl;
   }
}
int main() {
   int choice,ch, value;
   cout<<"1)for int"<<endl;
   cout<<"2)for float"<<endl;
   cout<<"3)for char"<<endl;
   cout<<"Enter choice: ";
	cin>>choice;
   cout<<"1)for push"<<endl;
   cout<<"2)for pop"<<endl;
   cout<<"3)for display"<<endl;
   cout<<"4)for top"<<endl;
   cout<<"5)for if empty"<<endl;
   cout<<"6)for exit"<<endl;
   do {
      cout<<"Enter choice: ";
      cin>>ch;
      switch(ch) {
         case 1: {
         	cout<<"Enter element to be pushed:";
         	if (choice == 1){
         		int valn;
         		cin>>valn;
         		pushi(valn);
			   }
         	if (choice == 2){
         		float valf;
         		cin>>valf;
         		pushf(valf);
			 }
         	if (choice == 3){
         		char valc;
         		cin>>valc;
         		pushc(valc);
			 }
            break;
         }
         case 2: {
            pop(choice);
            break;
         }
         case 3: {
            cout<<"Stack Contents are:";
			display(choice);
            break;
         }
         case 4: {
         	checkTop(choice);
            break;
         }
         case 5: {
            isEmpty();
            break;
         }
         case 6: {
            cout<<"You have exited.";
            break;
         }
         default: {
            cout<<"Invalid input, try again."<<endl;
         }
      }
   }while(ch!=6); 
      return 0;
}  
 



