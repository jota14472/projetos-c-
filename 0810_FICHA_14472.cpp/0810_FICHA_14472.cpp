#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

//14472-João Santos
using namespace std;

struct Viatura {
    string tipoVeiculo;
    string marca;
    string modelo;
    string matricula;
    int ano;

};

void colocarDadosMeu(Viatura &x1 ) { // dados do meu carro
    x1.tipoVeiculo = "Carro de passageiros";
    x1.marca = "BMW";
    x1.modelo = "M2";
    x1.matricula = "22-JP-03";
    x1.ano = 2023;

}

void colocarDadosProf(Viatura &x2 ) { // dados do carro do setor
    x2.tipoVeiculo = "Carrinha de Mercadorias";
    x2.marca = "Volkswagen";
    x2.modelo = "Polo 1.2 TDI";
    x2.matricula = "00-OX-11";
    x2.ano = 2014;



}

void veiculoMaisNovo(Viatura x1, Viatura x2){ // mostra qual o carro mais recente

}


int main() {



    Viatura meuveiculo;
    Viatura profveiculo;

    colocarDadosMeu(meuveiculo);
    colocarDadosProf(profveiculo);


    cout << colocarDadosMeu;
    cout << colocarDadosProf;

    	cout << "\n\nA minha AutoAvaliacao deste modulo e: 10" << endl;







    return 0;
}

