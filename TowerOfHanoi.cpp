#include <bits/stdc++.h> 
using namespace std; 
void towerOfHanoi(int disks_num, char from_peg, char destination_peg, char secondary_peg)  {  
    if (disks_num == 1){  
        cout << "Disk 1 moved from " << from_peg <<" to " << destination_peg<<endl;  
        return;  
    }// if number of disk is only 1
    towerOfHanoi(disks_num - 1, from_peg, secondary_peg, destination_peg);  // recursion 1
    cout << "Disk " << disks_num << " moved from " << from_peg <<" to " << destination_peg << endl;  
    towerOfHanoi(disks_num - 1, secondary_peg, destination_peg, from_peg);  // recursion 2
}  
int main()  {
	int disks_num, choice; // declare necessary variables
	while (choice==1){
		system("CLS");
		cout<<"Enter '1' to input else other num to exit: ";
		cin>>choice; // variable for choice if exit or not
		cout<<"Input:";
		cin>>disks_num; // number of disks
	    towerOfHanoi(disks_num, 'A', 'C', 'B'); // fuction for the tower of hanoi
	    system("PAUSE"); // to provide pause to see the result
		}
}  
