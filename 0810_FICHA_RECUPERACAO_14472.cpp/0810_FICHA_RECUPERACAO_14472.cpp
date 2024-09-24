#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <ctime>
#include <fstream>
#include <climits>

//João Santos 14472

using namespace std;

struct Restaurante{         //struct principal
    string tipoRestaurnte;
    string nomeRestaurante;
    string moradaRestaurante;
    int numMesaRestaurante;
    int numTlfRestaurante;

};

void colocarDadosMeu(Restaurante &meuRestaurante){            // função para colocar os  dados da minha viatura
    meuRestaurante.tipoRestaurnte = "Sushi";
    meuRestaurante.nomeRestaurante = "O Rei Japones";
    meuRestaurante.moradaRestaurante = "Rua azenha de cima, n58 Trofa";
    meuRestaurante.numMesaRestaurante = 120;
    meuRestaurante.numTlfRestaurante = 961907218;
}

void colocarDadosProf(Restaurante &profRestaurante){       // função para colocar os  dados da viatura do professor
    profRestaurante.tipoRestaurnte = "Vegan";
    profRestaurante.nomeRestaurante = "O Xico";
    profRestaurante.moradaRestaurante = "Praça d.Maria 2, 4770 V.N.Famalicão";
    profRestaurante.numMesaRestaurante = 22;
    profRestaurante.numTlfRestaurante = 935202544;
}

void restauranteComMaisMesas(Restaurante &meuRestaurante, Restaurante &profRestaurante) { // função para mostrar os dados do restaurante com mais mesas ao utilizador
    /*
    Aqui eu decidi utilizar 3 if sendo que dava para fazer em apenas um,
    mas ficaria mais confuso se utilizasse so 1 por isso achei mais facil utilizar 3 if
    para as 3 possibilidades que o codigo tem
    */

    if (meuRestaurante.numMesaRestaurante < profRestaurante.numMesaRestaurante) {  // Caso o restaurante do professortenha mais mesas mostra os dados do professor!!!
        cout << "Estes sao os dados do restaurante com mais mesas!!!\n\n";
        cout << "O Tipo do restaurante do prof: " <<  profRestaurante.tipoRestaurnte << endl;
        cout << "O nome do restaurante do prof: " << profRestaurante.nomeRestaurante << endl;
        cout << "A morada do restaurante do prof: " << profRestaurante.moradaRestaurante << endl;
        cout << "As mesas do restaurante do prof: " <<  profRestaurante.numMesaRestaurante << endl;
        cout << "O numero de tfl do restaurante do prof: " << profRestaurante.numTlfRestaurante << endl;
    }


    if (meuRestaurante.numMesaRestaurante > profRestaurante.numMesaRestaurante){ // Caso o meu restaurante tenha mais mesas mostra os meus dados!!!
        cout << "Estes sao os dados do restaurante com mais mesas!!!\n\n";
        cout << "O Tipo do meu restaurante: " << meuRestaurante.tipoRestaurnte << endl;
        cout << "O nome do meu restaurante: " << meuRestaurante.nomeRestaurante << endl;
        cout << "A morada do meu restaurante: " << meuRestaurante.moradaRestaurante << endl;
        cout << "As mesas do meu restaurante: " <<  meuRestaurante.numMesaRestaurante << endl;
        cout << "O numero de tfl do meu restaurante: " <<meuRestaurante.numTlfRestaurante << endl;
    }


    if (meuRestaurante.numMesaRestaurante == profRestaurante.numMesaRestaurante){ // Caso os resturantes tenham o mesmo numero de mesas mostra dados do professor
        cout << "Devido a ambos os restaurantes terem a mesma quantidade de mesas a prioridade vai  ser do meu restaurante esta aqui os dados do carro!!!\n\n";
        cout << "O Tipo do meu restaurante: " << meuRestaurante.tipoRestaurnte << endl;
        cout << "O nome do meu restaurante: " << meuRestaurante.nomeRestaurante << endl;
        cout << "A morada do meu restaurante: " << meuRestaurante.moradaRestaurante << endl;
        cout << "As mesas do meu restaurante: " <<  meuRestaurante.numMesaRestaurante << endl;
        cout << "O numero de tfl do meu restaurante: " <<meuRestaurante.numTlfRestaurante << endl;
    }
    }



void mostraDados(Restaurante &restauranteEscolhido){ // Mostra os dados do restaurante que o utilizador pediu
    cout << "\n\nEstes sao os dados do restaurante que escolheu:\n";
    cout << "O Tipo do restaurante: " << restauranteEscolhido.tipoRestaurnte << endl;
    cout << "O nome do restaurante: " << restauranteEscolhido.nomeRestaurante << endl;
    cout << "A morada do restaurante: " << restauranteEscolhido.moradaRestaurante << endl;
    cout << "As mesas do restaurante: " <<  restauranteEscolhido.numMesaRestaurante << endl;
    cout << "O numero de tfl do restaurante: " <<restauranteEscolhido.numTlfRestaurante << endl;


}

float media2NumMesas(Restaurante &profRestaurante, Restaurante &meuRestaurante) {
    return meuRestaurante.numMesaRestaurante/2;
    return profRestaurante.numMesaRestaurante/2;

}


int main() {
    Restaurante profRestaurante;
    Restaurante meuRestaurante;
    char op;

    colocarDadosMeu(meuRestaurante);
    colocarDadosProf(profRestaurante);
    restauranteComMaisMesas(meuRestaurante,profRestaurante);

    cout << "\n\nQual restaurante quer ver a informacao???\n";

    cout << "0 - Mostra o meu restaurante\n";
    cout << "1 - Mostra o restaurante do professor\n";
    cout << "2 - Fecha app\n";
    cin >> op;

    switch (op){
        case '0':
            mostraDados(meuRestaurante);
            break;
        case '1':
            mostraDados(profRestaurante);
            break;

    }


    cout << "\n\n\nA minha autovaliacao deste modulo e: 11";
    return 0;

}







