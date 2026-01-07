//Advanced-9- 2
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
        cout << "\n" ;
    
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




void Frequency_For_All_Numbers(int Number)
{
    
    
    for(int i = 0 ; i <= 9 ; i++)
    {
         short DigitsFrequency ;
        
         DigitsFrequency = Digits_Frequency(Number , i) ;
         
         if(DigitsFrequency > 0)
         {
            cout << "Digit " << i << " frequency is "  << DigitsFrequency << " time(s)\n\n"  ;
            
         }
         
         
    }
    
    
    
}



/**

void Print_Result(int Sum , int Digits)
{
    if(Sum == 0)
    {
        cout << "Digits " << Digits << " not Frequency in Number\n " ;
    }    
    else
        cout << "Digits " << Digits << " Frequency is " << Sum << " time(s) \n " ;
}

**/
int main()
{
   Frequency_For_All_Numbers(Read_Positive_Numbers(" plese enter Number : " )) ;
}

