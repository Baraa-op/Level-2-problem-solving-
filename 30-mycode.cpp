//Advanced-30- 2
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

int Random_Number(int From, int To)
{
    int Random = rand() % (To - From + 1) + From ;
    return Random ;
}



void Random_Array(int Arr[100], int &ArrLength)
{

    


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

void Print_Sum_Of_2Array(int Arr[100] , int Arr2[100] , int ArrLength )
{
    int Arr3[100];
    
    
    for(int i = 0 ; i<ArrLength ; i++)
    {
        Arr3[i] = Arr[i] + Arr2[i] ;
    }
    
    Print_Array(Arr3 , ArrLength) ;
}


int main()
{

    srand((unsigned)time(NULL));
    //int Number = Read_Positive_Numbers("plese enter Number : ");
    
    int ArrLength = 0 ;
    cout << "Plese enter length of array : " ;
    cin >> ArrLength;
    
    int Arr[100] ;
    int Arr2[100] ;
    cout << "\n" ;
    Random_Array(Arr, ArrLength) ;
    Print_Array(Arr, ArrLength);
    cout << "\n" ;
    Random_Array(Arr2, ArrLength) ;
    Print_Array(Arr2, ArrLength);
    cout << "\n" ;
    cout << "\n" ;
    cout << "Sum of 2 arrays is : \n" ;
    Print_Sum_Of_2Array(Arr , Arr2 , ArrLength) ;
    return 0 ;
}
