/** @file dominio
*   @version 1.0
*/
#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

//#include <exception>

using namespace std;

/**
*   Classe duração
*
*   O VALOR a ser armazenado sera antes validado em VALIDAR.
*   O valor deve passar por SETVALOR antes de ser armazenado.
*/
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
        void    validar(string);  /// ESTA LINHA FOI ALTERADA DE char * PARA string ===========================================================

    public:
        void  setCidade(string); /// ESTA LINHA FOI ALTERADA DE char * PARA string ===========================================================
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
/// Classe Descrição
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
/// Classe Endereço
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
        void    validar(string);  /// ESTA LINHA FOI DE char* PARA string

    public:
        void  setIdioma(string);   /// ESTA LINHA FOI DE char* PARA string
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

