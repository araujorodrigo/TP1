///Inclus�o de bibliotecas auxiliares
#include <exception>
#include "dominio.h"
#include "testes.h"

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
    catch(.../*invalid_argument &exc*/){
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
    catch(.../*invalid_argument &exc*/){                 ///Se o valor est� INVALIDO, ele nem ser� incluido para a vari�vel
        if (duracao->getValor() == VALOR_INVALIDO)     ///como ent�o getvalor pode ser igual ao valor INVALIDO ???
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
    testarCenarioFalha();
    tearDown();
    return estado;
}


