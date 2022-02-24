/** @file main.cpp
*   @version 1.0
*/
/**************************************************************************************************
                                         BIBLIOTECAS
***************************************************************************************************/

#include <iostream>
#include <exception>
#include <string>
//#include <cstring>   <===   Tirar esta biblioteca
#include <locale>
#include "dominio.h"
#include "testes.h"

using namespace std;

/**************************************************************************************************
*                                  DESENVOLVIMENTO main.cpp
***************************************************************************************************/

int main ()
{setlocale(LC_ALL, "portuguese");

/**************************************************************************************************
*      TESTES DE UNIDADE DE DOMÍNIOS: Invocam metodo 'run' e aguardam SUCESSO/FALHA do teste.
**************************************************************************************************/
/// @brief Teste de unidade: Duracao
///
    TUDuracao testeDuracao;

    switch(testeDuracao.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUDuracao::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/// @brief Teste de unidade: Nota
///
    TUNota testeNota;

    switch(testeNota.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/// @brief Teste de unidade: Cidade
///
    TUCidade testeCidade;

    switch(testeCidade.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/// @brief Teste de unidade: Codigo
///
    TUCodigo testeCodigo;

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/// @brief Teste de unidade: Data
///
    TUData testeData;

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/// @brief Teste de unidade: Descricao
///
    TUDescricao testeDescricao;

    switch(testeDescricao.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/// @brief Teste de unidade: Endereco
///
    TUEndereco testeEndereco;

    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUEndereco::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/// @brief Teste de unidade: Horario
///
    TUHorario testeHorario;

    switch(testeHorario.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUHorario::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/// @brief Teste de unidade: Idioma
///
    TUIdioma testeIdioma;

    switch(testeIdioma.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUHorario::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/// @brief Teste de unidade: Titulo
///
    TUTitulo testeTitulo;

    switch(testeTitulo.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUTitulo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/// @brief Teste de unidade: Senha
///
    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


/**************************************************************************************************
*    TESTES DE UNIDADE DE ENTIDADES: Invocam metodo 'run' e aguardam SUCESSO/FALHA do teste.
**************************************************************************************************/
/// @brief Teste de unidade: Avaliacao
///
    TUAvaliacao testeAvaliacao;

    switch(testeAvaliacao.run()){
        case TUAvaliacao::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
                                break;
        case TUAvaliacao::FALHA  : cout << "FALHA   - PROJETO" << endl;
                                break;
    }


/// @brief Teste de unidade: Sessao
///
    TUSessao testeSessao;

    switch(testeSessao.run()){
        case TUSessao::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
                                break;
        case TUSessao::FALHA  : cout << "FALHA   - PROJETO" << endl;
                                break;
    }


/// @brief Teste de unidade: Excursao
///
    TUExcursao testeExcursao;

    switch(testeExcursao.run()){
        case TUExcursao::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
                                break;
        case TUExcursao::FALHA  : cout << "FALHA   - PROJETO" << endl;
                                break;
    }


    return 0;
}
