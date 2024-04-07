//WAP to swaping using third variable

 #include<iostream>
#define clrscr()system("cls")
using namespace std;
    int main()
    {
        int a,b,c;
        cout<<"Enter a number:";
        cin>>a;
        cout<<"Enter a number:";
        cin>>b;
        cout <<"BEFORE SWAPING NUMBER :"<<a<<"\t"<<b;
                //swaping method
                      c=a;
                      a=b;
                      b=c;        
         cout <<"\nAFTER SWAPING NUMBER :"<<a<<"\t"<<b;              

        return 0;

    }