#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <exception>

using namespace std;
//=========================================================================================
///   Classe dura��o
///
///   A classe possui o VALOR a ser armazenado e fun��o de VALIDAR como atribui��es privadas.
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
///      O m�todo GETVALOR � posto como inline para evitar custo computacional,
///      visto que � apenas retorno de uma informa��o.
///
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
/// A Classe Codigo determina o c�digo para escurss�o.
/// Os 6 primeiros digitos s�o de c�digo e o 7� � digito verificador.
/// O algor�timo de verifica��o ser� "M�dulo 11", tamb�m usado para determinar
/// numero de identidade (RG) SSP-SP.

class Codigo{
    private:
        string valor;
        void   validar(string);

    public:
        void  setValor(string);
        const string getValor(); //Deve ser somente leitura

};

inline const string Codigo::getValor(){
    return valor;
}

//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// A Classe de Data
///
class Data{
    private:
        string data;
        void   validar(string);

    public:
        void  setData(string);
        const string getData(); //Deve ser somente leitura

};

inline const string Data::getData(){
    return data;
}


//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// Classe Descri��o
///
class Descricao{
    private:
        string descricao;
        void   validar(string);

    public:
        void   setDescricao(string);
        const string getDescricao(); //Deve ser somente leitura

};

inline const string Descricao::getDescricao(){
    return descricao;
}


//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// Classe Endere�o
///
class Endereco{
    private:
        string endereco;
        void   validar(string);

    public:
        void   setEndereco(string);
        const string getEndereco(); //Deve ser somente leitura

};

inline const string Endereco::getEndereco(){
    return endereco;
}



//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// Classe Horario
///
class Horario{
    private:
        string horario;
        void   validar(string);

    public:
        void   setHorario(string);
        const string getHorario(); //Deve ser somente leitura

};

inline const string Horario::getHorario(){
    return horario;
}


//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// A Classe Idioma permite o armazenamento correto dos idiomas disponiveis.
///
class Idioma{
    private:
        string  idioma;
        void    validar(char*);

    public:
        void  setIdioma(char*);
        const string getIdioma(); //Deve ser somente leitura

};

inline const string Idioma::getIdioma(){
    return idioma;
}



//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// A Classe Titulo permite o armazenamento correto.
///
class Titulo{
    private:
        string  titulo;
        void    validar(string);

    public:
        void  setTitulo(string);
        const string getTitulo(); //Deve ser somente leitura

};

inline const string Titulo::getTitulo(){
    return titulo;
}



//=========================================================================================
//=========================================================================================
//=========================================================================================

///
/// A Classe Senha permite o armazenamento correto.
///
class Senha{
    private:
        string  senha;
        void    validar(string);

    public:
        void  setSenha(string);
        const string getSenha(); //Deve ser somente leitura

};

inline const string Senha::getSenha(){
    return senha;
}




#endif // DOMINIO_H_INCLUDED

