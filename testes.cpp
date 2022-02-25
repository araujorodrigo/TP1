///
/// \file testes.cpp
/// \version 1.0
///

// /***********************************************************************************************
//                                        BIBLIOTECAS
// ************************************************************************************************/

#include <iostream>
#include <exception>
#include "dominio.h"
#include "testes.h"
#include "entidades.h"


using namespace std;

// /***********************************************************************************************
//                                  DESENVOLVIMENTO testes.cpp
// ************************************************************************************************/

///
/// \brief setUp cria o objeto de teste
///
    void TUDuracao::setUp(){
    duracao = new Duracao();                          ///inicializa o objeto DURACAO
    estado = SUCESSO;                                 ///inicializa a instância ESTADO
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUDuracao::testarCenarioSucesso(){
    try{
        duracao->setValor(VALOR_VALIDO);
        if (duracao->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUDuracao::testarCenarioFalha(){
    try{
        duracao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if(duracao->getValor() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }

///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUDuracao::tearDown(){
    delete duracao;
    }

///
/// \brief Rotina de testes
///
    int TUDuracao::run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    }

// =================================================================================================

///
/// \brief setUp cria o objeto de teste
///
    void TUNota::setUp(){
    nota = new Nota();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUNota::testarCenarioSucesso(){
    try{
        nota->setValor(VALOR_VALIDO);
        if (nota->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUNota::testarCenarioFalha(){
    try{
        nota->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (nota->getValor() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }


///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
void TUNota::tearDown(){
    delete nota;
}

///
/// \brief Rotina de testes
///
int TUNota::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// =================================================================================================

///
/// \brief setUp cria o objeto de teste
///
    void TUCidade::setUp(){
    cidade = new Cidade();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUCidade::testarCenarioSucesso(){
    try{
        cidade->setCidade(VALOR_VALIDO);
        if (cidade->getCidade() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUCidade::testarCenarioFalha(){
    try{
        cidade->setCidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (cidade->getCidade() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }

///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUCidade::tearDown(){
    delete cidade;
    }

///
/// \brief Rotina de testes
///
    int TUCidade::run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    }
//==================================================================================================


///
/// \brief setUp cria o objeto de teste
///
    void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }

///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUCodigo::tearDown(){
    delete codigo;
    }

///
/// \brief Rotina de testes
///
    int TUCodigo::run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    }

//==================================================================================================


///
/// \brief setUp cria o objeto de teste
///
    void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (data->getData() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }


///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUData::tearDown(){
    delete data;
    }

///
/// \brief Rotina de testes
///
    int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
    }

//==================================================================================================


///
/// \brief setUp cria o objeto de teste
///
    void TUDescricao::setUp(){
    descricao = new Descricao();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setDescricao(VALOR_VALIDO);
        if (descricao->getDescricao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setDescricao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (descricao->getDescricao() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }


///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUDescricao::tearDown(){
    delete descricao;
    }

///
/// \brief Rotina de testes
///
    int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
    }

//==================================================================================================


///
/// \brief setUp cria o objeto de teste
///
    void TUEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (endereco->getEndereco() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }


///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUEndereco::tearDown(){
    delete endereco;
    }

///
/// \brief Rotina de testes
///
    int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
    }

//==================================================================================================


///
/// \brief setUp cria o objeto de teste
///
    void TUHorario::setUp(){
    horario = new Horario();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUHorario::testarCenarioSucesso(){
    try{
        horario->setHorario(VALOR_VALIDO);
        if (horario->getHorario() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUHorario::testarCenarioFalha(){
    try{
        horario->setHorario(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (horario->getHorario() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }


///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUHorario::tearDown(){
    delete horario;
    }

///
/// \brief Rotina de testes
///
    int TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
    }

//==================================================================================================


///
/// \brief setUp cria o objeto de teste
///
    void TUIdioma::setUp(){
    idioma = new Idioma();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUIdioma::testarCenarioSucesso(){
    try{
        idioma->setIdioma(VALOR_VALIDO);
        if (idioma->getIdioma() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUIdioma::testarCenarioFalha(){
    try{
        idioma->setIdioma(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (idioma->getIdioma() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }


///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUIdioma::tearDown(){
    delete idioma;
    }

///
/// \brief Rotina de testes
///
    int TUIdioma::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
    }

//==================================================================================================


///
/// \brief setUp cria o objeto de teste
///
    void TUTitulo::setUp(){
    titulo = new Titulo();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUTitulo::testarCenarioSucesso(){
    try{
        titulo->setTitulo(VALOR_VALIDO);
        if (titulo->getTitulo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUTitulo::testarCenarioFalha(){
    try{
        titulo->setTitulo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (titulo->getTitulo() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }

///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUTitulo::tearDown(){
    delete titulo;
    }

///
/// \brief Rotina de testes
///
    int TUTitulo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
    }

// =================================================================================================


///
/// \brief setUp cria o objeto de teste
///
    void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }


///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUSenha::tearDown(){
    delete senha;
    }

///
/// \brief Rotina de testes
///
    int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
    }

// =================================================================================================


///
/// \brief setUp cria o objeto de teste
///
    void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///

    void TUEmail::testarCenarioSucesso(){
    try{
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUEmail::testarCenarioFalha(){
    try{
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (email->getEmail() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }


///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUEmail::tearDown(){
    delete email;
    }

///
/// \brief Rotina de testes
///
    int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
    }

// =================================================================================================


///
/// \brief setUp cria o objeto de teste
///
    void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
        }
    }

///
/// \brief Testa cen&aacute;rio falha
///
    void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){
        if (nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
        }
    }

///
/// \brief O objeto de teste &eacute; exclu&iacute;do
///
    void TUNome::tearDown(){
    delete nome;
    }

///
/// \brief Rotina de testes
///
    int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
    }

// ************************************************************************************************
//                                 Testes de unidade de Entidades
// ************************************************************************************************/

///
/// \brief setUp cria entidade de teste
///
    void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
    }

///
/// \brief A entidade de teste &eacute; exclu&iacute;da
///
void TUAvaliacao::tearDown(){
    delete avaliacao;
}

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUAvaliacao::testarCenarioSucesso(){
        Codigo codigo;
        codigo.setValor(VALOR_VALIDO1);
        avaliacao->setCodigoE(codigo);
        if(avaliacao->getCodigoE().getValor() != VALOR_VALIDO1)
            estado = FALHA;

        Nota nota;
        nota.setValor(VALOR_VALIDO2);
        avaliacao->setNotaE(nota);
        if(avaliacao->getNotaE().getValor() != VALOR_VALIDO2)
            estado = FALHA;

        Descricao descricao;
        descricao.setDescricao(VALOR_VALIDO3);
        avaliacao->setDescricaoE(descricao);
        if(avaliacao->getDescricaoE().getDescricao() != VALOR_VALIDO3)
            estado = FALHA;
    }

///
/// \brief Rotina de testes
///
    int TUAvaliacao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
    }

// =================================================================================================


///
/// \brief setUp cria o entidade de teste
///
    void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
    }

///
/// \brief A entidade de teste &eacute; exclu&iacute;da
///
    void TUUsuario::tearDown(){
    delete usuario;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUUsuario::testarCenarioSucesso(){
        Nome nome;
        nome.setNome(VALOR_VALIDO1);
        usuario->setNomeE(nome);
        if(usuario->getNomeE().getNome() != VALOR_VALIDO1)
            estado = FALHA;

        Email email;
        email.setEmail(VALOR_VALIDO2);
        usuario->setEmailE(email);
        if(usuario->getEmailE().getEmail() != VALOR_VALIDO2)
            estado = FALHA;

        Senha senha;
        senha.setSenha(VALOR_VALIDO3);
        usuario->setSenhaE(senha);
        if(usuario->getSenhaE().getSenha() != VALOR_VALIDO3)
            estado = FALHA;
    }

///
/// \brief Rotina de testes
///
    int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
    }

// =================================================================================================


///
/// \brief setUp cria o entidade de teste
///
    void TUSessao::setUp(){
    sessao = new Sessao();
    estado = SUCESSO;
    }

///
/// \brief A entidade de teste &eacute; exclu&iacute;da
///
    void TUSessao::tearDown(){
    delete sessao;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUSessao::testarCenarioSucesso(){
        Codigo codigo;
        codigo.setValor(VALOR_VALIDO1);
        sessao->setCodigoE(codigo);
        if(sessao->getCodigoE().getValor() != VALOR_VALIDO1)
            estado = FALHA;

        Data data;
        data.setData(VALOR_VALIDO2);
        sessao->setDataE(data);
        if(sessao->getDataE().getData() != VALOR_VALIDO2)
            estado = FALHA;

        Horario horario;
        horario.setHorario(VALOR_VALIDO3);
        sessao->setHorarioE(horario);
        if(sessao->getHorarioE().getHorario() != VALOR_VALIDO3)
            estado = FALHA;

        Idioma idioma;
        idioma.setIdioma(VALOR_VALIDO4);
        sessao->setIdiomaE(idioma);
        if(sessao->getIdiomaE().getIdioma() != VALOR_VALIDO4)
            estado = FALHA;
    }

///
/// \brief Rotina de testes
///
    int TUSessao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
    }

// =================================================================================================


///
/// \brief setUp cria o entidade de teste
///
    void TUExcursao::setUp(){
    excursao = new Excursao();
    estado = SUCESSO;
    }

///
/// \brief A entidade de teste &eacute; exclu&iacute;da
///
    void TUExcursao::tearDown(){
    delete excursao;
    }

///
/// \brief Testa cen&aacute;rio sucesso
///
    void TUExcursao::testarCenarioSucesso(){
        Codigo codigo;
        codigo.setValor(VALOR_VALIDO1);
        excursao->setCodigoE(codigo);
        if(excursao->getCodigoE().getValor() != VALOR_VALIDO1)
            estado = FALHA;

        Titulo titulo;
        titulo.setTitulo(VALOR_VALIDO2);
        excursao->setTituloE(titulo);
        if(excursao->getTituloE().getTitulo() != VALOR_VALIDO2)
            estado = FALHA;

        Nota nota;
        nota.setValor(VALOR_VALIDO3);
        excursao->setNotaE(nota);
        if(excursao->getNotaE().getValor() != VALOR_VALIDO3)
            estado = FALHA;

        Cidade cidade;
        cidade.setCidade(VALOR_VALIDO4);
        excursao->setCidadeE(cidade);
        if(excursao->getCidadeE().getCidade() != VALOR_VALIDO4)
            estado = FALHA;

        Duracao duracao;
        duracao.setValor(VALOR_VALIDO5);
        excursao->setDuracaoE(duracao);
        if(excursao->getDuracaoE().getValor() != VALOR_VALIDO5)
            estado = FALHA;

        Descricao descricao;
        descricao.setDescricao(VALOR_VALIDO6);
        excursao->setDescricaoE(descricao);
        if(excursao->getDescricaoE().getDescricao() != VALOR_VALIDO6)
            estado = FALHA;

        Endereco endereco;
        endereco.setEndereco(VALOR_VALIDO7);
        excursao->setEnderecoE(endereco);
        if(excursao->getEnderecoE().getEndereco() != VALOR_VALIDO7)
            estado = FALHA;
    }

///
/// \brief Rotina de testes
///
    int TUExcursao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
    }
