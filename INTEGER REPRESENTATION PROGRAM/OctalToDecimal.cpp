
   //___________________________________first program_______________________________
//WAP to convert octal value into decimal value.

#include<iostream>
#define clrscr()system("cls")
using namespace std;
    int main()
    {
        int Neeraj=013;  //This is octal value          //Formula is octal to decimal
        //convert octal to decimal                      // Octal (13)8 - base
        cout <<"Answer is : "<<Neeraj<<"  decimal";     // 1*8power1 + 3*8power0
                                                        // decimal= 8 + 3 = 11

        // This is impalicit type conversion                                                

        return 0;
    }

    

 /*
//_____________________________________second program_____________________________
#include<iostream>
#define clrscr()system("cls")
using namespace std;
    int main()
    {
        int Neeraj=045;  //This is octal value
        //convert octal to decimal 
        cout <<"Answer is : "<<Neeraj<<"  decimal";

        // This is impalicit type conversion
        
        return 0;
    }

*/