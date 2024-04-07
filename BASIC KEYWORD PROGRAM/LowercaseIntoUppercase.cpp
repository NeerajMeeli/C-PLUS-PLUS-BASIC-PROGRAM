//WAP to which lower case Alphabet and to change upper case charactor .
#include<iostream>
using namespace std;
    int main()
    {
        char ch;
        cout <<"Enter a charctor lower case:";
        cin>>ch;
        ch=ch+32;
        cout <<"Upper case is :"<<ch;
        return 0;
    }

/*
OUTPUT IS :
Enter a charector lower case:a
lower case is :A
*/