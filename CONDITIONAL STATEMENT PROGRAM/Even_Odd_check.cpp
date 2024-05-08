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