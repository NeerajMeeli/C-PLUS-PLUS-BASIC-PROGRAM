//WAP to modul operator are using reminder
#include<iostream>
#define clrscr()system("cls")
using namespace std;
    int main()
    {
        int num1,num2,reminder=0;
        cout<<"Enter a number:";
        cin>>num1;
        cout<<"Enter a number:";
        cin>>num2;
        reminder=num1%num2;
        cout <<"Reminder is : "<<reminder;


        return 0;
    }