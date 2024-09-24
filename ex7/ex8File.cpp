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
   string myText;
   string txtFinal = "";
   bool comeca = false;

   ifstream MyReadFile ("14472_JoaoSantos.txt");

   while (getline(MyReadFile, myText)) {
   if(myText == "BEGIN") comeca = true;
   if(myText == "END") comeca = false;

   if(comeca && myText!="<READ>") {
        txtFinal = txtFinal + myText + "\n";
    }
   }
   //close file
   cout << txtFinal;
   MyReadFile.close();
    return 0;
}
