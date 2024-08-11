#include<iostream>

#include<conio.h>

using namespace std;

int main ()


{
    int num, i;

    cout<< " Please input a value you want to multiplty: ";
    cin>> num;

    for (i=1;i<=10;i++)
{
      cout<<num<<"X"<<i<<"="<<(num*i)<< endl;
}
cout<< "Loop Exicuted done!";



    getch();
}
