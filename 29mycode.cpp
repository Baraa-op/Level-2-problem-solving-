//Advanced-28- 2
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
enum enPrime_NotPrime {Prime = 1, NotPrime = 2 } ;


enPrime_NotPrime Get_Prime_Number(int Number)
{
    int M = sqrt(Number) ;
    if(Number <= 1)
        return enPrime_NotPrime::NotPrime ;

    for(int Counter = 2 ; M >= Counter ; Counter++)
    {
        if(Number % Counter == 0)
            return enPrime_NotPrime::NotPrime;


    }

    return enPrime_NotPrime::Prime ;
}

int Random_Number(int From, int To)
{
    int Random = rand() % (To - From + 1) + From ;
    return Random ;
}



void Random_Array(int Arr[100], int &ArrLength)
{

    cout << "Plese enter length of array : " ;
    cin >> ArrLength;


    for(int i = 0 ; i<ArrLength ; i++)
    {
        Arr[i] = Random_Number(1, 100) ;
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

void Copy_Prime_Array(int Arr[100],int Arr2[100], int ArrLength , int &Arr2Length)
{
     
    cout <<"Copy of array : \n " ;
    for(int i = 0 ; i<ArrLength ; i++)
    {
        if(Get_Prime_Number(Arr[i]) == enPrime_NotPrime::Prime)
        { 
            Arr2[Arr2Length] = Arr[i] ;
            Arr2Length++ ;
        }    
    }


}



int main()
{

    srand((unsigned)time(NULL));
    //int Number = Read_Positive_Numbers("plese enter Number : ");
    int Arr2Length = 0 ;
    int ArrLength ;
    int Arr[100] ;
    int Arr2[100] ;
    cout << "\n" ;
    Random_Array(Arr, ArrLength) ;
    Print_Array(Arr, ArrLength);
    cout << "\n" ;
    
    cout << "Prime number from " ;
    Copy_Prime_Array(Arr, Arr2, ArrLength , Arr2Length);
    Print_Array(Arr2, Arr2Length);
    return 0 ;
}
