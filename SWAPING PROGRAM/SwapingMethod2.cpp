//WAP to swap without using third variable

 #include<iostream>
#define clrscr()system("cls")
using namespace std;
    int main()
    {
        int a,b;
        cout<<"Enter a number:";
        cin>>a;
        cout<<"Enter a number:";
        cin>>b;
        cout <<"BEFORE SWAPING NUMBER :"<<a<<"\t"<<b;
                //swaping method
                      a=a+b;
                      b=a-b;
                      a=a-b;        
         cout <<"\nAFTER SWAPING NUMBER :"<<a<<"\t"<<b;              

        return 0;

    }