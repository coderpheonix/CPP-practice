#include<iostream>
#include<conio.h>


using namespace std;



// for addition of the number

void addition(int a , int b)
{
    int sum =a+b;
    cout <<"The addition of two value is:" <<sum<< endl;
}





// for subtraction of the number

void substraction(int a , int b)
{
    int result =a-b;
    cout <<"The substraction of two value is:" <<result<< endl;
}



// for multipilication of the number

void multipilication(int a , int b)
{
    int result=a*b;
    cout <<"The multipilication of two value is:" <<result<< endl;
}


// for division of the number

void  division(int a,int b)
{
    float result = (float)a/b;
    cout <<"The division of two value is:" <<result<<endl;
}


int main ()

{
  int a,b;
    cout << " Inter the first value : " ;
    cin>> a;
    cout <<"Inter the second value : ";
    cin>>b;

    addition(a,b);
    division(a,b);
    multipilication(a,b);
    substraction(a,b);


    getch();
}

