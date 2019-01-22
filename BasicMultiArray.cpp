#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int max = 10;
	int arrTable[max][max];
	cout<<"\t\tMultiplication Table:"<<endl;
	for (int i=1; i<=max; i++){
		for (int j=1; j<=max; j++){
			arrTable[i][j] = i*j;
			cout<<setw(5)<<arrTable[i][j];
		}cout<<endl;
	}
}
	

