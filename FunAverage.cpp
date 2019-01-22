#include <iostream>
using namespace std;

int main()
{
	double sales[6], average, total= 0;
	cout<<"Enter sales of 6 days"<<endl;
	
	for (int j=0; j<6; j++)
		cin>>sales[j];
		
	for (int j=0; j<6; j++)
		total += sales[j];
		
	average = total/6;
	cout<<"Average =" <<average;
}










