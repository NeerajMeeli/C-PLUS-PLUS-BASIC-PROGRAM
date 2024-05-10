/* WAP in which take input from user and check the student marks number who  
   are first division and second division ,third divison pass */

#include<iostream>
using namespace std;
        int main()
        {
            int marks;

            cout<<"Enter your marks :";
            cin>>marks;

            if(marks>=300&&marks<=500)
            {
                cout<<"Congrate ! First division Pass";
            }
            else if(marks>=250&&marks<=300)
            {
                cout<<"congrate! Second division pass ";
            }
            else if(marks>=150&&marks<=250)
            {
                cout<<"Very Bad Third divison pass ";
            }
            else
            {
                cout<<"Sorry You are fail ";
            }

            return 0;
        }