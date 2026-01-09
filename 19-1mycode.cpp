//Advanced-19- 2
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib> 
using namespace std  ;


int Random_Number(int From , int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random ;
}



int main()
{
   srand((unsigned)time(NULL));
   
   cout << Random_Number(10 , 20)  << endl;
}

    
