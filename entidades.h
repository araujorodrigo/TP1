#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominio.h"
#include "testes.h"

using namespace std;

//-----------------------------------------------------------------------

// ----------------------------------------------------------------------
// Exemplo de declara��o de classe entidade e implementa��es de m�todos.

class Avaliacao {        // Avaliação possui 3 set e 3 get.
private:
      Codigo      codigo;
      Nota        nota;
      Descricao   descricao;
public:
    void setCodigoE(const Codigo&);
    Codigo getCodigoE() const;

    void setNotaE(const Nota&);
    Nota getNotaE() const;

    void setDescricaoE(const Descricao&);
    Descricao getDescricaoE() const;
};
//____________________________________________________________________________
inline void Avaliacao::setCodigoE(const Codigo& codigo){
    this->codigo = codigo;
}
inline Codigo Avaliacao::getCodigoE() const {
    return codigo;
}
//____________________________________________________________________________
inline void Avaliacao::setNotaE(const Nota& nota){
    this->nota = nota;
}
inline Nota Avaliacao::getNotaE() const {
    return nota;
}
//____________________________________________________________________________
inline void Avaliacao::setDescricaoE(const Descricao& descricao){
    this->descricao = descricao;
}
inline Descricao Avaliacao::getDescricaoE() const {
    return descricao;
}



// ----------------------------------------------------------------------
// Exemplo de declara��o de classe entidade e implementa��es de m�todos.

class Sessao {        // Avaliação possui 4 set e 4 get.
private:
      Codigo    codigo;
      Data      data;
      Horario   horario;
      Idioma    idioma;
public:
    void setCodigoE(const Codigo&);
    Codigo getCodigoE() const;

    void setDataE(const Data&);
    Data getDataE() const;

    void setHorarioE(const Horario&);
    Horario getHorarioE() const;

    void setIdiomaE(const Idioma&);
    Idioma getIdiomaE() const;
};
//____________________________________________________________________________
inline void Sessao::setCodigoE(const Codigo& codigo){
    this->codigo = codigo;
}
inline Codigo Sessao::getCodigoE() const {
    return codigo;
}
//____________________________________________________________________________
inline void Sessao::setDataE(const Data& data){
    this->data = data;
}
inline Data Sessao::getDataE() const {
    return data;
}
//____________________________________________________________________________
inline void Sessao::setHorarioE(const Horario& horario){
    this->horario = horario;
}
inline Horario Sessao::getHorarioE() const {
    return horario;
}
//____________________________________________________________________________
inline void Sessao::setIdiomaE(const Idioma& idioma){
    this->idioma = idioma;
}
inline Idioma Sessao::getIdiomaE() const {
    return idioma;
}



// ----------------------------------------------------------------------
// Exemplo de declara��o de classe entidade e implementa��es de m�todos.


class Excursao {        // Avaliação possui 7 set e 7 get.
private:
      Codigo    codigo;
      Titulo    titulo;
      Nota      nota;
      Cidade    cidade;
      Duracao   duracao;
      Descricao descricao;
      Endereco  endereco;

public:
    void setCodigoE(const Codigo&);
    Codigo getCodigoE() const;

    void setTituloE(const Titulo&);
    Titulo getTituloE() const;

    void setNotaE(const Nota&);
    Nota getNotaE() const;

    void setCidadeE(const Cidade&);
    Cidade getCidadeE() const;

    void setDuracaoE(const Duracao&);
    Duracao getDuracaoE() const;

    void setDescricaoE(const Descricao&);
    Descricao getDescricaoE() const;

    void setEnderecoE(const Endereco&);
    Endereco getEnderecoE() const;
};
//____________________________________________________________________________
inline void Excursao::setCodigoE(const Codigo& codigo){
    this->codigo = codigo;
}
inline Codigo Excursao::getCodigoE() const {
    return codigo;
}
//____________________________________________________________________________
inline void Excursao::setTituloE(const Titulo& titulo){
    this->titulo = titulo;
}
inline Titulo Excursao::getTituloE() const {
    return titulo;
}
//____________________________________________________________________________
inline void Excursao::setNotaE(const Nota& nota){
    this->nota = nota;
}
inline Nota Excursao::getNotaE() const {
    return nota;
}
//____________________________________________________________________________
inline void Excursao::setCidadeE(const Cidade& cidade){
    this->cidade = cidade;
}
inline Cidade Excursao::getCidadeE() const {
    return cidade;
}
//____________________________________________________________________________
inline void Excursao::setDuracaoE(const Duracao& duracao){
    this->duracao = duracao;
}
inline Duracao Excursao::getDuracaoE() const {
    return duracao;
}
//____________________________________________________________________________
inline void Excursao::setDescricaoE(const Descricao& descricao){
    this->descricao = descricao;
}
inline Descricao Excursao::getDescricaoE() const {
    return descricao;
}
//____________________________________________________________________________
inline void Excursao::setEnderecoE(const Endereco& endereco){
    this->endereco = endereco;
}
inline Endereco Excursao::getEnderecoE() const {
    return endereco;
}

// ----------------------------------------------------------------------
// Exemplo de declara��o de classe entidade e implementa��es de m�todos.

class Usuario {        // Avaliação possui 3 set e 3 get.
private:
      Nome      nome;
      Email     email;
      Senha     senha;
public:
    void setNomeE(const Nome&);
    Nome getNomeE() const;

    void setEmailE(const Email&);
    Email getEmailE() const;

    void setSenhaE(const Senha&);
    Senha getSenhaE() const;
};
//____________________________________________________________________________
inline void Usuario::setNomeE(const Nome& nome){
    this->nome = nome;
}
inline Nome Usuario::getNomeE() const {
    return nome;
}
//____________________________________________________________________________
inline void Usuario::setEmailE(const Email& email){
    this->email = email;
}
inline Email Usuario::getEmailE() const {
    return email;
}
//____________________________________________________________________________
inline void Usuario::setSenhaE(const Senha& senha){
    this->senha = senha;
}
inline Senha Usuario::getSenhaE() const {
    return senha;
}

#endif // ENTIDADES_H_INCLUDED
