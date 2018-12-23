#include<iostream>
#include<stdlib.h>
#include <cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    char whatDraw;
    char ifYesNo;
    int randomNumber;
    int pickSize = 6;
    int yourPick[pickSize];
    int lottoMax = 42;
    int lottoResult[pickSize];
    int prize;

    DRAW:
        int totalPrize = 0;
        int totalCorrects = 0;
        cout<<"Which draw will you join? (Type only a/b/c) "<<endl;
        cout<<"a. 6/42 (1000 for every win)"<<endl;
        cout<<"b. 6/45 (2000 for every win)"<<endl;
        cout<<"c. 6/49 (3000 for every win)"<<endl;
        cout<<"d. Exit"<<endl;

        cin>>whatDraw;
        if (whatDraw =='a'){
            lottoMax = 42;
            prize = 1000;
            system("CLS");
        }else if (whatDraw=='b'){
            lottoMax = 45;
            prize = 2000;
            system("CLS");
        }else if (whatDraw=='c'){
            prize = 3000;
            lottoMax = 49;
            system("CLS");
        }else if (whatDraw =='d'){
            system("CLS");
            cout<<"You have exited."<<endl<<endl;
            exit(1);
        }else{
            system("CLS");
            goto DRAW;
        }

    PICK:
        cout<<"Please type 'Y' if you want to enter your own digits,";
        cout<<" or 'N' to let the machine generate a six random digits"<<endl;
        cin>>ifYesNo;
        if (ifYesNo == 'Y'){
                //INPUT:
                system("CLS");
                cout<<"Enter the six digits : 1<= Digit <="<<lottoMax<<endl;
                for (int i=0; i<pickSize; i++){
                    cin>>yourPick[i];
                 }}
        else if (ifYesNo == 'N'){
            system("CLS");
            cout<<"Your lucky pick: "<<endl;
            for (int i=0; i<pickSize; i++){
                randomNumber = 1 + (rand() % lottoMax);
                yourPick[i] = randomNumber;
                cout<<yourPick[i]<<" ";
        }cout<<endl;}
        else{
            system("CLS");
            goto PICK;
        }

    cout<<endl<<"The Winning Lotto "<<lottoMax<<" Numbers are: "<<endl;
    for (int i=0; i<pickSize; i++){
        randomNumber = 1 + (rand() % lottoMax);
        lottoResult[i] = randomNumber;
        cout<<lottoResult[i]<<" ";

        for (int j=0; j<pickSize; j++){
            if  (yourPick[j] == lottoResult[i]){
                totalPrize += prize;
                totalCorrects++;
        }}
    }

    if (totalCorrects > 0){
        cout<<endl<<endl<<"You got "<<totalCorrects<<"/"<<lottoMax<<" and your total winning is "<<totalPrize<<endl<<endl;
        TRY:
            cout<<"Wanna try again? Enter 'Y' or 'N'"<<endl;
            cin>>ifYesNo;
            if (ifYesNo == 'Y'){
                system("CLS");
                goto DRAW;
            }else if (ifYesNo == 'N'){
                system("CLS");
                cout<<"You have exited."<<endl<<endl;
                exit(1);
            }else{
                system("CLS");
                goto TRY;
            }
    }else{
        cout<<endl<<endl<<"Got no matches, Try again!"<<endl<<endl;
        system("PAUSE");
        system("CLS");
        goto DRAW;
    }
}