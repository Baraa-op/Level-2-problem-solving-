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
    for(int i = Number ; i > 0 ; i--)
    {
        for(int j = i ; j > 0 ; j--)
        {
            cout << i ; 
        }
        cout << "\n" ;
    }
}







int main()
{
   int Number = Read_Positive_Numbers("plese enter Number : " );
   Print_Inverted(Number);
}

    
