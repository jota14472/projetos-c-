#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <fstream>

using namespace std;

/** função de inicialização do programa **/


int main() {
   //Create and open a text file
   ofstream MyFile("e:\lixo1p\ex1\14472_JoaoSantos.txt");

   // Write to the file
   MyFile << "Files can be tricky, but it is fun enough!";
   MyFile << "Files can be tricky, but it is fun enough!";

   //close the file
   MyFile.close();

    return 0;
}
