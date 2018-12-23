#include<iostream>
using namespace std;

int main(){
	char input;
	cout<<"MENU\n a.Problem 1 - For Loop\n b.Problem 2 - While\n c.Problem 3 - Do while\n d.Exit"<<endl;
	cout<<"\n Choose a problem by typing the letter.(a/b/c/d)"<<endl;
	cin>>input;

	switch (input){
    case 'a':
        int n,i;
        i=1;
    	cout<<"Enter a number:"<<endl;
    	cin>>n;
    	for(n;n!=0;n--){
    		cout<<n<<" "<<i<<" ";
    		i++;
		}
        break;

    case 'b':
    	int maxm,counter,num,sum;
    	cout<<"Enter a number:"<<endl;
    	cin>>maxm;
    	counter=num=sum=1;
    	while(counter<maxm){
            num=num+3;
            sum=sum+num;
            counter++;
            }
    	cout<<sum;
        break;

    case 'c':
        cout<<"Enter the number(s): "<<endl;
        int v,total,number;
        v=total=0;
        do{
            v++;
            cin >> number;
            total+=number;
            } while (number!=0);
        cout << (float) total/(v-1);
        break;

    case 'd':
        cout<<"You have exited!";
        exit (0);
        break;

    default:
        cout << "Please select in the choices of the menu.";}
}
