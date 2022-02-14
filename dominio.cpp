#include <iostream>
#include <string>
#include <exception>
#include "dominio.h"
#include "testes.h"
#include <unicode/unistr.h>
#include <unicode/ustream.h>
#include <unicode/locid.h>

//=========================================================================================
//=========================================================================================

///
/// A duração do passeio pode ser de 30, 60, 90, 120 ou 180 minutos.
/// O instrutor pode oferecer seu passeio dentre estas opções de duração.
/// A função abaixo busca validar se o valor incluído pode ser cadastrado ou não.
///
void Duracao::validar(int valor){
    if (valor != 30 && valor != 60 && valor != 90 && valor != 120 && valor != 180)
        throw invalid_argument("Duracao invalida.");
}

///
/// SETVALOR é o meio pelo qual se faz adição de valor para a variável.
/// Para isto, requer-se validção deste valor.
///
void Duracao::setValor(int valor){
    Duracao::validar(valor);
    this->valor = valor;
}


//=========================================================================================
//=========================================================================================


///
/// A função de validação da nota possibilita a seleção dentro da faixa correta de valores para nota,
/// evitando valores grandes ou até negativos.
///
void Nota::validar(int valor){
    if (valor != 0 && valor != 1 && valor != 2 && valor != 3 && valor != 4 && valor != 5)
        throw invalid_argument("Nota invalida.");
}

///
/// SETVALOR é o meio pelo qual se faz adição da nota para a variável de avaliação.
/// Para isto, requer-se validção deste valor, antes de sua inclusão.
///
void Nota::setValor(int valor){
    Nota::validar(valor);
    this->valor = valor;
}


//=========================================================================================
//=========================================================================================


void Cidade::validar(string cidadeNome){

    string cidadeDisponivel[16] = {"hong kong", "bangkok", "macau", "singapura", "londres", "paris",
                                 "dubai", "delhi", "istambu", "kuala", "lumpur", "nova iorque",
                                 "antalya", "mumbai", "shenzhen", "phuket"};

    //strlwr(cidadeNome);


    //string string1 = u8"ÅSH to LoWer WÅN";
    icu::UnicodeString unicodeString(cidadeNome.c_str());
    std::cout << "input string:  " << cidadeNome << std::endl
              << "output string: " << unicodeString.toLower() << std::endl;
    //return 0;

    int selecao = 0;
    //int resto = 0;

    for(int i=0; i<16, i++){
        if(cidadeNome == cidadeDisponivel[i]){
            selecao = selecao+1;
        }
    }
    if (selecao != 1){
        throw invalid_argument("Cidade invalida.");
    }
}

void Cidade::setCidade (string nomeCidade){
    validar(nomeCidade);
    this->nomeCidade = nomeCidade;
}
