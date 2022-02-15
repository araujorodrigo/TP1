///Inclusão de bibliotecas auxiliares
#include <iostream>
#include <exception>
#include "dominio.h"
#include "testes.h"

using namespace std;
///
///   setUp cria um objeto no proposito de completação dos testes
///
void TUDuracao::setUp(){
    duracao = new Duracao();                          ///inicializa o objeto DURACAO -------- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a instância ESTADO
}

///
///   O Teste de cenário de sucesso provoca a classe com valor VALIDO.
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
///   O Teste de cenário de falha provoca a classe com valor INVALIDO.
///   Espera-se obter erro de exceção
///
void TUDuracao::testarCenarioFalha(){
    try{
        duracao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                      ///Se o valor está INVALIDO, ele nem será incluido para a variável
        //cout << "FALHA   - CODIGO. Excessao: " << exc.what() << duracao->getValor() << VALOR_INVALIDO << endl;          CÓDIGO DE TESTE
        if (duracao->getValor() != VALOR_INVALIDO)     ///como então getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}

///
///   A aqui sera feita a destruição do objeto de testes.
///
void TUDuracao::tearDown(){
    delete duracao;                                   ///Exclusão do objeto da maneira correta
}

///
/// O procedimento de Testes é composto da etapas abaixo e retornará SUCESSO ou FALHA
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
/// Criação do objeto de testes de nota
/// e atribuição de estado inicial.
///
void TUNota::setUp(){
    nota = new Nota();                                ///inicializa o objeto DURACAO -------- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a instância ESTADO
}

///
/// Testes de cenário de sucesso e de falha.
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
    catch(invalid_argument &exc){                      ///Se o valor está INVALIDO, ele nem será incluido para a variável
        //cout << "FALHA   - CODIGO. Excessao: " << exc.what() << nota->getValor() << VALOR_INVALIDO << endl;          CÓDIGO DE TESTE
        if (nota->getValor() != VALOR_INVALIDO)     ///como então getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUNota::tearDown(){
    delete nota;                                   ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para nota.
/// Retorna somente um estado, é passível de melhoria.
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
/// Criação do objeto de testes de nome de Cidade
/// e atribuição de estado inicial.
///
void TUCidade::setUp(){
    cidade = new Cidade();                            ///inicializa o objeto CIDADE ---- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a instância ESTADO
}

///
/// Testes de cenário de sucesso e de falha.
///
void TUCidade::testarCenarioSucesso(){
    try{
        cidade->setCidade(VALOR_VALIDO);
        string CidadeAuxSuc = VALOR_VALIDO;              /// Esta atribuição é necessária por que senão teria (string != char) no if abaixo.
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
    catch(invalid_argument &exc){                      ///Se o valor está INVALIDO, ele nem será incluido para a variável
        //cout << "FALHA   - CODIGO. Excessao: " << exc.what() << nota->getValor() << VALOR_INVALIDO << endl;          CÓDIGO DE TESTE
        string CidadeAuxFalha = VALOR_VALIDO;
        if (cidade->getCidade() != CidadeAuxFalha)     ///como então getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUCidade::tearDown(){
    delete cidade;                                   ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Cidade.
/// Retorna somente um estado, é passível de melhoria.
///
int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    //testarCenarioFalha();
    tearDown();
    return estado;
}

