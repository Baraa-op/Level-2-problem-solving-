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






void Print_Inverted(int Number)
{
    //Number = Number + 64 ;
    for(int i = Number ; i > 0 ; i--)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout << char(i+64) ; 
        }
        cout << "\n" ;
    }
}







int main()
{
   int Number = Read_Positive_Numbers("plese enter Number : " );
   Print_Inverted(Number);
}

    
