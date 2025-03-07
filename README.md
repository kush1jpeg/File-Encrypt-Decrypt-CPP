# File Encryptor & Decryptor

## Overview
This project is a simple file encryption and decryption tool written in C++. It allows users to securely encrypt a file using a custom encryption algorithm and later decrypt it back to its original state.

## Features
- Encrypts any file using a basic encryption algorithm
- Decrypts files back to their original form
- Supports different file formats
- Simple command-line interface for easy usage

## Technologies Used
- C++
- File Handling
- Custom Encryption Algorithm

## How It Works
1. The program reads the input file byte by byte.
2. Each byte is modified using a basic encryption logic (e.g., XOR, shifting, or a custom key-based transformation).
3. The modified data is written to an encrypted output file.
4. The decryption process reverses the encryption logic to restore the original content.

## Installation
1. Clone this repository:
   ```sh
   git clone https://github.com/kush1jpeg/File-Encrypt-Decrypt-CPP.git
   cd File-Encrypt-Decrypt-CPP
   ```
2. Compile the C++ code:
   ```pwsh
   g++ fileEncryptDecrypt.cpp encryptor.cpp -o encryptor
 
   ```
    ///it Compiles both file and links them into a single executable named encryptor
            
4. Run the executable:
   ```sh
   ./encryptor
   ```
