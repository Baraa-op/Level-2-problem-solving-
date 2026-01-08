//Advanced-15- 2
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







void Print_Latter_Pattern(int Number)
{
    for(int i = 1 ; i <= Number; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout << char(i+64)  ;
        }
        cout << "\n" ;
    }
}






int main()
{
   int Number = Read_Positive_Numbers("plese enter Number : " );
   Print_Latter_Pattern(Number);
}

    
