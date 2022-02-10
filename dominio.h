#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <exception>

using namespace std;
//=========================================================================================
//!   Classe dura��o
/*!
      A classe possui o VALOR a ser armazenado e fun��o de VALIDAR como atribui��es privadas.
      O valor deve passar por SETVALOR antes de ser armazenado.
*/
class Duracao {
    private:
        int valor;
        void validar(int);
    public:
        void setValor(int valor);
        int getValor() const;
};

/*!
      O m�todo GETVALOR � posto como inline para evitar custo computacional,
      visto que � apenas retorno de uma informa��o.
*/
inline int Duracao::getValor() const{
    return valor;
}

//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// Classe Nota permite o armazenamento da avalia��o dada pelo usu�rio para aquela excurs�o
///
class Nota{
     private:
        int valor;
        void validar(int);
    public:
        void setValor(int valor);
        int getValor() const;
};

inline int Nota::getValor() const{
    return valor;
}

/*
class Cidade{
    private:
        string    nomeCidade;
        void    validar(string);

    public:
        void    setCidade(string);
        const string  getCidade(); //Deve ser somente leitura

}; // CIDADE

inline string Cidade::getCidade(){
    return nomeCidade;
}*/



#endif // DOMINIO_H_INCLUDED
