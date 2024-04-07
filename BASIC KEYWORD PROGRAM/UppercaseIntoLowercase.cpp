//WAP to which upper case Alphabet and to change lower case charactor .
#include<iostream>
using namespace std;
    int main()
    {
        char ch;
        cout <<"Enter a charctor upper case:";
        cin>>ch;
        ch=ch+32;
        cout <<"Lower case is :"<<ch;
        return 0;
    }

/*
OUTPUT IS :
Enter a charector Upper case:a
lower case is :A
*/