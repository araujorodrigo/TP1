#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <exception>

using namespace std;
//=========================================================================================
//!   Classe duração
/*!
      A classe possui o VALOR a ser armazenado e função de VALIDAR como atribuições privadas.
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
      O método GETVALOR é posto como inline para evitar custo computacional,
      visto que é apenas retorno de uma informação.
*/
inline int Duracao::getValor() const{
    return valor;
}

//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// Classe Nota permite o armazenamento da avaliação dada pelo usuário para aquela excursão
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
