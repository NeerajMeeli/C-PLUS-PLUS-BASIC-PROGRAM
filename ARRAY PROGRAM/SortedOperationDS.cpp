//______________________________Implimentation_______________________________
//impliment Sorted operation of data structure 


#include<iostream>
using namespace std;
    int main()
    {
        int arr[20],size,temp;
        cout<<"Enter the size of an array:";
        cin>>size;
        cout<<"Enter the value of an array:";
        for (int i=0;i<size;i++)
            {
                cin>>arr[i];
            }
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++)
                {
                    if(arr[i]<arr[j])
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }

                }

            }
            cout<<"The sorted array:";
            for(int i=0;i<size;i++)
                {
                    cout<<arr[i]<<endl;
                }
        return 0;
    }

    

   //______________________________Practice_______________________________
//impliment Sorted operation of data structure 

/*
#include<iostream>
using namespace std;
    int main()
    {
        int arr[20],size,temp;
        cout<<"Enter size of array:";
        cin>>size;
        cout<<"Enter the element of an array:";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];

        }
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        cout<<"The sorted an array is:";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<endl;
        }

        return 0;
    }

    */

   //______________________________Practice_______________________________
//impliment the Sorted operation of data structure 
/*
#include<iostream>
using namespace std;
    int main()
    {
        int arr[20],size,temp;
        cout<<"Enter size of array:";
        cin>>size;
        cout<<"Enter the element of an array:";
      for(int i=0;i<size;i++)
      {
        cin>>arr[i];
      }
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
          
          
        
        cout<<"The sorted an array is:";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<endl;
        }
        return 0;
    }
    */