//Advanced-25- 2
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

int Random_Number(int From , int To)
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
        Arr[i] = Random_Number(1 , 100) ;
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


int Min_Of_Array(int Arr[100], int ArrLength)
{
    int Min = Arr[0] ;
    
    for(int i = 1; i < ArrLength ; i++)
    {
        
        if(Min >= Arr[i])
        {
            Min = Arr[i] ;
        }
    }
    
    return Min ;
}


int main()
{

    srand((unsigned)time(NULL));
    //int Number = Read_Positive_Numbers("plese enter Number : ");

    int ArrLength ;
    int Arr[100] ;
    cout << "\n" ;
    Random_Array(Arr, ArrLength) ;
    Print_Array(Arr, ArrLength);
    cout << "\n" ;
    cout << "Minimum Of Array is : " << Min_Of_Array(Arr, ArrLength) ;
   
}   
