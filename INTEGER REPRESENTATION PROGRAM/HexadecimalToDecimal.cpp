
   //___________________________________first program_______________________________
//WAP to convert Hexadecimal into decimal value.

#include<iostream>
#define clrscr()system("cls")
using namespace std;
    int main()
    {
        int Neeraj=0x13;  //This is Hexadecimal value          //Formula is octal to decimal
        //convert octal to Hexadecimal                        // Octal (13)16 - base
        cout <<"Answer is : "<<Neeraj<<"  Hexadecimal";     // 1*168power1 + 3*16power0
                                                              //DECIMAL= 8 + 3 = 11

        // This is impalicit type conversion                                                

        return 0;
            }
    

    //OUTPUT IS: 11

 
//_____________________________________second program_____________________________
/*
#include<iostream>
#define clrscr()system("cls")
using namespace std;
    int main()
    {
        int Neeraj=0x45;  //This is  Hexadecimal value
        //convert  Hexadecimal to  Decimal 
        cout <<"Answer is : "<<Neeraj<<"   Hexadecimal";

        // This is impalicit type conversion
        
        return 0;
    }
    */

   //OUTPUT IS: 69 Hexadecimal


//__________________________________________________________________
//Addition of octal to Hexadecimal number
/*
#include<iostream>
using namespace std;
    int main()
    {
        int a;
        a=015+0x13;
        cout<<"Answer is :"<<a;
    }
*/

//OUTPUT : Answer is : 32
