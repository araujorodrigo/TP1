#include <iostream>
#include <exception>
#include <string>
#include <cstring>
#include "dominio.h"
#include "testes.h"

using namespace std;

int main (){

///
/// Teste Unidade - Duracao
/// A classe Dura��o ser� testada antes de sua utiliza��o
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
/// A fun��o 'run' ir� rodar ambos os teste.
///
    TUNota testeNota;

    switch(testeNota.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


///
/// Teste Unidade - Cidade
/// A fun��o 'run' ir� rodar ambos os teste, espera-se obter sucesso ao final
///
    TUCidade testeCidade;

    switch(testeCidade.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


///
/// Teste Unidade - Codigo
/// A fun��o 'run' ir� rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a fun��o est� funcionando corretamente.
///
    TUCodigo testeCodigo;

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


///
/// Teste Unidade - Data
/// A fun��o 'run' ir� rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a fun��o est� funcionando corretamente.
///
    TUData testeData;

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

///
/// Teste Unidade - Descri��o
/// A fun��o 'run' ir� rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a fun��o est� funcionando corretamente.
///
    TUDescricao testeDescricao;

    switch(testeDescricao.run()){
        case TUData::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

//==============================================================================================================================
/*
///
/// Declara��o da fun��o de dura��o do passeio.
/// Assim como, a valida��o do valor inserido.
///

    int duracaoPasseio = 30;
    Duracao passeio;                                    //Inst�ncia da classe Duracao
    //cout << "Digite a duracao do passeio: " << endl;
    //cin >> duracaoPasseio;
    //cin.get();                                          // este "get" coleta "\n" deixado por "cin" acima. Assim n�o influencia no getline.

///
/// A valida��o � feita dentro de bloco try-catch, pois assim � feito o tratamento adequado de excess�o.
///
    try{
        passeio.Duracao::setValor(duracaoPasseio);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }


///
/// Declara��o da fun��o de Nota de avalia��o.
/// Assim como, a valida��o do valor inserido.
///
    // Declara��o de inst�ncias
    int notaPasseio = 4;
    Nota nota;

    // Desenvolvimento
    //cout << "Digite a Nota de avalia��o para a excurs�o: " << endl;
    //cin >> notaPasseio;
    //cin.get()                                         // este "get" coleta "\n" deixado por "cin" acima. Assim n�o influencia no getline.

    try{
        nota.Nota::setValor(notaPasseio);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }



///
/// Declara��o da fun��o nome da cidade.
/// Assim como, a valida��o do nome inserido.
///
    // Declara��o de inst�ncias
    char nomeCidade[20]="Macau";
    Cidade cidade;

    // Desenvolvimento
    //cout << "Digite o Nome da cidade para a excurs�o: " << endl;
    //cin.getline(nomeCidade,20) ;

    //Verifica��o
    try{
        cidade.Cidade::setCidade(nomeCidade);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }


///
/// Declara��o da fun��o CODIGO.
/// Assim como, a valida��o do CODIGO.
///
    // Declara��o de inst�ncias
    string numCodigo= "123456";
    Codigo codigo;

    //Verifica��o
    try{
        codigo.setValor(numCodigo);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

///
/// Declara��o da fun��o DATA
/// Assim como, a valida��o dA DATA
///
    // Declara��o de inst�ncias
    string numData = "31.JAN.2020";
    Data data;

    //Verifica��o
    try{
        data.setData(numData);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

*/
///
/// Declara��o da fun��o de descri��o do passeio.
/// Assim como, a valida��o do texto inserido.
///

    string descricaoExcurssao = "TESTE";
    //                           ^                            ^
    Descricao descricao;                                    //Inst�ncia da classe Duracao

///
/// A valida��o � feita dentro de bloco try-catch, pois assim � feito o tratamento adequado de excess�o.
///
    try{
        descricao.Descricao::setDescricao(descricaoExcurssao);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }



//========================================================================================

    return 0;
}
