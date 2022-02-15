///Inclus�o de bibliotecas auxiliares
#include <iostream>
#include <exception>
#include "dominio.h"
#include "testes.h"

using namespace std;
///
///   setUp cria um objeto no proposito de completa��o dos testes
///
void TUDuracao::setUp(){
    duracao = new Duracao();                          ///inicializa o objeto DURACAO -------- J� n�o havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a inst�ncia ESTADO
}

///
///   O Teste de cen�rio de sucesso provoca a classe com valor VALIDO.
///   Somente recebe estado de FALHA em caso de erro na classe.
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
///   O Teste de cen�rio de falha provoca a classe com valor INVALIDO.
///   Espera-se obter erro de exce��o
///
void TUDuracao::testarCenarioFalha(){
    try{
        duracao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                      ///Se o valor est� INVALIDO, ele nem ser� incluido para a vari�vel
        //cout << "FALHA   - CODIGO. Excessao: " << exc.what() << duracao->getValor() << VALOR_INVALIDO << endl;          C�DIGO DE TESTE
        if (duracao->getValor() != VALOR_INVALIDO)     ///como ent�o getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}

///
///   A aqui sera feita a destrui��o do objeto de testes.
///
void TUDuracao::tearDown(){
    delete duracao;                                   ///Exclus�o do objeto da maneira correta
}

///
/// O procedimento de Testes � composto da etapas abaixo e retornar� SUCESSO ou FALHA
///
int TUDuracao::run(){
    setUp();
    testarCenarioSucesso();
    //testarCenarioFalha();
    tearDown();
    return estado;
}


//===========================================================================================================

///
/// Cria��o do objeto de testes de nota
/// e atribui��o de estado inicial.
///
void TUNota::setUp(){
    nota = new Nota();                                ///inicializa o objeto DURACAO -------- J� n�o havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a inst�ncia ESTADO
}

///
/// Testes de cen�rio de sucesso e de falha.
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


void TUNota::testarCenarioFalha(){
    try{
        nota->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                      ///Se o valor est� INVALIDO, ele nem ser� incluido para a vari�vel
        //cout << "FALHA   - CODIGO. Excessao: " << exc.what() << nota->getValor() << VALOR_INVALIDO << endl;          C�DIGO DE TESTE
        if (nota->getValor() != VALOR_INVALIDO)     ///como ent�o getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}


///
/// exclus�o correta do objeto de testes
///
void TUNota::tearDown(){
    delete nota;                                   ///Exclus�o do objeto da maneira correta
}

///
/// Script de teste de unidade para nota.
/// Retorna somente um estado, � pass�vel de melhoria.
///
int TUNota::run(){
    setUp();
    //testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//===========================================================================================================

///
/// Cria��o do objeto de testes de nome de Cidade
/// e atribui��o de estado inicial.
///
void TUCidade::setUp(){
    cidade = new Cidade();                            ///inicializa o objeto CIDADE ---- J� n�o havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a inst�ncia ESTADO
}

///
/// Testes de cen�rio de sucesso e de falha.
///
void TUCidade::testarCenarioSucesso(){
    try{
        cidade->setCidade(VALOR_VALIDO);
        string CidadeAuxSuc = VALOR_VALIDO;              /// Esta atribui��o � necess�ria por que sen�o teria (string != char) no if abaixo.
        if (cidade->getCidade() != CidadeAuxSuc)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUCidade::testarCenarioFalha(){
    try{
        cidade->setCidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                      ///Se o valor est� INVALIDO, ele nem ser� incluido para a vari�vel
        //cout << "FALHA   - CODIGO. Excessao: " << exc.what() << nota->getValor() << VALOR_INVALIDO << endl;          C�DIGO DE TESTE
        string CidadeAuxFalha = VALOR_VALIDO;
        if (cidade->getCidade() != CidadeAuxFalha)     ///como ent�o getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}


///
/// exclus�o correta do objeto de testes
///
void TUCidade::tearDown(){
    delete cidade;                                   ///Exclus�o do objeto da maneira correta
}

///
/// Script de teste de unidade para Cidade.
/// Retorna somente um estado, � pass�vel de melhoria.
///
int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    //testarCenarioFalha();
    tearDown();
    return estado;
}

