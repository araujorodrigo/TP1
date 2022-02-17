#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <exception>

using namespace std;
//=========================================================================================
///   Classe duração
///
///   A classe possui o VALOR a ser armazenado e função de VALIDAR como atribuições privadas.
///   O valor deve passar por SETVALOR antes de ser armazenado.
///
class Duracao {
    private:
        int valor;
        void validar(int);
    public:
        void setValor(int valor);
        int getValor() const;
};

///
///      O método GETVALOR é posto como inline para evitar custo computacional,
///      visto que é apenas retorno de uma informação.
///
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


//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// A Classe cidade permite o armazenamento correto das cidades disponiveis.
///
class Cidade{
    private:
        string    nomeCidade;
        void    validar(char*);

    public:
        void  setCidade(char*);
        const string getCidade(); //Deve ser somente leitura

};

inline const string Cidade::getCidade(){
    return nomeCidade;
}

//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// A Classe Codigo determina o código para escurssão.
/// Os 6 primeiros digitos são de código e o 7º é digito verificador.
/// O algorítimo de verificação será "Módulo 11", também usado para determinar
/// numero de identidade (RG) SSP-SP.

class Codigo{
    private:
        char *valor;
        void  validar(char*);

    public:
        void  setValor(char*);
        const char getValor(); //Deve ser somente leitura

};

inline const char Codigo::getValor(){
    return *valor;
}

#endif // DOMINIO_H_INCLUDED
