#include <iostream>

using namespace std;

/** fun��o de inicializa��o do programa **/

class Matematica {
    //Atributos
    private:
        int num1, num2; // Define duas variaveis privadas

    //M�todos GET e SET
    public:
        void setNum1(int x){
            this->num1 = x;
        }
        int getNum1(int x){
            return this->num1;
        }

    //M�todos publicos
    public:
        //Fun��o que soma numX e numY
        int somar(int numX, int numY) {
            return numX + numY;
        }

        //Fun��o que subtrai numX e numY
        int subtrair(int numX, int numY) {
            return numX - numY;
        }

        //Fun��o que multiplica numX e numY
        int multiplicar(int numX, int numY) {
            return numX * numY;
        }

        //Fun��o que divide numX e numY
        float dividir(int numX, int numY) {
            return (float)numX / (float)numY;
        }
};


int main() {

    Matematica Conta; //Define objeto "Conta"

    Conta.setNum1(5);
    cout << Conta.getNum1() << endl;

    cout << "Resultado da soma: " << Conta.somar(5, 7);
    cout << endl << "Resultado da subtracao: " << Conta.subtrair(5, 4);
    cout << endl << "Resultado da multiplicacao: " << Conta.multiplicar(2, 3);
    cout << endl << "Resultado da divisao: " << Conta.dividir(3, 2);



    return 0;
}
