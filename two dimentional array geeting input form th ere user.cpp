#include<iostream>
#include<conio.h>


using namespace std;

int main ()

{
    int a , i,j, b;

    cout<<"How many row do you want : ";
    cin>> a;
    cout<<"How many column do you want : " ;
    cin>> b;



    int mat[a][b];


    for (
         i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            cout<<"Inter The Element of ["<<i<<"]"<<"["<<j<<"]" << ":";
            cin >>mat[i][j];

        }
        cout<< " ";
    }

    //print



    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
           cout<<mat[i][j]<<"\t ";


        }
         cout<<endl;

    }





    return 0;
}
