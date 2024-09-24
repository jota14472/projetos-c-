#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

struct Hotel {
    string nome;
    string link;
    string cidade;
    int numEstrelas;// 1 a 5
    double quartos[500];

};
void inicializar (Hotel &x1 ){
   x1.nome = "pensao Sao Bento";
   x1.link = "https://www.pensaosaobento.pt/";
   x1.cidade = "Santo Tirso";
   x1.numEstrelas = 2;
   for(int i=0; i<500; i++){
        x1.quartos [i]=0;
   }
   x1.quartos[1] = 10;
   x1.quartos[2] = 20;
   x1.quartos[3] = 30;
   x1.quartos[4] = 40;
   x1.quartos[5] = 50;


}

double mostraMediaPrecosQuartos(double dados[500]){
    double totalsoma = 0;
    double numElementos = 0;
    for(int i=0; i<500; i++){
        if(dados[i]>0){
            totalsoma += dados[i];
            numElementos ++;
        }
   }
   return totalsoma / numElementos;

}

double mostraMaxQuartos(double dados[500]){

     double maxs = 0;
    for(int i=0; i<500; i++){
        if(dados[i]>maxs){
            maxs = dados[i] ;

        }
   }
   return maxs;

}




int main() {
    double media, maxValor;
    Hotel pensaoSaoBento;
    inicializar(pensaoSaoBento);
    //cout << pensaoSaoBento.quartos[1];
    media = mostraMediaPrecosQuartos(pensaoSaoBento.quartos);
    maxValor = mostraMaxQuartos(pensaoSaoBento.quartos);
    cout << maxValor;
    cout << media;




    return 0;
}
