#include <iostream>

using namespace std;

/** função de inicialização do programa **/

class MyClass { //Define a class
    public: // acess specifier
        int myNum; //Atributo (variavel int)
        string myString; //Atributo (variavel string)
    private:
        int year;
    public:
        void myMethod() { // Função dentro da classe
            cout << "Hello World!\n";
        }
        int mySum(int num1, int num2) {
            return num1 + num2 ;
        }

};


int main() {

    MyClass myObj; //Cria um objeto para o MyClass

    //Define os valores dos atributos
    myObj.myNum = 15;
    myObj.myString = "Some text";

    //Printa os valores
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";
    myObj.myMethod();
    cout << myObj.mySum(2, 3);

    return 0;
}
