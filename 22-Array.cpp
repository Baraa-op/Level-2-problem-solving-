//Advanced-22- 2
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std  ;

int Read_Positive_Numbers(string Message)
{

    int Number = 0   ;
    do
    {
        cout << Message ;
        cin >> Number;
        cout << "\n" ;

    } while(Number <= 0 );

    return Number;


}



void Read_Array(int Arr[100], int &ArrLength)
{

    cout << "\nPlese enter length of array : " ;
    cin >> ArrLength;


    for(int i = 0 ; i<ArrLength ; i++)
    {
        cout << "Elements [ " << i + 1 << " ] : " ;
        cin >> Arr[i] ;
    }
    cout <<"\n" ;

}

void Print_Array(int Arr[100], int ArrLength)
{
    for(int i = 0 ; i<ArrLength ; i++)
    {
        cout << Arr[i] << " " ;
    }
}


int Time_Repeated(int Number , int Arr[100], int ArrLength)
{
    int Counter = 0 ;
    for(int i = 0 ; i<ArrLength ; i++)
    {
        if(Number == Arr[i])
        {
            Counter++ ;
        }
    }

    return Counter ;
}



int main()
{

//srand((unsigned)time(NULL));
//int Number = Read_Positive_Numbers("plese enter Number : ");

    int ArrLength ;
    int Arr[100] ;
    int Number_To_Check ;
    cout << "\n" ;

    Read_Array(Arr, ArrLength) ;
    Print_Array(Arr, ArrLength);
    cout << "\n" ;
    Number_To_Check=Read_Positive_Numbers("plese enter Number you Want to check : ");
    cout << "Number " << Number_To_Check << " is Reapeted " ;
    cout << Time_Repeated(Number_To_Check , Arr, ArrLength) << " time(s) " ;
}
