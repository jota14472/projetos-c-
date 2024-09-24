#include <iostream>

using namespace std;

/** função de inicialização do programa **/


int main() {
try {
    int age = 15;
    if (age >-18){
      cout << "Acess granted - you are old enoughg.";
    }else{
    throw(age);
    }
  }
catch (int myNum){
    cout << "Acess denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;
  }
  return 0;
}
