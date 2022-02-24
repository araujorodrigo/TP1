///
/// \file main.cpp
/// \version 1.0
///

// /***********************************************************************************************
//                                        BIBLIOTECAS
// ************************************************************************************************/

#include <iostream>
#include <exception>
#include <string>
#include <locale>
#include "dominio.h"
#include "testes.h"
#include "entidades.h"
using namespace std;

// /***********************************************************************************************
//                                  DESENVOLVIMENTO main.cpp
// ************************************************************************************************/

int main ()
{setlocale(LC_ALL, "portuguese");                     // Permite acentuacao na saida do console.

// /***********************************************************************************************
//      TESTES DE UNIDADE DE DOM�NIOS: Invocam metodo 'run' e aguardam SUCESSO/FALHA do teste.
// ************************************************************************************************/
///
/// \brief Teste de unidade: Dura&ccedil;&atilde;o
///
    TUDuracao testeDuracao;

    switch(testeDuracao.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - DURA��O" << endl;
                                break;
        case TUDuracao::FALHA  : cout << "FALHA   - DURA��O" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Nota
///
    TUNota testeNota;

    switch(testeNota.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - NOTA" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA   - NOTA" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Cidade
///
    TUCidade testeCidade;

    switch(testeCidade.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA   - CIDADE" << endl;
                                break;
    }

///
/// \brief Teste de unidade: C&oacute;digo
///
    TUCodigo testeCodigo;

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Data
///
    TUData testeData;

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Descri&ccedil;&atilde;o
///
    TUDescricao testeDescricao;

    switch(testeDescricao.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRI��O" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - DESCRI��O" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Endere&ccedil;o
///
    TUEndereco testeEndereco;

    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERE�O" << endl;
                                break;
        case TUEndereco::FALHA  : cout << "FALHA   - ENDERE�O" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Hor&aacute;rio
///
    TUHorario testeHorario;

    switch(testeHorario.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - HOR�RIO" << endl;
                                break;
        case TUHorario::FALHA  : cout << "FALHA   - HOR�RIO" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Idioma
///
    TUIdioma testeIdioma;

    switch(testeIdioma.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - IDIOMA" << endl;
                                break;
        case TUHorario::FALHA  : cout << "FALHA   - IDIOMA" << endl;
                                break;
    }

///
/// \brief Teste de unidade: T&iacute;tulo
///
    TUTitulo testeTitulo;

    switch(testeTitulo.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - T�TULO" << endl;
                                break;
        case TUTitulo::FALHA  : cout << "FALHA   - T�TULO" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Senha
///
    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

///
/// \brief Teste Unidade: Email
///
    TUEmail testeEmail;

    switch(testeEmail.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }

///
/// Teste Unidade: Nome
///
    TUNome testeNome;

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }


// /***********************************************************************************************
//     TESTES DE UNIDADE DE ENTIDADES: Invocam metodo 'run' e aguardam SUCESSO/FALHA do teste.
// ************************************************************************************************/
///
/// \brief Teste de unidade: Entidade Avaliacao
///
    TUAvaliacao testeAvaliacao;

    switch(testeAvaliacao.run()){
        case TUAvaliacao::SUCESSO: cout << "SUCESSO - ENT AVALIA��O" << endl;
                                break;
        case TUAvaliacao::FALHA  : cout << "FALHA   - ENT AVALIA��O" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Entidade Usuario
///
    TUUsuario testeUsuario;

    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - ENT USU�RIO" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "FALHA   - ENT USU�RIO" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Entidade Sessao
///
    TUSessao testeSessao;

    switch(testeSessao.run()){
        case TUSessao::SUCESSO: cout << "SUCESSO - ENT SESS�O" << endl;
                                break;
        case TUSessao::FALHA  : cout << "FALHA   - ENT SESS�O" << endl;
                                break;
    }

///
/// \brief Teste de unidade: Entidade Excursao
///
    TUExcursao testeExcursao;

    switch(testeExcursao.run()){
        case TUExcursao::SUCESSO: cout << "SUCESSO - ENT EXCURS�O" << endl;
                                break;
        case TUExcursao::FALHA  : cout << "FALHA   - ENT EXCURS�O" << endl;
                                break;
    }


    return 0;
}
