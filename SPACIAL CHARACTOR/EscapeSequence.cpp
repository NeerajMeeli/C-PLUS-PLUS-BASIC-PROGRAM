 //Escape sequence in c++ Spacial charector
//  \n  - new line charector
//  \t  - tab charactor 
//  \b  - back space
//  \r  - remove the preview space
//  \a  - alarm (sound)

#include<iostream>
#define clrscr()
using namespace std;
    int main()
    {
        clrscr();
        //  \n  - new line charector
        cout <<"Neeraj Kumar Thakur \nHow are you"<<endl;
        //  \t  - tab charactor 
        cout <<"Neeraj Kumar Thakur\tHow are you"<<endl;
        //  \r  - remove the preview space
        cout<<"                \rNeeraj kumar Thakur"<<endl;
        //  \a  - alarm (sound)
        cout<<"\aNeeraj Kumar Thakur"<<endl;

        return 0;
    }
