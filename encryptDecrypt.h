#ifndef ENCRYPTDECRYPT_H
#define ENCRYPTDECRYPT_H

#include <string>

bool encryptFile(const std::string &filename, bool encrypt);
bool decryptFile(const std::string &filename, bool decrypt);

#endif 
