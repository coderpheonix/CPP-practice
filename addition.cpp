#include<iostream>
#include<conio.h>


using namespace std;




// for addition of the number

void addition(int a , int b)
{
    int sum =a+b;
    cout <<"The addition of two value is:" <<sum<< endl;
}




int main ()

{
  int a,b;
    cout << " Inter the first value : " ;
    cin>> a;
    cout <<"Inter the second value : ";
    cin>>b;

    addition(a,b);


    getch();
}
