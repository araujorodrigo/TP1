#include <iostream>
#include <exception>
#include <string>
#include <cstring>
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

    switch(testeDuracao.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUDuracao::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

///
/// Teste Unidade - Nota
/// A função 'run' irá rodar ambos os teste, recomenda-se comentar um dos teste em "testes.cpp"
/// para uma melhor anélise.
///
    TUNota testeNota;

    switch(testeNota.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }



//================================================================================


///
/// Declaração da função de duração do passeio.
/// Assim como, a validação do valor inserido.
///

    int duracaoPasseio;
    Duracao passeio;                                    //Instância da classe Duracao
    cout << "Digite a duracao do passeio: " << endl;
    cin >> duracaoPasseio;
    cin.get();

    try{
        passeio.Duracao::setValor(duracaoPasseio);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }


///
/// Declaração da função de Nota de avaliação.
/// Assim como, a validação do valor inserido.
///
    // Declaração de instâncias
    int notaPasseio;
    Nota nota;

    // Desenvolvimento
    cout << "Digite a Nota de avaliação para a excursão: " << endl;
    //cin >> notaPasseio;

    try{
        nota.Nota::setValor(30/*notaPasseio*/);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }



///
/// Declaração da função nome da cidade.
/// Assim como, a validação do nome inserido.
///
    // Declaração de instâncias
    char nomeCidade[20];
    Cidade cidade;

    // Desenvolvimento
    cout << "Digite o Nome da cidade para a excursão: " << endl;
    cin.getline(nomeCidade,20) ;

    //Verificação
    try{
        cidade.Cidade::setCidade(nomeCidade);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

//========================================================================================

    return 0;
}
