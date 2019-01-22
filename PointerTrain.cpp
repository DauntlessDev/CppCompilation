#include <iostream>
using namespace std;

int main(){
	int x(7), y(10),*p1,*p2;
	p1 = &x;
	p2 = &y;
	cout<< "x:" << x << " y:" << y << " *p1:" << *p1
		<< " *p2:" << p2 << endl;
	
	p1 = p2;
	cout<< "x:" << x << " y:" << y << " *p1:" << *p1
		<< " *p2:" << *p2 << endl;
	
	y = 20;
	cout<< "x:" << x << " y:" << y << " *p1:" << *p1
		<< " *p2:" << *p2 << endl;
		
	x = *p1 + y;
	cout<< "x:" << x << " y:" << y << " *p1:" << *p1
		<< " *p2:" << *p2 << endl;
		
	p2 = &x;
	cout<< "x:" << x << " y:" << y << " *p1:" << *p1
		<< " *p2:" << *p2 << endl;
		
	*p2 = x + y + 5;
	cout<< "x:" << x << " y:" << y << " *p1:" << *p1
		<< " *p2:" << *p2 << endl;
		
	p2 = p1;
	cout<< "x:" << x << " y:" << y << " *p1:" << *p1
		<< " *p2:" << *p2 << endl;
		
	system("pause > 0");
	return 0;
		
			
}
