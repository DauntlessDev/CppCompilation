#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements:  ";
    cin>>n;
    int first[n],second[n],sum[n];

    cout<<"Enter the elements for the first array: "<<endl;
    for (int i = 0; i < n; i++){
        cin>>first[i];
    }
    cout<<"Enter the elements for the second array: "<<endl;
    for (int i = 0; i < n; i++){
        cin>>second[i];
    }
    //for the sum
    for (int i = 0; i < n; i++){
        sum[i] = first[i]+second[i];
    }
    cout<<"Sum["<<n<<"]={";
    for (int i = 0; i < n; i++){
        if (i<n-1)
            cout<<sum[i]<<",";
        else
            cout<<sum[i]<<"}";
    }
}
