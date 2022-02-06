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
    Declaração da função de duração do passeio.
    Assim como, a validação do valor inserido.
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
