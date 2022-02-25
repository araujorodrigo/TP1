///
/// \file dominio.h
/// \version 1.0
///

#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <exception>

using namespace std;
// Rodrigo Alves Araujo 150147279
///
/// \brief Classe dura&ccedil;&atilde;o \n
/// Dura&ccedil;&otilde;es poss&iacute;veis: 30, 60, 90, 120 e 180 minutos.
///
      class Duracao {
          private:
              int valor;                              ///< \var valor
              void validar(int);                      ///< \param int
          public:
              void setValor(int valor);               ///< \param int
              int getValor() const;
      };

///
/// \brief M&eacute;todo inline.
///
/// \return valor
///
      inline int Duracao::getValor() const{
          return valor;
      }
// Rodrigo Alves Araujo 150147279
///
/// \brief Classe nota \n
/// A nota da escurs&atilde;o &eacute; de 1 &agrave; 5.
///
      class Nota{
           private:
              int valor;                              ///< \var valor
              void validar(int);                      ///< \param int
          public:
              void setValor(int valor);               ///< \param int
              int getValor() const;
      };

///
/// \brief M&eacute;todo inline.
///
/// \return valor
///
      inline int Nota::getValor() const{
          return valor;
      }
// Rodrigo Alves Araujo 150147279
///
/// \brief Classe cidade \n
///
/// H&aacute; 16 cidades poss&iacute;veis: hong kong, bangkok, macau, singapura, londres, paris, dubai, delhi, istambul, kuala,
/// lumpur, nova iorque, antalya, mumbai, shenzhen, phuket.
///
      class Cidade{
          private:
              string    nomeCidade;                   ///< \var nomeCidade
              void    validar(string);                ///< \param string
          public:
              void  setCidade(string);                ///< \param string
              const string getCidade();               // Deve ser somente leitura
      };

///
/// \brief M&eacute;todo inline.
///
/// \return nomeCidade
///
      inline const string Cidade::getCidade(){
          return nomeCidade;
      }

// Rodrigo Alves Araujo 150147279
///
/// \brief A Classe C&oacute;digo determina o c&oacute;digo para excurs&atilde;o. \n
/// Os 6 primeiros d&iacute;gitos s&atilde;o de c&oacute;digo e o 7&ordm; &eacute; d&iacute;gito verificador.
/// O algor&iacute;timo de verifica&ccedil;&atilde;o: M&oacute;dulo 11, tamb&eacute;m usado para determinar
/// T&iacute;tulo eleitoral.
///

      class Codigo{
          private:
              string valor;                           ///< \var valor
              void   validar(string);                 ///< \param string
          public:
              void  setValor(string);                 ///< \param string
              const string getValor();                //Deve ser somente leitura
      };

///
/// \brief M&eacute;todo inline.
///
/// \return valor
///
      inline const string Codigo::getValor(){
          return valor;
      }
// Rodrigo Alves Araujo 150147279
///
/// \brief Classe de Data \n
///
/// Mecanismo de data compreende desde o ano 2000 at&eacute; o ano 9999.
/// Para o m&ecirc;s devem ser escritos os 3 primeiros caracteres.
///
      class Data{
          private:
              string data;                            ///< \var valor
              void   validar(string);                 ///< \param string
          public:
              void  setData(string);                  ///< \param string
              const string getData();                 //Deve ser somente leitura
      };

///
/// \brief M&eacute;todo inline.
///
/// \return data
///
      inline const string Data::getData(){
          return data;
      }

// Rodrigo Alves Araujo 150147279
///
/// \brief Classe Descri&ccedil;&atilde;o \n
///
/// Texto composto de 0 &agrave; 30 caracteres. Sem espa&ccedil;o ou ponto final duplos.
///
      class Descricao{
          private:
              string descricao;                       ///< \var descricao
              void   validar(string);                 ///< \param string
          public:
              void   setDescricao(string);            ///< \param string
              const string getDescricao();            //Deve ser somente leitura
      };

///
/// \brief M&eacute;todo inline.
///
/// \return descricao
///
      inline const string Descricao::getDescricao(){
          return descricao;
      }

// Rodrigo Alves Araujo 150147279
///
/// \brief Classe Endere&ccedil;o \n
///
/// Texto composto de 0 &agrave; 20 caracteres. Sem espa&ccedil;o ou ponto final duplos.
///
      class Endereco{
          private:
              string endereco;                        ///< \var valor
              void   validar(string);                 ///< \param string
          public:
              void   setEndereco(string);             ///< \param string
              const string getEndereco();             //Deve ser somente leitura
      };

///
/// \brief M&eacute;todo inline.
///
/// \return endereco
///
      inline const string Endereco::getEndereco(){
          return endereco;
      }

// Rodrigo Alves Araujo 150147279
///
/// \brief Classe Horario \n
///
/// A hora compreende de 00 at&eacute; 23 horas.
/// Os minutos compreendem de 00 at&eacute; 59 minutos.
      class Horario{
          private:
              string horario;                         ///< \var horario
              void   validar(string);                 ///< \param string
          public:
              void   setHorario(string);              ///< \param string
              const string getHorario();              //Deve ser somente leitura
      };

///
/// \brief M&eacute;todo inline.
///
/// \return horario
///
      inline const string Horario::getHorario(){
          return horario;
      }

// Rodrigo Alves Araujo 150147279
///
/// \brief Classe Idioma \n
/// Permite o armazenamento do idioma, caso esteja dentre os dispon&iacute;veis.
///
      class Idioma{
          private:
              string  idioma;                         ///< \var idioma
              void    validar(string);                ///< \param string
          public:
              void  setIdioma(string);                ///< \param string
              const string getIdioma();               //Deve ser somente leitura

      };

///
/// \brief M&eacute;todo inline.
///
/// \return idioma
///
      inline const string Idioma::getIdioma(){
          return idioma;
      }

// Rodrigo Alves Araujo 150147279
///
/// \brief Classe Titulo \n
/// O T&iacute;tulo deve conter de 5 &agrave; 20 letras e n&atilde;o h&aacute; espa&ccedil;o ou ponto final duplos.
///
      class Titulo{
          private:
              string  titulo;                         ///< \var titulo
              void    validar(string);                ///< \param string
          public:
              void  setTitulo(string);                ///< \param string
              const string getTitulo();               //Deve ser somente leitura
      };

///
/// \brief M&eacute;todo inline.
///
/// \return titulo
///
      inline const string Titulo::getTitulo(){
          return titulo;
      }

// Rodrigo Alves Araujo 150147279
///
/// \brief Classe Senha \n
/// A senha deve ser composta de 6 d&iacute;gitos, pode ser letra ou n&uacute;mero.
/// Entretanto, n&atilde;o &eacute; v&aacute;lido car&aacute;cter repetido.
/// E tamb&eacute;m, deve conter pelo menos 1 car&aacute;cter mai&uacute;sculo, 1 min&uacute;sculo e 1 n&uacute;mero.
///
      class Senha{
          private:
              string  senha;                          ///< \var senha
              void    validar(string);                ///< \param string
          public:
              void  setSenha(string);                 ///< \param string
              const string getSenha();                //Deve ser somente leitura
      };

///
/// \brief M&eacute;todo inline.
///
/// \return senha
///
      inline const string Senha::getSenha(){
          return senha;
      }

// Iago Cossentino de Andrade 170012441
///
/// A Classe Email \n
/// Email &eacute; composto por parte-local: at&eacute; 64 caracteres, n&atilde;o iniciado ou finalizado por ponto final e que n&atilde;o seja duplo.
/// Email tamb&eacute;m &eacute; composto por dom&iacute;nio: at&eacute; 253 caracteres, podem ser letras, n&uacute;meros, h&iacute;fen e ponto final, desde que n&atilde;o esteja no in&iacute;cio, fim ou seja duplo.
///
      class Email{
          private:
              string  email;                          ///< \var email
              void    validar(string);                ///< \param string
          public:
              void  setEmail(string);                 ///< \param string
              const string getEmail();                //Deve ser somente leitura

      };

///
/// \brief M&eacute;todo inline.
///
/// \return email
///
      inline const string Email::getEmail(){
          return email;
      }

// Iago Cossentino de Andrade 170012441
///
/// Classe Nome \n
/// Nome &eacute; composto de 5 &agrave; 20 caracteres, podendo ser letra mai&uacute;scula ou min&uacute;scula, espa&ccedil;o ou ponto final.
/// Primeiro car&aacute;cter deve ser letra mai&uacute;scula, n&atilde;o &eacute; permitido espa&ccdeil;os duplos.
/// Ponto final &eacute; precedido por letra, estar antes de espa&ccedil;o ou &eacute; &uacute;ltimo car&aacute;cter.
///
      class Nome{
          private:
              string  nome;                           ///< \var nome
              void    validar(string);                ///< \param string
          public:
              void  setNome(string);                  ///< \param string
              const string getNome();                 //Deve ser somente leitura

      };
///
/// \brief M&eacute;todo inline.
///
/// \return nome
///
      inline const string Nome::getNome(){
            return nome;
      }

#endif // DOMINIO_H_INCLUDED

