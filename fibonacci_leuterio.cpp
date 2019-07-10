#include<iostream>
using namespace std;
int fibonacci_leuterio(int x) {
    if (x == 0 || x == 1)
        return x;
    return fibonacci_leuterio(x-1)+fibonacci_leuterio(x-2);
}
int main(){
	int num;
	cout<<"Enter the number of recursion for the series:";
	cin>>num;
	if (num < 0)
	 	cout<<"You did not enter a postive number.";
	else{
		cout<<"Fibonacci Series: ";
		for (int i=0; i<num; i++)
			cout<<fibonacci_leuterio(i)<<" ";
	}	
}

