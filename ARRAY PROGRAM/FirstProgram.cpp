//__________________________________________Method first____________________________
/*WAP to inplimant the enter the user  element of array and 
   print the  element of array using while loop*/

#include<iostream>
using namespace std;
    int main()
    {
        const int Size =5;
         int arr[Size];
        int i=1;
        int sum=0;
        cout <<"Enter a number of arr :";
       while(i<=Size){
         cin>>arr[i];
         i++;
         }
         cout <<"The array result print :";
         i=1;
         while (i<=Size)

         {
            cout <<arr[i];
            sum=sum+arr[i];
                 i++;
            cout <<endl;
         }
         cout <<"sum is :"<<sum<<endl;
         // if(sum%2==0){
         // cout <<"This num is Even:"<<sum<<endl;
         // }
         // else{
         //    cout <<"This num is Odd:"<<sum;
         // }
     
      // sum%2==0?cout <<"This num is Even: "<<sum<<endl: cout<<"This num is Odd"<<sum<<endl;
      //sum%2?cout <<"This num is odd: "<<sum<<endl: cout<<"This num is even"<<sum<<endl;
     return 0;

    }
    

//___________________________________Method second________________________________
/*WAP to inplimant the enter the user  element of array and 
   print the  element of array using do while loop*/

/*
#include<iostream>
using namespace std;
    int main()
    {
        const int Size =5;
         int arr[Size];
        int i=0;
         cout <<"Enter a number of arr :";
        do {
        
        cin>>arr[i];
         i++;
        }
         while(i<Size);

         i=0;
          cout <<"The array result print :";
         do {        
          cout<<arr[i];
          i++;
            cout<<endl;
         }
         while (i<Size);
                        
                    
        return 0;
    }
    */


//______________________________________Method third_______________________________
/*WAP to inplimant the enter the user  element of array and 
   print the element of array using for loop*/
/*

 #include<iostream>
using namespace std;
    int main()
    {
       // const int Size =5;
         int arr[5];
        int i=0;
         cout <<"Enter a number of arr :";
        for(; i<5;){
        cin>>arr[i];
        i++;
                }
         i=0;
          cout <<"enter are result print :";
         for(;i<5;)
         {
            cout <<arr[i]<<endl;
            i++;
         }
                    
        return 0;
    } 
    */
     