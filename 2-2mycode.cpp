//Advanced-2 - 2
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;

enum enPrime_NotPrime {Prime = 1 , NotPrime = 2 } ;


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




enPrime_NotPrime Get_Prime_Number(int Number)
{
    int M = sqrt(Number) ;
    if(Number <= 1)
        return enPrime_NotPrime::NotPrime ;
        
    for(int Counter = 2 ; M >= Counter ; Counter++)
    {
        if(Number % Counter == 0)
            return enPrime_NotPrime::NotPrime;
            
        
    }
    
    return enPrime_NotPrime::Prime ;
}



void Print_Prime_From1ToN(int Number)
{
    for(int i = 1 ; i <= Number ; i++)
    {
        if(Get_Prime_Number(i) == enPrime_NotPrime::Prime)
        {
            cout << "prime number : " << i << "\n"  ;
        }
    }
}










int main()
{
    Print_Prime_From1ToN(Read_Positive_Numbers("plese enter Number : ")) ;
   //cout << Print_Result(Get_Prime_Number(Read_Positive_Numbers("enter num : "))) ;
}
