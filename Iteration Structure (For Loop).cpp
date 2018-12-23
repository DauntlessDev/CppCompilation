#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"n = ";
	cin>>n;
	int size = n+2;
	if (n>=1){
		for(int rows=0;rows!=size;rows++){
			 	for(int cols=0;cols!=size;cols++){
				 if (rows==0 || rows==size-1 || cols == 0 || cols==size-1)
				 	cout<<"* ";
				 else if (rows==cols || cols==(size)-rows-1)
				 	cout<<"X ";	 
				 else
					cout<<"  ";
				}
				cout<<endl;
		}
	}
	else if (n==0){
		cout<<"Congratulations!";
		}
	else{
		cout<<"Yiee!";
	}
	}
	
