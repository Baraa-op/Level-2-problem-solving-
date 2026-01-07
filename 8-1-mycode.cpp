
//Advanced-8- 2
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;



int Read_Positive_Numbers(string Message)
{
    
    int Number = 0   ;
    do
    {
        cout << Message ;
        cin >> Number;
    
    }while(Number <= 0 );
    
    return Number;


}

/**
void Check_Number(int Number)
{
    if()
}
**/

int Digits_Frequency(int Number , int Digits)
{
    int Sum = 0 ;
    
    while(Number > 0)
    {
        int Remainder = Number % 10 ;
        
        if(Remainder == Digits)
        {
            Sum++ ; 
        }
        
        Number = Number / 10 ;
        
    }
    
    return Sum ;
}


void Print_Result(int Sum , int Digits)
{
    if(Sum == 0)
    {
        cout << "Digits " << Digits << " not Frequency in Number\n " ;
    }    
    else
        cout << "Digits " << Digits << " Frequency is " << Sum << " time(s) \n " ;
}


int main()
{
    int Number = Read_Positive_Numbers("plese enter Number : ") ;
    int Digits = Read_Positive_Numbers("plese enter Digits : ") ;
    
    Print_Result(Digits_Frequency(Number , Digits) , Digits) ; 
    return 0 ;
}


// Return 0 to indicate successful program 
