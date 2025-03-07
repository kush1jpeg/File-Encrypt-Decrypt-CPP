#include <iostream>
#include "encryptDecrypt.h" 
#include <fstream> //for accessing the files
#include <cctype>  // provides functions for working with characters
using namespace std;
int passKey = 3 ;      ///Key for the encryption

char decryptCypher(char base,  char &ch)
{
    char decrypted = (ch - base - passKey + 26) % 26 + base; ///+26 is not to get -ve values
    return decrypted;
};
char performCypher(char base, char &ch)
{
    char Encrypted = (ch - base + passKey) % 26 + base;
    return Encrypted;
};

bool encryptFile(const string &filename, bool encrypt)
{
    ifstream inFile(filename); // opening the file
    if (!inFile)
   { cout <<"cannot read" ;
        return false;}
    // reading the file

    // it would be better if i had used the ifstream iterator buffer but fuck my stupid lil brain
    string content;
    char ch;
    if (encrypt)
    {
        while (inFile.get(ch))
        {
            if (isalpha(ch))
            {
             std::cout << ch ;
                char base;
                base = islower(ch) ? 'a' : 'A';
                char Encrypted = performCypher(base, ch);

                content += Encrypted;

            }
        }
        cout << "Encrypted text = " << content ;
    }
//creating an output file:-

inFile.close();

ofstream outfile("encrypted_"+filename) ;
outfile << content ;
if(!outfile){cout<<"No file made";}
outfile.close();

return true ;
}



bool decryptFile(const string &filename, bool decrypt)

{
    ifstream inFile(filename); // opening the file
    if (!inFile)
        return false;

    // reading the file
    // can use the ifstream iterator buffer
    string content;
    char ch;
    if (decrypt)
    {
        while (inFile.get(ch))
        {
            if (isalpha(ch))
            {
                char base;
               base = islower(ch) ? 'a' : 'A';
                char Decrypted = decryptCypher(base, ch);
                content += Decrypted;

            }
        }
        cout << "deccrypted text = " << content ;
    }

//creating an output file:-
ofstream outfile("decrypted_"+filename) ;
outfile << content ;
if(!outfile){cout<<"No file made";}
outfile.close();

    inFile.close();
return true ;
}


