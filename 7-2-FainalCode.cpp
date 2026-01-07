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


int Reverse_Of_Digits(int Number)
{
    int Number2 = 0 ;
    int Remainder = 0;
    while(Number > 0)
    {
        Remainder = Number % 10 ;
        Number = Number / 10 ;
        Number2 = Number2 * 10 + Remainder;
        
        
    }
    //cout << "sum of digits : "<< Sum << "\n" ;
    return Number2 ;
    
}






int main()
{
    int Number = Read_Positive_Numbers("plese enter Number : ");
    cout << "\n" ;   
    cout << "reverse of number is : " 
        << Reverse_Of_Digits(Number) ;
}

