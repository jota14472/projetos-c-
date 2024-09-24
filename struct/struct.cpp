#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <ctime> // printf, scanf, puts, NULL



using namespace std;

const int numModulosProgramacao =6;
const int numModulosMatematica =3;

struct areas{
string areaNome;
string moduloNome[20];
int moduloNota[20];
};

void mostraModulos(areas x, int numModulos){

    for (int i=0; i<numModulos; i++){
        cout << x.moduloNome[i] << endl;
    }
}

//uma função que recebe uma struct e que vais mostara os modulos que vai mostrar aquela struct(print)
int main() {

    areas notasProgramacao;
    areas notasMatematica;


    notasProgramacao.moduloNome[0] = "algoritmo";
    notasProgramacao.moduloNome[1] = "estrutura de dados";
    notasProgramacao.moduloNome[2] = "c++ fundacao";
    notasProgramacao.moduloNome[3] = "c++ avancado";
    notasProgramacao.moduloNome[4] = "java";
    notasProgramacao.moduloNome[5] = "java web";

    notasProgramacao.moduloNota[0] = 16;
    notasProgramacao.moduloNota[1] = 12;

    notasMatematica.areaNome = "Matematica";
    notasMatematica.moduloNome[0] = "geometria";
    notasMatematica.moduloNome[1] = "funcoes polinominais";
    notasMatematica.moduloNome[2] = "estatisticas";

    notasMatematica.moduloNota[0] = 14;
    notasMatematica.moduloNota[1] = 0;
    notasMatematica.moduloNota[2] = 15;

    cout << "Modulos programacao" << endl;
    mostraModulos(notasProgramacao, numModulosProgramacao);

    cout << "Modulos matematica" << endl;
    mostraModulos(notasMatematica, numModulosMatematica);


    return 0;

}

