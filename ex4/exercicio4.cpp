#include <iostream>

using namespace std;

/** função de inicialização do programa **/

class Turmas {
public:
    string nome;

private:
    float notaMedia = 10.0;
    string listaAlunos[26][2];
    string listaModul0os[50];

public:
    void colocaNotaMedia(float notaX){
        this->notaMedia=notaX;
    }
    bool inserirAluno(string numeroAluno, string nomeAluno){
        // em que posição coloco o aluno
        for (int x=0; x<26; x++) {
            if (this->listaAlunos[x][0] == "") {
                this->listaAlunos[x][0] = numeroAluno;
                this->listaAlunos[x][1] = nomeAluno;
                return true;
            }
        }
        return false;
    }

    bool removerAluno(string numeroAluno){
        for (int x=0; x<26; x++) {
            if (this->listaAlunos[x][0] == numeroAluno) {
                this->listaAlunos[x][0] = "";
                this->listaAlunos[x][1] = "";
                return true;
            }
        }
        return false;
    }

    string listagemNumAlunos(){
        string aux = "";
        for (int i=0; i<26; i++) {
            if (this->listaAlunos[i][0] != "" ) {
                aux += this->listaAlunos[i][0];
                aux += "\n";
            }
        }
        return aux;
    }

    string listagemNomeAlunos(){
        string aux = "";
        for (int i=0; i<26; i++) {
            if (this->listaAlunos[i][1] != "" ) {
                aux += this->listaAlunos[i][1];
                aux += "\n";
            }
        }
        return aux;
    }

    void imprimeNumeroAlunos() {
        cout << this->numeroAlunos();
    }
private:
    int numeroAlunos() {
        int contador = 0;
        for (int x=0; x<26; x++) {
            if (this->listaAlunos[x][0] != "") {
                contador++;
            }
        }
        return contador;
    }

};

int main() {

    Turmas turma1P;

    int op;
    string nome, numero, removenum;

    turma1P.nome = "Turma 1P 2023/2024";
    turma1P.colocaNotaMedia(0.0);
    turma1P.inserirAluno("14466", "Leonardo Fernandes");
    turma1P.inserirAluno("14467", "Hilario Ferreira");
    turma1P.inserirAluno("14468", "Daniel Mota");
    turma1P.inserirAluno("14469", "Filipe Soblirov");
    turma1P.inserirAluno("14470", "Ines Campo");

    /*
    4 - Inserir Aluno
    A - Pedir Numero
    B - Pedir Nome
    C - Criar metodo inserir
    */

    do {
        cout << "********* Banco de dados dos alunos *********" << endl << endl;
        cout << "O que deseja fazer?" << endl;
        cout << "1 - Ver o numero de alunos" << endl;
        cout << "2 - Ver o numero dos alunos" << endl;
        cout << "3 - Ver o nome dos alunos" << endl;
        cout << "4 - Inserir Aluno" << endl;
        cout << "5 - Remover Aluno" << endl;
        cout << "0 - Sair" << endl;
        cin >> op;

        system("cls");

        if(op == 1) {
            cout << "numero de alunos: ";
            turma1P.imprimeNumeroAlunos();
            cout << endl << endl;
        } else if (op == 2) {
            cout << turma1P.listagemNumAlunos() << endl;
        } else if (op == 3) {
            cout << turma1P.listagemNomeAlunos() << endl;
        } else if (op == 4) {
            cout << "Qual o numero do aluno?" << endl;
            cin  >> numero;
            cout << endl;

            fflush(stdin);
            cout << "Qual o nome do aluno?" << endl;
            getline(cin, nome);
            cout << endl;

            turma1P.inserirAluno(numero, nome);
        } else if (op == 5) {
            cout << "Insira o numero do aluno que quer remover" << endl;
            cin >> removenum;
            cout << endl;

            turma1P.removerAluno(removenum);
        }

    } while (op != 0);

    return 0;
}
