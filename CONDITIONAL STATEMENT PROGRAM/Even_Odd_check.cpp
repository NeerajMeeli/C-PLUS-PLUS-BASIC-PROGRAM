/*  WAP in which take input from the user and check the num is Odd or Even 
    using conditional statement. */

#include<iostream>
using namespace std;
    int main()
    {
        int num;
        cout<<"Enter the any integer num :";
        cin>>num;
        if(num%2==0)
        {
            cout<<"This number is Even :"<<num;
        }
        else
        {
            cout<<"This number is Odd :"<<num;
        }
        return 0;
    }
