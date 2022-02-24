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
*      TESTES DE UNIDADE DE DOM�NIOS: Invocam metodo 'run' e aguardam SUCESSO/FALHA do teste.
**************************************************************************************************/
/// @brief Teste de unidade: Duracao
///
    TUDuracao testeDuracao;

    switch(testeDuracao.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - DURACAO" << endl;
                                break;
        case TUDuracao::FALHA  : cout << "FALHA   - DURACAO" << endl;
                                break;
    }


/// @brief Teste de unidade: Nota
///
    TUNota testeNota;

    switch(testeNota.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - NOTA" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA   - NOTA" << endl;
                                break;
    }


/// @brief Teste de unidade: Cidade
///
    TUCidade testeCidade;

    switch(testeCidade.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA   - CIDADE" << endl;
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
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                                break;
    }


/// @brief Teste de unidade: Descricao
///
    TUDescricao testeDescricao;

    switch(testeDescricao.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - DESCRICAO" << endl;
                                break;
    }


/// @brief Teste de unidade: Endereco
///
    TUEndereco testeEndereco;

    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
                                break;
        case TUEndereco::FALHA  : cout << "FALHA   - ENDERECO" << endl;
                                break;
    }


/// @brief Teste de unidade: Horario
///
    TUHorario testeHorario;

    switch(testeHorario.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - HORARIO" << endl;
                                break;
        case TUHorario::FALHA  : cout << "FALHA   - HORARIO" << endl;
                                break;
    }


/// @brief Teste de unidade: Idioma
///
    TUIdioma testeIdioma;

    switch(testeIdioma.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - IDIOMA" << endl;
                                break;
        case TUHorario::FALHA  : cout << "FALHA   - IDIOMA" << endl;
                                break;
    }


/// @brief Teste de unidade: Titulo
///
    TUTitulo testeTitulo;

    switch(testeTitulo.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - TITULO" << endl;
                                break;
        case TUTitulo::FALHA  : cout << "FALHA   - TITULO" << endl;
                                break;
    }


/// @brief Teste de unidade: Senha
///
    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }



///
/// Teste Unidade - Email
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a função está funcionando corretamente.
///
    TUEmail testeEmail;

    switch(testeEmail.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }

    ///
/// Teste Unidade - Nome
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a função está funcionando corretamente.
///
    TUNome testeNome;

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }


/**************************************************************************************************
*    TESTES DE UNIDADE DE ENTIDADES: Invocam metodo 'run' e aguardam SUCESSO/FALHA do teste.
**************************************************************************************************/
/// @brief Teste de unidade: Avaliacao
///
    TUAvaliacao testeAvaliacao;

    switch(testeAvaliacao.run()){
        case TUAvaliacao::SUCESSO: cout << "SUCESSO - AVALIACAO Ent" << endl;
                                break;
        case TUAvaliacao::FALHA  : cout << "FALHA   - AVALIACAO Ent" << endl;
                                break;
    }

 TUUsuario testeUsuario;

    // Invocar m�todo e apresentar mensagem acerca do resultado do teste.

    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - USUARIO Ent" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "FALHA   - USUARIO Ent" << endl;
                                break;
    }


/// @brief Teste de unidade: Sessao
///
    TUSessao testeSessao;

    switch(testeSessao.run()){
        case TUSessao::SUCESSO: cout << "SUCESSO - SESSAO Ent" << endl;
                                break;
        case TUSessao::FALHA  : cout << "FALHA   - SESSAO Ent" << endl;
                                break;
    }


/// @brief Teste de unidade: Excursao
///
    TUExcursao testeExcursao;

    switch(testeExcursao.run()){
        case TUExcursao::SUCESSO: cout << "SUCESSO - EXCURSAO Ent" << endl;
                                break;
        case TUExcursao::FALHA  : cout << "FALHA   - EXCURSAO Ent" << endl;
                                break;
    }


    return 0;
}
