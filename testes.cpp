///Inclusão de bibliotecas auxiliares
#include <exception>
#include "dominio.h"
#include "testes.h"

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
    catch(.../*invalid_argument &exc*/){
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
    catch(.../*invalid_argument &exc*/){                 ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (duracao->getValor() == VALOR_INVALIDO)     ///como então getvalor pode ser igual ao valor INVALIDO ???
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
    testarCenarioFalha();
    tearDown();
    return estado;
}


