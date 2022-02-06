#include <iostream>
#include <exception>
#include "dominio.h"
#include "testes.h"

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

///
/// A classe Duração será testada antes de sua utilização
///

    TUDuracao testeDuracao;

    // Invocar m�todo e apresentar mensagem acerca do resultado do teste.

    switch(testeDuracao.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUDuracao::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

/*!
    Declaração da função de duração do passeio.
    Assim como, a validação do valor inserido.
*/

    int duracaoPasseio;
    Duracao passeio;                                    //Instância da classe Duracao
    cout << "Digite a duracao do passeio: " << endl;
    cin >> duracaoPasseio;

    try{
        passeio.Duracao::setValor(duracaoPasseio);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

    return 0;
}
