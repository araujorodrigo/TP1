#include <iostream>
#include <string>
#include <exception>
#include "dominio.h"


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
            throw invalid_argument("Argumento inv�lido.");
    }
}

void Cidade::setCidade (string nomeCidade){
    validar(nomeCidade);
    this->nomeCidade = nomeCidade;
}
*/

/*!
    A dura��o do passeio pode ser de 30, 60, 90, 120 ou 180 minutos.
    O instrutor pode oferecer seu passeio dentre estas op��es de dura��o.
    A fun��o abaixo busca validar se o valor inclu�do pode ser cadastrado ou n�o.
*/
void Duracao::validar(int valor){
    if (valor != 30 && valor != 60 && valor != 90 && valor != 120 && valor != 180)
        throw invalid_argument("Argumento invalido.");
}

/*!
    SETVALOR � o meio pelo qual se faz adi��o de valor para a vari�vel.
    Para isto, requer-se valid��o deste valor.
*/
void Duracao::setValor(int valor){
    Duracao::validar(valor);
    this->valor = valor;
}

