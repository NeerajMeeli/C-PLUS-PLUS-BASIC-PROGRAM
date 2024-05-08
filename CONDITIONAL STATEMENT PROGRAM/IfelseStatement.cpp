#include<iostream>
using namespace std;
    int main()
{
    int marks;
    cout<<"Enter Your Matrix marks:";
    cin>>marks;
    if(marks>=300&&marks<=500)
    {
        cout<<"Congratulation  you are first division pass ";
    }
    else
    {
        cout<<"Sorry! you are fail ";
    }
    return 0;
}