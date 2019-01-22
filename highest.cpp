#include <iostream>
using namespace std;

int main()
{
	double num[10], highest;
	cout<<"Enter 10 numbers: "<<endl;
	
	for (int j=0; j<10; j++)
		cin>>num[j];
		
	for (int j=0; j<10; j++){
		if (highest < num[j])
			highest = num[j];
		}

	cout<<"Highest Number = " << highest;
}
