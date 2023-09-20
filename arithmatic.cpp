#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
       int num1 , num2;
       cout<<"Enter the two integer value :";
       cin>> num1 >> num2 ;

       int sum = num1 + num2 ;
       cout <<"Sum of the two value :"<< sum ;
       cout << endl;

       int subtraction  = num1 - num2 ;
       cout <<" subtraction of the two value :"<< subtraction  ;
       cout << endl;

       int multiplication  = num1 * num2 ;
       cout <<" subtraction of the two value :"<< multiplication ;
       cout << endl;


        int divition = (float) num1 / num2 ; // type casting
        cout <<" Divition of the two value :"<< divition ;
        cout << endl;

       int remainder =  num1 % num2 ;
       cout <<" Remainder of the two value :"<< remainder ;
       cout << endl;

       getch();
}
