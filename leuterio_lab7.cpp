#include <iostream> 
using namespace std; 
struct Node { // create node for the binary tree which has left and right
    char data; 
    struct Node* left, *right; 
    Node(char data) { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
void displayPost(struct Node*); // function headers 
void displayPre(struct Node*);
void displayIn(struct Node*);
void getInfix(struct Node* node,string expression){
	for (int i=0; i<expression.size();i++){
		switch(expression[i]){
			case '0':case '1':case '2':case '3':case '4':
			case '5':case '6':case '7':case '8':case '9':
				for (int j=0;j<expression.size()/2; j++){
					if (j%2 ==0)
						while (node->left!= NULL)
							node = node->left;
						node = expression[i]; // first recur on left 
					else
						while (node->right!= NULL)
							node = node->right;
						node = expression[i]; // first recur on right
				}break;
			case '+':case '-':case '*':case '+':case '/':
				for (int j=0;j<expression.size()/2; j++){
					if (j%2 ==0){
						while (!isdigit(node->left->data) && !isalpha(node->left->data))
							node = node->left;
						node = expression[i]; // first recur on left 
					}	
					else{
						while (node->right!= NULL)
							node = node->right;
						node = expression[i]; // first recur on right
					}
						
				}break;
				
					
				}
				
				
		}
	}
}
int main() { // the driver program
	string expression;
	cout<<"For an expression tree: ";
	cin>>expression;
	
	struct Node *root = new Node(expression[1]);
	root->left = new Node(expression[0]);  
    root->right = new Node(expression[2]);
    cout<<endl<<"Inorder traversal is : "; displayIn(root); 
    cout<<endl<<"Preorder traversal is : "; displayPre(root);  
    cout<<endl<<"Postorder traversal is	: "; displayPost(root); 
} 
void displayPost(struct Node* node) {  //from the tree, print it by post order 
    if (node == NULL) return; 
    displayPost(node->left); // first recur on left 
    displayPost(node->right); // first recur on right
    cout << node->data;  // print the data of the node
} 
void displayIn(struct Node* node) { //from the tree, print it by in order 
    if (node == NULL) return; 
    displayIn(node->left); // recur on the left
    cout << node->data; //print data of node
    displayIn(node->right);  // recur on the right
} 
void displayPre(struct Node* node) { //from the tree, print it by pre order 
    if (node == NULL) return; 
    cout << node->data;  // print data
    displayPre(node->left);    // recur on the left 
    displayPre(node->right);  // recur on the right
}  
