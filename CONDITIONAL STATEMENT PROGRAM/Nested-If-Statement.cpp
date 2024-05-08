/* WAP to in which take input marks form user and check the students 
    marks > 300 and , Attendence > 75 than pass exam. */

#include<iostream>
using namespace std;
    int main()
    {
        int marks ,Attendence;
        cout<<"Enter your marks :";
        cin>>marks;
        cout<<"Enter your Attendence 75 to 100  :";
        cin>>Attendence;

        if(marks>=300&&marks<=500)
        {
            if (Attendence>=75&&Attendence<101)
            {
                cout<<"Congratulation you are pass :"<<marks;
            }
            else 
            {
                cout<<"Sorry yout attendence low :"<<Attendence;
            }
            
        }
        else
            {
                cout<<"Sory you are fail :";
            }
            
        return 0;
    }