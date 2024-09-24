#include <iostream>

using namespace std;

/** função de inicialização do programa **/
const int numAutocarros = 26;

struct bus {
        string condutor;
        string linha;
        string trajeto;
        string horas;
        int capacidade;
    };

int main() {

    //bus bus1, bus2;

    bus autocarros[numAutocarros];
    int autocarroInicial = 0;
    char op = ' ';

    do {
        // pedir ao utilizador se vi colocar autocarros
        // ou se terminou de inserir !!
        // ao inserir vai pedir os elementos
        // para inserir nos 5 atributos de cada BUS
        cout << "Voce pretende colocar um autocarro?" << endl;
        cout << "1 - Sim" << endl;
        cout << "0 - Nao" << endl << endl;
        cout << "R: ";
        cin >> op;

        system("cls");

        if (op == '1') {
            // Define o condutor
            cout << "Insira o nome do condutor do autocarro:" << endl;
            cout << "EX: \"John Lenon\" " << endl;
            cin >> autocarros[autocarroInicial].condutor;
            cout << endl;

            // Define a linha
            cout << "Insira a linha do autocarro:" << endl;
            cout << "EX: \"010\" " << endl;
            cin >> autocarros[autocarroInicial].linha;
            cout << endl;

            // Define o trajeto
            cout << "Insira o trajeto do autocarro" << endl;
            cout << "EX: \"Guimaraes>Joane>Famalicao\" " << endl;
            cin >> autocarros[autocarroInicial].trajeto;
            cout << endl;

            // Define as horas que chega em cada paragem
            cout << "Insira a que horas o autocarro chega em cada paragem" << endl;
            cout << "EX: \"07:00>07:20>07:45\" " << endl;
            cin >> autocarros[autocarroInicial].horas;
            cout << endl;

            // Define a capacidade
            cout << "Insira a capacidade do autocarro:" << endl;
            cout << "EX: \"60\" " << endl;
            cin >> autocarros[autocarroInicial].capacidade;
            cout << endl;

            autocarroInicial++;

        }

    }while  (autocarroInicial < numAutocarros && op!='0');

    for(int i=0; i<autocarroInicial; i++) {
        cout << "Autocarro N" << i + 1 << endl << endl;
        cout << autocarros[i].condutor << endl;
        cout << autocarros[i].linha << endl;
        cout << autocarros[i].trajeto << endl;
        cout << autocarros[i].horas << endl;
        cout << autocarros[i].capacidade << endl << endl << endl;

    }

    /*autocarros[0].condutor = "John Lenon";
    autocarros[0].linha = "010";
    autocarros[0].trajeto = "Guimaraes > Joane > Famalicao";
    autocarros[0].horas = "07:00 > 07:20 > 07:45";
    autocarros[0].capacidade = 60;*/

    return 0;
}
