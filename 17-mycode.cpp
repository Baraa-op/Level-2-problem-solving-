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

string Read_Passwors()
{
    string Pass ;
    cout << "plese enter password : ";
    cin >> Pass ;
    
    return Pass ;
}




bool Guess_3Latter_Password(string Pass)
{
    string Counter;
    int k = 0 ;
    for(int i = 65 ; i <= 90 ; i++)
    {
        for(int j = 65 ; j <= 90 ; j++)
        {
           for(int p = 65 ; p <= 90 ; p++)
            {
                Counter += char(i) ;
                Counter += char(j) ;
                Counter += char(p) ;
                
                
                k++;
                  
                if(Counter == Pass)
                {
                    cout << "\n\n" ;
                    cout << "password is " << Counter ;
                    cout << "\nFind after " << k << " trials" ;
                    cout << "\n" ;
                    return true ;
                }  
               
                cout << "trial " << k << " : " << char(i) << char(j)  << char(p) ;
                
                cout << "\n" ;
                  
                   
                    
                    
                
                

                
                Counter = "" ;
            }
            
        }
    }
    
    return false;
}






int main()
{
   //int Number = Read_Positive_Numbers("plese enter Number : " );
   Guess_3Latter_Password(Read_Passwors());
}

    
