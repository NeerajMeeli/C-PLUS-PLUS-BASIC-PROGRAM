//Insertion Operation impliment data structure using array at the beginning.

#include<iostream>
using namespace std;
    int main()
    {
        int arr[10],n,i=0,x;
        cout <<"Enter a limit of array:";
        cin>>n;
        cout<<"Enter a value of array:";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout <<"Enter element at the beginning:";
        cin>>x;
        for(int i=n;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=x;
        n++;
        cout <<"print the all value of array:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }

        return 0;
    }




//_______________________________Impliment____________________________________
//Insertion Operation impliment data structure using array at the end .
/*
#include<iostream>
using namespace std;
    int main()
    {
        int n,arr[10],i=0,x;
        cout <<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter a value or an array:";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            
        }
        
        cout<<"Enter the element at the end:";
        cin>>x;

        arr[i]=x;
        n++;

        cout<<"view the all element of an array:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }


        return 0;
    }
    */


  

//______________________________impliment______________________________________

//Insertion Operation impliment data structure using array at the any given index .

/*
#include<iostream>
using namespace std;
    int main()
    {
        int arr[20],n,i=0,x,pos;
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        cout<<"Enter the position of any given index:";
        cin>>pos;
        cout<<"Enter the position of value :";
        cin>>x;
        for(int i=n;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=x;
        n++;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }


        return 0;
    }
    */

  