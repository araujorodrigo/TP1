#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

///Inclusão de bibliotecas auxiliares
#include <exception>
#include "dominio.h"

using namespace std;

///
///   Desenvolvimento da classe de Teste de unidade da classe Duração
///
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


///
///   Desenvolvimento da classe de Teste de unidade da classe Nota da excursão
///
class TUNota {
private:
    const static int VALOR_VALIDO   = 1;    // Defini��o de constante para evitar n�mero m�gico.
    const static int VALOR_INVALIDO = 10;   // Defini��o de constante para evitar n�mero m�gico.
    Nota *nota;                             // Refer�ncia para unidade em teste.
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

///
///   Desenvolvimento da classe de Teste de unidade da classe Cidade da excursão
///
class TUCidade {
private:
    //const static
    char VALOR_VALIDO[20]   = "macau";    // Defini��o de constante para evitar n�mero m�gico.
    //const static
    char VALOR_INVALIDO[20] = "brasilia";   // Defini��o de constante para evitar n�mero m�gico.
    Cidade *cidade;                             // Refer�ncia para unidade em teste.
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


///
///   Desenvolvimento da classe de Teste de unidade da classe Código de excursão
///
class TUCodigo {
private:
    //const static
    string VALOR_VALIDO = "123456";         // Defini��o de constante para evitar n�mero m�gico.
    //const static
    string VALOR_INVALIDO = "012";          // Defini��o de constante para evitar n�mero m�gico.
    Codigo *codigo;                         // Refer�ncia para unidade em teste.
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

///
///   Desenvolvimento da classe de Teste de unidade da classe Data da excurssão
///
class TUData {
private:
    //const static
    string VALOR_VALIDO = "12 abr 2007";         // Defini��o de constante para evitar n�mero m�gico.
    //const static
    string VALOR_INVALIDO = "29 fev 2005";          // Defini��o de constante para evitar n�mero m�gico.
    Data *data;                         // Refer�ncia para unidade em teste.
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

///
///   Desenvolvimento da classe de Teste de unidade da classe Descrição da excurssão
///
class TUDescricao {
private:
    //const static
    string VALOR_VALIDO = "Excurssao a pe em Macau.";         // Defini��o de constante para evitar n�mero m�gico.
    //const static
    string VALOR_INVALIDO = "Excurssao a  pe em Macau.";          // Defini��o de constante para evitar n�mero m�gico.
    Descricao *descricao;                         // Refer�ncia para unidade em teste.
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


///
///   Desenvolvimento da classe de Teste de unidade da classe Endereco da excursão
///
class TUEndereco {
private:
    //const static
    string VALOR_VALIDO = "Praca Civica av. L2.";               // Defini��o de constante para evitar n�mero m�gico.
    //const static
    string VALOR_INVALIDO = "Praca Civica av..L2.";            // Defini��o de constante para evitar n�mero m�gico.
    Endereco *endereco;                                             // Refer�ncia para unidade em teste.
    int estado;                                                     // Estado do teste.
    void setUp();                                                   // M�todo para criar unidade em teste.
    void tearDown();                                                // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();                                    // Cen�rio de teste.
    void testarCenarioFalha();                                      // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};



///
///   Desenvolvimento da classe de Teste de unidade da classe Horario da excursão
///
class TUHorario {
private:
    //const static
    string VALOR_VALIDO = "23:59";               // Defini��o de constante para evitar n�mero m�gico.
    //const static
    string VALOR_INVALIDO = "24:00";            // Defini��o de constante para evitar n�mero m�gico.
    Horario *horario;                                             // Refer�ncia para unidade em teste.
    int estado;                                                     // Estado do teste.
    void setUp();                                                   // M�todo para criar unidade em teste.
    void tearDown();                                                // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();                                    // Cen�rio de teste.
    void testarCenarioFalha();                                      // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};



///
///   Desenvolvimento da classe de Teste de unidade da classe Idioma da excursão
///
class TUIdioma {
private:
    //const static
    char VALOR_VALIDO[20] = "PortugUES";               // Defini��o de constante para evitar n�mero m�gico.
    //const static
    char VALOR_INVALIDO[20] = "Sueco";            // Defini��o de constante para evitar n�mero m�gico.
    Idioma *idioma;                                             // Refer�ncia para unidade em teste.
    int estado;                                                     // Estado do teste.
    void setUp();                                                   // M�todo para criar unidade em teste.
    void tearDown();                                                // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();                                    // Cen�rio de teste.
    void testarCenarioFalha();                                      // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};



///
///   Desenvolvimento da classe de Teste de unidade da classe Titulo da excursão
///
class TUTitulo {
private:
    //const static
    string VALOR_VALIDO = "Excursao Safari";               // Defini��o de constante para evitar n�mero m�gico.
    //const static
    string VALOR_INVALIDO = "Excursa0  Safari..";            // Defini��o de constante para evitar n�mero m�gico.
    Titulo *titulo;                                             // Refer�ncia para unidade em teste.
    int estado;                                                     // Estado do teste.
    void setUp();                                                   // M�todo para criar unidade em teste.
    void tearDown();                                                // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();                                    // Cen�rio de teste.
    void testarCenarioFalha();                                      // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};



///
///   Desenvolvimento da classe de Teste de unidade da classe Senha de usuário
///
class TUSenha {
private:
    //const static
    string VALOR_VALIDO = "5EnH4a";               // Defini��o de constante para evitar n�mero m�gico.
    //const static
    string VALOR_INVALIDO = "%5EnH4";            // Defini��o de constante para evitar n�mero m�gico.
    Senha *senha;                                             // Refer�ncia para unidade em teste.
    int estado;                                                     // Estado do teste.
    void setUp();                                                   // M�todo para criar unidade em teste.
    void tearDown();                                                // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();                                    // Cen�rio de teste.
    void testarCenarioFalha();                                      // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};




#endif //TESTES_H_INCLUDED
