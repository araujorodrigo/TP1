///
/// \file entidades.h
/// \version 1.0
///

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

//Inclusão de bibliotecas auxiliares
#include <exception>
#include "dominio.h"
#include "entidades.h"

using namespace std;

///
/// \brief Classe de Teste de unidade da classe Dura&ccedil;&atilde;o
///
class TUDuracao {
private:
    const static int VALOR_VALIDO   = 30;
    const static int VALOR_INVALIDO = 10;
    Duracao *duracao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


///
/// \brief Classe de Teste de unidade da classe Nota
///
class TUNota {
private:
    const static int VALOR_VALIDO   = 1;
    const static int VALOR_INVALIDO = 10;
    Nota *nota;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///
/// \brief Classe de Teste de unidade da classe Cidade
///
class TUCidade {
private:
    //const static
    string VALOR_VALIDO   = "macau";    // char PARA string
    //const static
    string VALOR_INVALIDO = "brasilia"; // char PARA string
    Cidade *cidade;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


///
/// \brief Classe de Teste de unidade da classe Codigo
///
class TUCodigo {
private:
    //const static
    string VALOR_VALIDO = "123456";
    //const static
    string VALOR_INVALIDO = "012";
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///
/// \brief Classe de Teste de unidade da classe Data
///
class TUData {
private:
    //const static
    string VALOR_VALIDO = "12 abr 2007";
    //const static
    string VALOR_INVALIDO = "29 fev 2005";
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///
/// \brief Classe de Teste de unidade da classe Descri&ccedil;&atilde;o
///
class TUDescricao {
private:
    //const static
    string VALOR_VALIDO = "Excursao a pe em Macau.";
    //const static
    string VALOR_INVALIDO = "Excursao a  pe em Macau.";
    Descricao *descricao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


///
/// \brief Classe de Teste de unidade da classe Endere&ccedil;o
///
class TUEndereco {
private:
    //const static
    string VALOR_VALIDO = "Praca Civica av. L2.";
    //const static
    string VALOR_INVALIDO = "Praca Civica av..L2.";
    Endereco *endereco;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};



///
/// \brief Classe de Teste de unidade da classe Hor&aacute;rio
///
class TUHorario {
private:
    //const static
    string VALOR_VALIDO = "23:59";
    //const static
    string VALOR_INVALIDO = "24:00";
    Horario *horario;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};



///
/// \brief Classe de Teste de unidade da classe Idioma
///
class TUIdioma {
private:
    //const static
    string VALOR_VALIDO = "PortugUES";
    //const static
    string VALOR_INVALIDO = "Sueco";
    Idioma *idioma;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};



///
/// \brief Classe de Teste de unidade da classe T&iacute;tulo
///
class TUTitulo {
private:
    //const static
    string VALOR_VALIDO = "Excursao Safari";
    //const static
    string VALOR_INVALIDO = "Excursa0  Safari..";
    Titulo *titulo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};



///
/// \brief Classe de Teste de unidade da classe Senha
///
class TUSenha {
private:
    //const static
    string VALOR_VALIDO = "5EnH4a";
    //const static
    string VALOR_INVALIDO = "%5EnH4";
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///
/// \brief Classe de Teste de unidade da classe Email
///
class TUEmail {
private:
    //const static
    string VALOR_VALIDO = "iago.cossentino@gmailcom";
    //const static
    string VALOR_INVALIDO = "ya.@mail!";
    Email *email;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///
/// \brief Classe de Teste de unidade da classe Nome
///
class TUNome {
private:
    //const static
    string VALOR_VALIDO = "Iago C.";
    //const static
    string VALOR_INVALIDO = "Ya.go";
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

// ************************************************************************************************/
//                                 Testes de unidade de Entidades
// ************************************************************************************************/

///
/// \brief Classe de Teste de unidade da entidade Avalia&ccedil;&atilde;o
///
class TUAvaliacao {
private:
     string             VALOR_VALIDO1   = "123456";                     // Codigo
    const static int    VALOR_VALIDO2   = 1;                            // Nota
     string             VALOR_VALIDO3   = "Excursao a pe em Macau.";    // Descrição
    Avaliacao *avaliacao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///
/// \brief Classe de Teste de unidade da entidade Usur&aacute;rio
///
class TUUsuario {
private:
     string             VALOR_VALIDO1   = "Iago C.";                    // Nome
     string             VALOR_VALIDO2   = "iago.cossentino@gmail.com";  // Email
     string             VALOR_VALIDO3   = "5EnH4a";                     // Senha
    Usuario *usuario;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///
/// \brief Classe de Teste de unidade da entidade Sess&atilde;o
///
class TUSessao {
private:
     string             VALOR_VALIDO1   = "123456";                     // Codigo
     string             VALOR_VALIDO2   = "12 abr 2007";                // Data
     string             VALOR_VALIDO3   = "23:59";                      // Horario
     string             VALOR_VALIDO4   = "PortugUES";                  // Idioma
    Sessao *sessao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///
/// \brief Classe de Teste de unidade da entidade Excurs&atilde;o
///
class TUExcursao {
private:
     string             VALOR_VALIDO1   = "123456";                     // Codigo
     string             VALOR_VALIDO2   = "Excursao Safari";            // Titulo
     const static int   VALOR_VALIDO3   = 1;                            // Nota
     string             VALOR_VALIDO4   = "macau";                      // Cidade
     const static int   VALOR_VALIDO5   = 30;                           // Duracao
     string             VALOR_VALIDO6   = "Excursao a pe em Macau.";    // Descrição
     string             VALOR_VALIDO7   = "Praca Civica  av. L2.";      // Endereço
    Excursao *excursao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};
#endif //TESTES_H_INCLUDED
