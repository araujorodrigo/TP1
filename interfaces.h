#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominio.h"
#include "entidades.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Declarações das interfaces.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

// Forward declarations.

class IServicoAutenticacao;
class IServicoConta;
class IServicoExcursao;

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de apresentação.

class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(Email*) = 0;                          /// O ponteiro garante a passagem por referência e não há perda de dados.
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoConta{
    public:
        virtual void cadastrar() = 0;
        virtual bool executar(Email) = 0;                               /// Este retorno tbm pode ser void, verificar qual a melhor abordagem
        virtual void setCntrServicoConta(IServicoConta*) = 0;
        virtual void setCntrServicoExcursao(IServicoExcursao*) = 0;
        virtual ~IApresentacaoPessoal(){}
};

class IApresentacaoExcursao{
    public:
        virtual void consulta() = 0;                                    /// apresenta opções para usuário não cadastrado
        virtual bool executar(Email) = 0;                               /// apresenta opções para usuário cadastrado
        virtual void setCntrServicoExcursao(IServicoExcursao*) = 0;
        virtual ~IApresentacaoExcursao(){}
};

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de serviço.

class IServicoAutenticacao {
    public:
        virtual bool autenticar(Email, Senha) = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoConta{
public:
        virtual bool cadastrar(Usuario) = 0;
        virtual bool descadastrar (Email) = 0;
        virtual bool editar (Usuario) = 0;
        virtual ~IServicoPessoal(){}
};

class IServicoExcursao{
public:
        virtual void listar () = 0;
        virtual bool cadastrarExcursao(Excursao) = 0;
        virtual bool descadastrarExcursao(Excursao) = 0;
        virtual bool editarExcursao(Excursao) = 0;
        virtual bool cadastrarSessao(Sessao) = 0;
        virtual bool descadastrarSessao(Sessao) = 0;
        virtual bool editarSessao(Sessao) = 0;
        virtual bool cadastrarAvaliacao(Avaliacao) = 0;
        virtual bool descadastrarAvaliacao(Avaliacao) = 0;
        virtual bool editarAvaliacao(Avaliacao) = 0;
        virtual ~IServicoExcursao(){}
};

#endif // INTERFACES_H_INCLUDED
