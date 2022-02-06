#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

///Inclusão de bibliotecas auxiliares
#include <exception>
#include "dominio.h"

using namespace std;

/*!
      Desenvolvimento da classe de Teste de unidade da classe Duração
*/
class TUDuracao {
private:
    const static int VALOR_VALIDO   = 30;   // Defini��o de constante para evitar n�mero m�gico.
    const static int VALOR_INVALIDO = 10;   // Defini��o de constante para evitar n�mero m�gico.
    Duracao *duracao;                       // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};




#endif //TESTES_H_INCLUDED
