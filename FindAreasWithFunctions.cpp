#include <iostream>
#include <stdlib.h>
using namespace std;

void startDraw();
void RectangleArea();
void CircleArea();
int main()
{
    startDraw();
}

void startDraw(){
    char choice;
    cout<<"Please choose an action:"<<endl;
    cout<<"a. Find the Area of Rectangle"<<endl;
    cout<<"b. Find the Area of Circle"<<endl;
    cout<<"c. Exit"<<endl;
    cin>>choice;

    switch(choice){
        case 'a':
                RectangleArea();
                break;
        case 'b':
                RectangleArea();
                break;
        case 'c':
                exit(1);
        default:
                startDraw();
    }
}

void RectangleArea(){
    int length, width;
    cout<<"Please enter the length and width: "<<endl;
    cin>>length>>width;
    cout<<"The area of the rectangle is: "<<length*width ;
}

void CircleArea(){
    int radius;
    int const pi = 2.1416;
    cout<<"Please enter the radius: "<<endl;
    cin>>radius;
    cout<<"The area of the circle is: "<<pi*radius;
}
