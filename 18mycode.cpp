//Advanced-18- 2
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;


/**

int Read_Positive_Numbers(string Message)
{
    
    int Number = 0   ;
    do
    {
        cout << Message ;
        cin >> Number;
        cout << "\n" ;
    
    }while(Number <= 0 );
    
    return Number;


}
**/

string Read_Text()
{
    string Text ;
    cout << "plese enter Text : ";
    getline(cin , Text);
    
    return Text ;
}





string Encrypt_Text(string Text , short EncryptionKay)
{
    string Encrypt = "";
    
    for(int i = 0 ; i < Text.length() ; i++)
    {
        Encrypt = Encrypt + char(Text[i] + EncryptionKay) ;
    }
    
    return Encrypt ;
}


string Decrypt_Text(string Encrypt , short EncryptionKay)
{
    string Decrypt = "";
    for(int i = 0 ; i < Encrypt.length() ; i++)
    {
        Decrypt = Decrypt + char(Encrypt[i] - EncryptionKay) ;
    }
    
    return Decrypt ;
}




int main()
{
   //int Number = Read_Positive_Numbers("plese enter Number : " );
   short EncryptionKay = 2 ;
   
   
   string Text = Read_Text() ;
   string EncryptText = Encrypt_Text(Text , EncryptionKay) ;
   string DecryptText = Decrypt_Text(EncryptText , EncryptionKay) ;
   
   cout << "Text before Encrypt : " << Text << "\n" ;
   cout << "Text After Encrypt : " <<  EncryptText << "\n";
   cout << "Text After Decrypt : " << DecryptText<< "\n" ;
}

    
