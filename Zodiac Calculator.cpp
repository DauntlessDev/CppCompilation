//WELCOME TO THE ZODIAC SIGN CALCULATOR!!!
#include <iostream>

using namespace std;
int main(){

	int m,d,y,a; // month, day, year, and the age
	const int yr = 2018; // constant, based on the current year

	cout<<"Enter your Birthdate(m dd yyyy): \nExample: 9 5 1993 \n";
	cin>>m;
	cin>>d;
	cin>>y;

    a = yr - y;
    // If earlier than 1900, it will display "Invalid Year"
	if (y >= 1700 && y<=yr){
        if(m==1){
            if (d>=1 && d<=19){
                cout<<"January "<<d<<", "<<y<<" is now " <<a<<" a "<<"Capricorn"<<endl;
            }
            else if (d>=20 && d<=31){
                cout<<"January "<<d<<", "<<y<<" is now " <<a<<" a "<<"Aquarius"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==2){
            if (d>=1 && d<=18){
                cout<<"February "<<d<<", "<<y<<" is now " <<a<<" a "<<"Aquarius"<<endl;
            }
            else if(d>=19 && d<=28){
                cout<<"February "<<d<<", "<<y<<" is now " <<a<<" a "<<"Pisces"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==3){
            if (d>=1 && d<=20){
                cout<<"March "<<d<<", "<<y<<" is now " <<a<<" a "<<"Pisces"<<endl;
            }
            else if(d>=21 && d<=31){
                cout<<"March "<<d<<", "<<y<<" is now " <<a<<" a "<<"Aries"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==4){
            if (d>=1 && d<=19){
                cout<<"April "<<d<<", "<<y<<" is now " <<a<<" a "<<"Aries"<<endl;
            }
            else if(d>=20 && d<=30){
                cout<<"April "<<d<<", "<<y<<" is now " <<a<<" a "<<"Taurus"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==5){
            if (d>=1 && d<=20){
                cout<<"May "<<d<<", "<<y<<" is now " <<a<<" a "<<"Taurus"<<endl;
            }
            else if(d>=21 && d<=31){
                cout<<"May "<<d<<", "<<y<<" is now " <<a<<" a "<<"Gemini"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==6){
            if (d>=1 && d<=20){
                cout<<"June "<<d<<", "<<y<<" is now " <<a<<" a "<<"Gemini"<<endl;
            }
            else if(d>=21 && d<=30){
                cout<<"June "<<d<<", "<<y<<" is now " <<a<<" a "<<"Cancer"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==7){
            if (d>=1 && d<=22){
                cout<<"July "<<d<<", "<<y<<" is now " <<a<<" a "<<"Cancer"<<endl;
            }
            else if(d>=23 && d<=31){
                cout<<"July "<<d<<", "<<y<<" is now " <<a<<" a "<<"Leo"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==8){
            if (d>=1 && d<=22){
                cout<<"August "<<d<<", "<<y<<" is now " <<a<<" a "<<"Leo"<<endl;
            }
            else if(d>=23 && d<=31){
                cout<<"August "<<d<<", "<<y<<" is now " <<a<<" a "<<"Virgo"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==9){
            if (d>=1 && d<=22){
                cout<<"September "<<d<<", "<<y<<" is now " <<a<<" a "<<"Virgo"<<endl;
            }
            else if(d>=23 && d<=30){
                cout<<"September "<<d<<", "<<y<<" is now " <<a<<" a "<<"Libra"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==10){
            if (d>=1 && d<=22){
                cout<<"October "<<d<<", "<<y<<" is now " <<a<<" a "<<"Libra"<<endl;
            }
            else if(d>=23 && d<=31){
                cout<<"October "<<d<<", "<<y<<" is now " <<a<<" a "<<"Scorpio"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==11){
            if (d>=1 && d<=21){
                cout<<"November "<<d<<", "<<y<<" is now " <<a<<" a "<<"Scorpio"<<endl;
            }
            else if(d>=22 && d<=30){
                cout<<"November "<<d<<", "<<y<<" is now " <<a<<" a "<<"Sagittarius"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else if(m==12){
            if (d>=1 && d<=21){
                cout<<"December "<<d<<", "<<y<<" is now " <<a<<" a "<<"Sagittarius"<<endl;
            }
            else if(d>=22 && d<=31){
                cout<<"December "<<d<<", "<<y<<" is now " <<a<<" a "<<"Capricorn"<<endl;
            }
            else{
                cout<<"Invalid Day"<<endl;
            }
        }
        else{
            cout<<"Invalid Month"<<endl;
        }
	}
    else{
        cout<<"Invalid Year"<<endl;
    }
	return 0;
}
