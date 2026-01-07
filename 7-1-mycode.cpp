
//Advanced-7- 2
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


void Reavers_Of_Digits(int Number)
{
    int Sum = 0 ;
    int Remainder = 0;
    while(Number > 0)
    {
        Remainder = Number % 10 ;
        Number = Number / 10 ;
        cout << Remainder ;
        
        
    }
    //cout << "sum of digits : "<< Sum << "\n" ;
    
}






int main()
{
    
    Reavers_Of_Digits(Read_Positive_Numbers("plese enter Number : "));
}
