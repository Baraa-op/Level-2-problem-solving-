//Advanced-3 - 2
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;

// enum enPerfect_NotPerfect{Perfect = 1 , NotPerfect = 2};

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


void Check_Perfect_Number(int Number)
{
    int Sum = 0 ;
    for(int i = 1 ; i < Number ; i++)
    {
        if(Number % i == 0)
            Sum = Sum + i ;
    }
    if(Sum == Number)
        cout << Number << " is Perfect Number " ;
        //return enPerfect_NotPerfect::Perfect;
    else
        cout << Number << " is not Perfect Number " ;    
}

/**
string Print_Result(enPerfect_NotPerfect PerfectNotPerfect)
{
    switch(PerfectNotPerfect)
    {
        case Perfect : return "this number is perfect Number" ;
    }
}
**/

void Number_Of_Checks(int Number)
{
    
    
   
    for(int i = 1 ; i <= Number ; i++)
    {
        Check_Perfect_Number(Read_Positive_Numbers("plese enter Number : "));
        cout << "\n\n" ;
    }
    
    
}


int main()
{
    Number_Of_Checks(Read_Positive_Numbers("plese enter how many time you need to check : "));
}
