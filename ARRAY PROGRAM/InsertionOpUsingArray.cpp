/*WAP in which take the input from user and print the  element of array
*/

#include<iostream>
using namespace std;
    int main()
    {
        int n;
        cout <<"Enter size of an array:";
        cin >>n;
        int arr[n],i=1;
        cout <<"Enter value of an array:"<<endl;
        // do{
        //     cin>>arr[i];
        //     i++;
        // }while(i<=n);


        // while(i<=n){
        //     cin>>arr[i];
        //     i++;
        // }


        for(; i<=n ; )
        {
            cin>>arr[i];
            i++;
        }
        cout<<"print the all element of an array :";
        /*
        //Array print method
        while(i<=n)
        {
            cout<<arr[i]<<endl;
            i++;
        }
        */

    /*
    //Array print method
        do{
            cout<<arr[i]<<endl;
            i++
        }
        while(i<=n);

        */

    /*
    //Array print method
        for(i=1;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
        */

       //Array print method
       i=1;
        for( ; i<=n ; )
        {
            cout<<arr[i]<<endl;
            i++;

        }
        return 0;
    }