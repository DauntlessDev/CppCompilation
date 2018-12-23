/*
	The Collatz conjecture is a conjecture in mathematics named after Lothar Collatz,
	who first proposed it in 1937. The conjecture is also known as the 3N + 1 conjecture. 
	Take any natural number N. If N is even, divide it by 2 to get N / 2. If N is odd, multiply it by 3 and add 1 to obtain 3N + 1.
	Repeat the process (which is called “Half or Triple plus One”, or HOTPO) indefinitely. 
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int n,i,j;
i=j=0;
cin>>n;

if(n==1 && j==0)
    cout<<1;
else{
    do{
        if(n%2==0){
            n/=2;
            i++;
            }
        else{
            n=3*n+1;
            }
            j++;
            }while(n!=1);
    cout<<(j+1-i);
        }}
  
   