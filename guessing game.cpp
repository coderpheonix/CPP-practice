#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;


int main ()


{


    while (1)
    {


      int GueesingNumber, InputNumber;

    cout << " Please Guess a Number between 1-5 : ";
    cin>> InputNumber;

    GueesingNumber= 1+ rand() %5;

    if (GueesingNumber== InputNumber)
    {

        cout << "You Have Won The Games Congratlations"<<endl <<endl;
    }
     else
     {
         cout<<"You have lost The Games"<< endl;
         cout << "The Random Number was "<<GueesingNumber<< endl << endl;
     }

    }


   getch();
}
