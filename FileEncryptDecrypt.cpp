#include <fstream>
#include <iostream>
#include <string>
#include "encryptDecrypt.h"
using namespace std ; 

int main(int argc, char** argv) {
string filename ;
cout << "Enter file name: ";
getline( cin >> ws , filename) ;

char mode ;
cout << "Encrypt -> (e) || (d) <- Decrypt " << " \n";
cin >> ws >> mode ; 
if( mode == 'e' || mode == 'E' )
{
  if( encryptFile( filename , true ))
       {  cout << "The encryption is complete " <<"\n" ; } 
       else{ cerr << "Unable to process the command" ; }
}else if ( mode == 'd' || mode == 'D') 
{
  if( decryptFile( filename , true ))
       {  cout << "The decryption is complete " <<"\n" ; } 
       else{ cerr << "Unable to process the command" ; }
}


    return 0;
}


    