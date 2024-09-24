#include <iostream>

using namespace std;

/** função de inicialização do programa **/

class Matematica {
    //Atributos
    private:
        int num1, num2; // Define duas variaveis privadas

    //Métodos GET e SET
    public:
        void setNum1(int x){
            this->num1 = x;
        }
        int getNum1(int x){
            return this->num1;
        }

    //Métodos publicos
    public:
        //Função que soma numX e numY
        int somar(int numX, int numY) {
            return numX + numY;
        }

        //Função que subtrai numX e numY
        int subtrair(int numX, int numY) {
            return numX - numY;
        }

        //Função que multiplica numX e numY
        int multiplicar(int numX, int numY) {
            return numX * numY;
        }

        //Função que divide numX e numY
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
