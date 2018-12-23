#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int m,n;
    cin>>n>>m;
    if (n+1!=m){
        for(int i=n; i<m ;i++){
            if (i%2==1)
                cout<<i<<" ";
            else
                continue;
        }}
    else
        cout<<0;
}