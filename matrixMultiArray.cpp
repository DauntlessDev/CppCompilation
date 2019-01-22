#include <string.h>
#include <iostream>
using namespace std;

int main(){
	string small,large;
	small = "I am short";
	large = "I, friend, am a long and elaborate string indeed";
	
	cout<<" The short string is " << strlen(small)
		<<" characters."<<endl;
	cout<<" The long string is " << large.length()
		<<" characters."<<endl;
}
