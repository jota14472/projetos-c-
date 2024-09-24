#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <ctime>
#include <fstream>
#include <climits>

using namespace std;

struct Viatura{         //struct principal
    string tipoVeiculo;
    string marca;
    string modelo;
    string matricula; // matricula como tem letras ficou em string
    int ano;

};

void colocarDadosMeu(Viatura &minhaViatura){            // função para colocar os  dados da minha viatura
    minhaViatura.ano = 2008;
    minhaViatura.marca = "BMW";
    minhaViatura.modelo = "BMW 1P";
    minhaViatura.tipoVeiculo = "Carro passageiro";
    minhaViatura.matricula = "112-232-SDA";
}

void colocarDadosProf(Viatura &professorViatura){       // função para colocar os  dados da viatura do professor
    professorViatura.tipoVeiculo = "Carrinha de Mercadorias";
    professorViatura.marca = "Volkswagen";
    professorViatura.modelo = "Polo 1.2 TDI";
    professorViatura.matricula = "00-OX-11";
    professorViatura.ano = 2014;
}

void veiculoMaisNovo(Viatura &meuCarro,Viatura &profCarro){ // função para mostrar os dados do carro mais novo ao utilizador
    /*
    Aqui eu decidi utilizar 3 if sendo que dava para fazer em apenas um,
    mas ficaria mais confuso se utilizasse so 1 por isso achei mais facil utilizar 3 if
    para as 3 possibilidades que o codigo tem
    */

    if (meuCarro.ano < profCarro.ano){  // Caso o carro do professor seja mais novo mostra os meus dados!!!
        cout << "Estes sao os dados do carro mais novo!!!\n\n";
        cout << "Ano do carro: " << profCarro.ano << endl;
        cout << "Marca do carro: " << profCarro.marca << endl;
        cout << "Matricula do carro: " << profCarro.matricula << endl;
        cout << "Modelo do carro: " << profCarro.modelo << endl;
        cout << "Tipo do carro: " << profCarro.tipoVeiculo << endl;
    }


    if (meuCarro.ano > profCarro.ano){ // Caso o meu carro seja mais novo mostra os meus dados!!!
        cout << "Estes sao os dados do carro mais novo!!!\n\n";
        cout << "Ano do carro: " << meuCarro.ano << endl;
        cout << "Marca do carro: " << meuCarro.marca << endl;
        cout << "Matricula do carro: " << meuCarro.matricula << endl;
        cout << "Modelo do carro: " << meuCarro.modelo << endl;
        cout << "Tipo do carro: " << meuCarro.tipoVeiculo << endl;
    }


    if (meuCarro.ano == profCarro.ano){ // Caso os carros sejam do mesmo ano mostra os dados do carro do prof
        cout << "Devido a ambos os carros terem a mesma idade e a prioridade ser do professor esta aqui os dados do carro!!!\n\n";
        cout << "Ano do carro: " << profCarro.ano << endl;
        cout << "Marca do carro: " << profCarro.marca << endl;
        cout << "Matricula do carro: " << profCarro.matricula << endl;
        cout << "Modelo do carro: " << profCarro.modelo << endl;
        cout << "Tipo do carro: " << profCarro.tipoVeiculo << endl;
    }

}

void mostraDados(Viatura &carroEscolhido){ // Mostra os dados do carro que o utilizador pediu
    cout << "\n\nEstes sao os dados da viatura que escolheu:\n";
    cout << "Ano do carro: " << carroEscolhido.ano << endl;
    cout << "Marca do carro: " << carroEscolhido.marca << endl;
    cout << "Matricula do carro: " << carroEscolhido.matricula << endl;
    cout << "Modelo do carro: " << carroEscolhido.modelo << endl;
    cout << "Tipo do carro: " << carroEscolhido.tipoVeiculo << endl;
}



int main(){

    Viatura profVeiculo;
    Viatura meuVeiculo;
    char op;

    colocarDadosMeu(meuVeiculo);
    colocarDadosProf(profVeiculo);
    veiculoMaisNovo(meuVeiculo,profVeiculo);

    cout << "\n\nQual carro quer ver a informacao???\n";
    cout << "0 - Carro do aluno\n";
    cout << "1 - Carro do professor\n";
    cin >> op;

    switch (op){
        case '0':
            mostraDados(meuVeiculo);
            break;
        case '1':
            mostraDados(profVeiculo);
            break;
    }


    cout << "\n\n\nA minha autovaliacao deste modulo e: 16";
    return 0;
}

