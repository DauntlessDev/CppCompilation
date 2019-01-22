#include <iostream>
using namespace std;

int main(){
	int max = 2;
	
	int a[2][2], b[2][2], product[2][2];
	
	cout<<"Enter the elements of the Matrix A."
		<<endl;
	
	for(int i = 0; i < max; i++){
		for(int j = 0; j < max; j++){
			cout<<"Enter the element of "<<i+1<<" "<<j+1<<": ";
			cin>>a[i][j];
		}
	}
	cout<<endl;
	cout<<"Enter the elements of the Matrix B."
		<<endl;
		
	for(int i = 0; i < max; i++){
		for(int j = 0; j < max; j++){
			cout<<"Enter the element of "<<i+1<<" "<<j+1<<": ";
			cin>>b[i][j];
		}
	}
	
	for(int i = 0; i < max; i++){
		for(int j = 0; j < max; j++){
			product[i][j] = 0;
		}
	}
	
	for(int i = 0; i < max; i++){
		for(int j = 0; j < max; j++){
			for (int k =0; k < max; k++){
				product[i][j] += a[k][j] * b[i][k];
			}
		}
	}
	
	cout<<endl;
	cout<<"Elements in Matrix A: ";
	for(int i = 0; i < max; i++){
		for(int j = 0; j < max; j++){
			cout<<a[i][j]<<" ";
		}
	}
	
	cout<<endl<<endl;
	cout<<"Elements in Matrix B: ";
	for(int i = 0; i < max; i++){
		for(int j = 0; j < max; j++){
			cout<<b[i][j]<<" ";
		}
	}
	
	
	cout<<endl<<endl;
	cout<<"The result of multiplied matrices are: "
		<<endl;
	for(int i = 0; i < max; i++){
		for(int j = 0; j < max; j++){
			cout<<product[i][j]<<" ";
				
			if( j == max-1){
				cout<<endl;
			}
		}
	}
	
	return 0;
}
