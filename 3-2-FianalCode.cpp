//Advanced-2 - 2
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


bool Check_Perfect_Number(int Number)
{
    int Sum = 0 ;
    for(int i = 1 ; i < Number ; i++)
    {
        if(Number % i == 0)
            Sum = Sum + i ;
    }
    
    return Number == Sum ;
}

void Print_Result(int Number)
{
    if(Check_Perfect_Number(Number))
    {
        cout << Number << " is Perfect Number " ;
    }
    else
        cout << Number << " is not Perfect Number " ;
}















int main()
{
    Print_Result(Read_Positive_Numbers("plese enter Number : "));
}
