#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <ctime>

using namespace std;
// numero de modulos que cada disciplina tem
const int numModulosPortugues = 3;
const int numModulosIngles = 3;
const int numModulosAI = 2;
const int numModulosTIC = 4;
const int numModulosEducacaoFisica = 6;
const int numModulosFisicaQuimica = 6;
const int numModulosMatematica = 3;
const int numModulosMA = 4;
const int numModulosRedes = 2;
const int numModulosProgramacao = 7;
const int numModulosMoral = 1;

int notaMaximaCurso = 0;
int notaMinimaCurso = 20;
int MediaCurso = 0;
int auxMedia = 0;

// variaveis das notas e dos nomes
struct areas{
    string areaNome;
    string moduloNome[20];
    int moduloNota[20];
};

// mostra os o numero e o nome dos modulos
void mostramodulos(areas x, int numModulos){
    for (int i=0; i<numModulos; i++) {
        cout << x.moduloNome[i] << endl;
    }

}

// media dos modulos
int mediaModulos(areas x, int numModulos){
    int aux = 0;
    int aux2 = 0;

    for (int i=0; i<numModulos; i++) {
        if (x.moduloNota[i] >= 10) {
            aux2 += x.moduloNota[i];
            aux++;
        }
    }
    if (aux2 == 0 && aux == 0) {
        return 0;
    }

    MediaCurso += aux2 / aux;
    auxMedia++;

    return aux2 / aux;
}

// a nota maior de cada modulo
int maiorModulos(areas x, int numModulos){
    int aux = 0;
    int i = 0;

    if (x.moduloNota[i] >= 10) {
        aux = x.moduloNota[i];
    }

    for (i; i<numModulos; i++) {
        if (x.moduloNota[i] > aux) {
            aux = x.moduloNota[i];
        }

    }

    /*for (int i=0; i<numModulos; i++) {
        if (x.moduloNota[i] >= 10 && x.moduloNota[i+1] >= 10) {
            if (x.moduloNota[i] >= x.moduloNota[i+1]) {
                aux = x.moduloNota[i];
            } else if (x.moduloNota[i] <= x.moduloNota[i+1]) {
                aux = x.moduloNota[i+1];
            }
        }
    }*/

    if (notaMaximaCurso < aux) {
        notaMaximaCurso = aux;
    }

    return aux;
}

// a nota menor de cada modulo
int menorModulos(areas x, int numModulos){
    int aux = 0;
    int i = 0;

    if (x.moduloNota[i] >= 10) {
        aux = x.moduloNota[i];
    }

    for (i; i<numModulos; i++) {
        if (x.moduloNota[i] >= 10) {
            if (x.moduloNota[i] < aux) {
                aux = x.moduloNota[i];
            }

        }
    }


    /*for (int j=1; j<=numModulos; j++) {
        for (int i=0; i<numModulos; i++) {
            if (x.moduloNota[i] >= 10 && x.moduloNota[j] >= 10) {
                if (x.moduloNota[i] <= x.moduloNota[j]) {
                    aux = x.moduloNota[i];
                } else if (x.moduloNota[i] >= x.moduloNota[j]) {
                    aux = x.moduloNota[j];
                }
            }
        }
    }*/

    if (aux >= 10) {
        if (notaMinimaCurso > aux) {
            notaMinimaCurso = aux;
        }
    }


    return aux;
}

// mostra as notas dos modulos
void mostraNotaModulo(areas x, int numModulo) {
    cout << "Modulos de " << x.areaNome << endl;
    mostramodulos(x, numModulo);
    cout << endl << "Media de " << x.areaNome << " :" << endl;
    cout << mediaModulos(x, numModulo);
    cout << endl << endl << "Maior nota de " << x.areaNome << " :" << endl;
    cout << maiorModulos(x, numModulo);
    cout << endl << endl << "Menor nota de " << x.areaNome << " :" << endl;
    cout << menorModulos(x, numModulo);
    cout << endl << endl << "Pressione Enter para ver a proxima nota";
    getch();

    system("cls");
}

// mostra as notas do curso
void mostraNotaCurso() {
    cout << "NOTAS DO CURSO" << endl;
    cout << endl << "Media do curso :" << endl;
    cout << MediaCurso / auxMedia;
    cout << endl << endl << "Maior nota do curso :" << endl;
    cout << notaMaximaCurso;
    cout << endl << endl << "Menor nota do curso :" << endl;
    cout << notaMinimaCurso;

}


// define todas as disciplinas e todos os modulos e as suas notas
int main() {

    areas notasPortugues;
    areas notasIngles;
    areas notasAI;
    areas notasTIC;
    areas notasEducacaoFisica;
    areas notasFisicaQuimica;
    areas notasMatematica;
    areas notasMA;
    areas notasRedes;
    areas notasProgramacao;
    areas notasMoral;

    notasPortugues.areaNome = "PT";
    notasPortugues.moduloNome[0] = "Modulo 1";
    notasPortugues.moduloNome[1] = "Modulo 2";
    notasPortugues.moduloNome[2] = "Modulo 3";

    notasPortugues.moduloNota[0] = 16;
    notasPortugues.moduloNota[1] = 14;
    notasPortugues.moduloNota[2] = 0;

    notasIngles.areaNome = "ING";
    notasIngles.moduloNome[0] = "Eu e o Mundo Profissional";
    notasIngles.moduloNome[1] = "Um Mundo de Muitas Linguas";
    notasIngles.moduloNome[2] = "O Mundo tecnologico";

    notasIngles.moduloNota[0] = 11;
    notasIngles.moduloNota[1] = 0;
    notasIngles.moduloNota[2] = 0;

    notasAI.areaNome = "AI";
    notasAI.moduloNome[0] = "Modulo 1";
    notasAI.moduloNome[1] = "Modulo 2";

    notasAI.moduloNota[0] = 0;
    notasAI.moduloNota[1] = 0;

    notasTIC.areaNome = "TIC";
    notasTIC.moduloNome[0] = "Introducao a modelacao 3D";
    notasTIC.moduloNome[1] = "Organizacao e tratamento de dados";
    notasTIC.moduloNome[2] = "Edicao de som e video";
    notasTIC.moduloNome[3] = "Pesquisar, filtrar, e estruturar informacao e conteudos em ambientes digitais";

    notasTIC.moduloNota[0] = 13;
    notasTIC.moduloNota[1] = 0;
    notasTIC.moduloNota[2] = 0;
    notasTIC.moduloNota[3] = 0;

    notasEducacaoFisica.areaNome = "EF";
    notasEducacaoFisica.moduloNome[0] = "Jogos Desportivos Coletivos I";
    notasEducacaoFisica.moduloNome[1] = "Ginastica I";
    notasEducacaoFisica.moduloNome[2] = "Atlestismo / Raquetas / Patinagem I";
    notasEducacaoFisica.moduloNome[3] = "Danca I";
    notasEducacaoFisica.moduloNome[4] = "Aptidao Fisica";
    notasEducacaoFisica.moduloNome[5] = "Atividades Fisicas / Contextos e Saude I";

    notasEducacaoFisica.moduloNota[0] = 18;
    notasEducacaoFisica.moduloNota[1] = 0;
    notasEducacaoFisica.moduloNota[2] = 0;
    notasEducacaoFisica.moduloNota[3] = 0;
    notasEducacaoFisica.moduloNota[4] = 0;
    notasEducacaoFisica.moduloNota[5] = 0;

    notasFisicaQuimica.areaNome = "FQ";
    notasFisicaQuimica.moduloNome[0] = "Forcas e Movimentos";
    notasFisicaQuimica.moduloNome[1] = "Estatica";
    notasFisicaQuimica.moduloNome[2] = "Hidroestatica e HidroDinamica";
    notasFisicaQuimica.moduloNome[3] = "Luz e Fontes de Luz";
    notasFisicaQuimica.moduloNome[4] = "Otica Geometrica";
    notasFisicaQuimica.moduloNome[5] = "Circuitos Electricos";

    notasFisicaQuimica.moduloNota[0] = 16;
    notasFisicaQuimica.moduloNota[1] = 15;
    notasFisicaQuimica.moduloNota[2] = 14;
    notasFisicaQuimica.moduloNota[3] = 0;
    notasFisicaQuimica.moduloNota[4] = 0;
    notasFisicaQuimica.moduloNota[5] = 0;

    notasMatematica.areaNome = "MAT";
    notasMatematica.moduloNome[0] = "Estatistica";
    notasMatematica.moduloNome[1] = "Funcoes Polinormiais";
    notasMatematica.moduloNome[2] = "Geometria";

    notasMatematica.moduloNota[0] = 13;
    notasMatematica.moduloNota[1] = 0;
    notasMatematica.moduloNota[2] = 0;

    notasMA.areaNome = "MA";
    notasMA.moduloNome[0] = "Dispositivos e perifericos";
    notasMA.moduloNome[1] = "Sistemas Operativos - Tipologias";
    notasMA.moduloNome[2] = "Utilitarios";
    notasMA.moduloNome[3] = "Informatica - Nocoes Basicas";

    notasMA.moduloNota[0] = 15;
    notasMA.moduloNota[1] = 14;
    notasMA.moduloNota[2] = 0;
    notasMA.moduloNota[3] = 0;

    notasRedes.areaNome = "Redes";
    notasRedes.moduloNome[0] = "Conexoes de Redes";
    notasRedes.moduloNome[1] = "Sistemas de Rede Local";

    notasRedes.moduloNota[0] = 15;
    notasRedes.moduloNota[1] = 0;

    notasProgramacao.areaNome = "Programacao";
    notasProgramacao.moduloNome[0] = "Algoritmos";
    notasProgramacao.moduloNome[1] = "Estrutura de Dados";
    notasProgramacao.moduloNome[2] = "Principios Metodologicos de Programacao";
    notasProgramacao.moduloNome[3] = "Programacao em C/C++ - Fundamentos";
    notasProgramacao.moduloNome[4] = "Programacao em C/C++ Avancada";
    notasProgramacao.moduloNome[5] = "Programacao de sistemas distribuidos - JAVA";
    notasProgramacao.moduloNome[6] = "Desenvolvimento de aplicacoes web em JAVA";

    notasProgramacao.moduloNota[0] = 17;
    notasProgramacao.moduloNota[1] = 14;
    notasProgramacao.moduloNota[2] = 12;
    notasProgramacao.moduloNota[3] = 16;
    notasProgramacao.moduloNota[4] = 0;
    notasProgramacao.moduloNota[5] = 0;
    notasProgramacao.moduloNota[6] = 0;

    notasMoral.areaNome = "EMR";
    notasMoral.moduloNome[0] = "Modulo 1";

    notasMoral.moduloNota[0] = 0;

    system("cls");

    mostraNotaModulo(notasPortugues, numModulosPortugues);
    mostraNotaModulo(notasIngles, numModulosIngles);
    mostraNotaModulo(notasAI, numModulosAI);
    mostraNotaModulo(notasTIC, numModulosTIC);
    mostraNotaModulo(notasEducacaoFisica, numModulosEducacaoFisica);
    mostraNotaModulo(notasFisicaQuimica, numModulosFisicaQuimica);
    mostraNotaModulo(notasMatematica, numModulosMatematica);
    mostraNotaModulo(notasMA, numModulosMA);
    mostraNotaModulo(notasRedes, numModulosRedes);
    mostraNotaModulo(notasProgramacao, numModulosProgramacao);
    mostraNotaModulo(notasMoral, numModulosMoral);
    mostraNotaCurso();


    return 0;
}
