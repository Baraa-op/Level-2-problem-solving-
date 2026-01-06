
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





void Perfect_Number_From1ToN(int Number)
{
    for(int i = 1 ; i <= Number ; i++)
    {
        if(Check_Perfect_Number(i))
            cout << i << " is Perfect Number\n" ;
            
    }
}







int main()
{
    Perfect_Number_From1ToN(Read_Positive_Numbers("plese enter Number : "));
}
