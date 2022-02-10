#include <iostream>
#include <string>
#include <exception>
#include "dominio.h"
#include "testes.h"


/*void Cidade::validar(string cidadeNome){

    strlwr(cidadeNome);

    if (cidadeNome.compare("hong kong") != 0 || cidadeNome.compare("bangkok") != 0      ||
        cidadeNome.compare("macau") != 0     || cidadeNome.compare("singapura") != 0    ||
        cidadeNome.compare("londres") != 0   || cidadeNome.compare("paris") != 0        ||
        cidadeNome.compare("dubai") != 0     || cidadeNome.compare("delhi") != 0        ||
        cidadeNome.compare("istambu") != 0   || cidadeNome.compare("kuala") != 0        ||
        cidadeNome.compare("lumpur") != 0    || cidadeNome.compare("nova iorque") != 0  ||
        cidadeNome.compare("antalya") != 0   || cidadeNome.compare("mumbai") != 0       ||
        cidadeNome.compare("shenzhen") != 0  || cidadeNome.compare("phuket") != 0){
            throw invalid_argument("Argumento inválido.");
    }
}

void Cidade::setCidade (string nomeCidade){
    validar(nomeCidade);
    this->nomeCidade = nomeCidade;
}
*/

//=========================================================================================
//=========================================================================================

///
/// A duração do passeio pode ser de 30, 60, 90, 120 ou 180 minutos.
/// O instrutor pode oferecer seu passeio dentre estas opções de duração.
/// A função abaixo busca validar se o valor incluído pode ser cadastrado ou não.
///
void Duracao::validar(int valor){
    if (valor != 30 && valor != 60 && valor != 90 && valor != 120 && valor != 180)
        throw invalid_argument("Argumento invalido.");
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
        throw invalid_argument("Argumento invalido.");
}

///
/// SETVALOR é o meio pelo qual se faz adição da nota para a variável de avaliação.
/// Para isto, requer-se validção deste valor, antes de sua inclusão.
///
void Nota::setValor(int valor){
    Nota::validar(valor);
    this->valor = valor;
}

