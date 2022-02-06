#include <iostream>
#include "dominio.h"
#include <exception>

using namespace std;

int main (){
/*
string nomeCidade;
Cidade a;

    try
    {
        nomeCidade="Hong Kong";
        a.setCidade(nomeCidade);
    }
    catch(invalid_argument &exp)
    {
        cout << "Excecao: " << exp.what() << endl;
    }


    cout << nomeCidade << endl;*/

/*!
    Declara��o da fun��o de dura��o do passeio.
    Assim como, a valida��o do valor inserido.
*/

    int duracaoPasseio;
    duracao passeio;
    cout << "Digite a duracao do passeio: " << endl;
    cin >> duracaoPasseio;

    try{
        passeio.duracao::setValor(duracaoPasseio);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    return 0;
}
