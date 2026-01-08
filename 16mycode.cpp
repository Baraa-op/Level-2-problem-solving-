//Advanced-15- 2
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;


/**
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
**/






void Print_Latter_From_AAA_To_ZZZ()
{
    for(int i = 65 ; i <= 90 ; i++)
    {
        for(int j = 65 ; j <= 90 ; j++)
        {
           for(int p = 65 ; p <= 90 ; p++)
            {
                cout << char(i) << char(j)  << char(p) ;
                cout << "\n" ;
            }
            
        }
    }
}






int main()
{
   //int Number = Read_Positive_Numbers("plese enter Number : " );
   Print_Latter_From_AAA_To_ZZZ();
}

    
