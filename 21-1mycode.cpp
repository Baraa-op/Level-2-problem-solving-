//Advanced-21- 2
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

enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};



char Get_Random_Charactor(enCharType CharType)
{
    switch(CharType)
    {
    case SmallLetter :
        return char(Random_Number(97, 122)) ;
    case CapitalLetter :
        return char(Random_Number(65, 90)) ;
    case SpecialCharacter :
        return char(Random_Number(33, 47 )) ;
    case Digit :
        return char(Random_Number(48, 57)) ;

    }
    return '\0' ;

}


string Generate_Block()
{

    string Text = "";
    
    for(int j = 1 ; j <= 4 ; j++)
    {
        Text = Text + Get_Random_Charactor(enCharType::CapitalLetter) ;
    }
    
    return Text ;
}


string Kay_Generate()
{
    string Text = Generate_Block()  ;
    for(int i = 2 ; i<=4 ; i++)
    {
        Text = Text + "-" + Generate_Block()  ;
    }
    return Text ;
}

void Keys_Number(int Number)
{
    for(int i = 1 ; i<=Number ; i++)
    {
        cout << "Key [" << i << "] : " << Kay_Generate() << "\n" ;
    }
}



int main()
{
    srand((unsigned)time(NULL));

    int Number = Read_Positive_Numbers("plese enter Number : ");

    Keys_Number(Number);


}



