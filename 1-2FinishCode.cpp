//Advanced-1 - 2
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;


void Print_Header()
{
	cout << "\n\n\t Multiplication Table From 1 - 10 \n\n" ; 
	cout << "\t" ;
	cout << "\t" ;
	for(int i = 1 ; i <= 10 ; i++)
	{
		cout << i << "\t" ;
		
	}
	cout << "\n__________________________________________________________________________________________\n" ;
}

string ColumSperator(int i)
{
	if(i < 10)
		return "    | " ;
	else
		return "   | " ;
        
        
}

void Print_Multiplication_Table()
{
    Print_Header() ;
	
    for(int i = 1 ; i <= 10 ; i++)
	{
        
        cout << " " << i << ColumSperator(i) << "\t";
        
        for(int j = 1 ; j <= 10 ; j++)
        {
            
            cout << i * j << "\t";
            
        }
        
        cout << "\n" ;
    }		
		


		
		
    


}






int main()
{
   Print_Multiplication_Table();
}
