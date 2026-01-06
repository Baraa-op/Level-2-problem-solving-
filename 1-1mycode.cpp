//Advanced-1 - 2
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;


void Print_Multiplication_Table()
{
    //int Number;
    for(int Counter = 1 ; Counter <= 10 ; Counter++)
    {
        
        cout << Counter << "    | " ;
		for(int i = 1 ; i <= 10 ; i++)
        {
            cout << "" ; 
            cout << Counter << " × " << i << " = " << "|" << Counter * i << "|  " ;
            cout << "" ;
        }
        
        cout << "\n" << endl;
    }


}






int main()
{
   Print_Multiplication_Table();
}
