//Advanced-20- 2
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> 
using namespace std  ;







int Random_Number(int From , int To)
{
    int Random = rand() % (To - From + 1) + From ;
    return Random ;
}

enum enCharType{SmallLetter = 1 , CapitalLetter = 2 , SpecialCharacter = 3 , Digit = 4};



char Get_Random_Charactor(enCharType CharType) 
{
    switch(CharType)
    {
        case SmallLetter : return char(Random_Number(97 , 122)) ;
        case CapitalLetter : return char(Random_Number(65 , 90)) ;
        case SpecialCharacter : return char(Random_Number(33 , 47 )) ;
        case Digit : return char(Random_Number(48 , 57)) ;
        
    }
    return '\0' ;
    
}




int main()
{
   srand((unsigned)time(NULL));
   
   
   cout << Get_Random_Charactor(enCharType::SmallLetter) << endl;
   cout << Get_Random_Charactor(enCharType::CapitalLetter) << endl;
   cout << Get_Random_Charactor(enCharType::SpecialCharacter) << endl;
   cout << Get_Random_Charactor(enCharType::Digit) << endl;
   
   
   
   
   
   
}   

    
    
    
