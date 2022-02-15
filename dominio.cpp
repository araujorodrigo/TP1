#include <iostream>
#include <string>
#include <cstring>
#include <exception>
#include "dominio.h"
#include "testes.h"

//=========================================================================================
//=========================================================================================

///
/// A duração do passeio pode ser de 30, 60, 90, 120 ou 180 minutos.
/// O instrutor pode oferecer seu passeio dentre estas opções de duração.
/// A função abaixo busca validar se o valor incluído pode ser cadastrado ou não.
/// @param valor
///
void Duracao::validar(int valor){
    if (valor != 30 && valor != 60 && valor != 90 && valor != 120 && valor != 180)
        throw invalid_argument("Duracao invalida.");
}

///
/// SETVALOR é o meio pelo qual se faz adição de valor para a variável.
/// Para isto, requer-se validção deste valor.
/// @param valor
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
/// @param valor
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

///
///     A função recebe um vetor de char pois é mais pratico de se manipular.
///     Apos transformar a string para padrao minusculo, pode ser feita comparacao.
///     @param nomeCidade
///
void Cidade::validar(char *nomeCidade){
///
///     O vetor de string estatico e sulficiente para a aplicacao, pois as cidades nao vao mudar
///
    string cidadeDisponivel[16] = {"hong kong", "bangkok", "macau", "singapura", "londres", "paris",
                                 "dubai", "delhi", "istambu", "kuala", "lumpur", "nova iorque",
                                 "antalya", "mumbai", "shenzhen", "phuket"};

    //cout << "Checkpoint: " << nomeCidade << endl;             TESTE 1
    strlwr(nomeCidade);                                     //  Manipula a string para minusculo e salva na mesma variavel
    string cidadeNomeAux = nomeCidade;
    //cout << "Checkpoint: " << cidadeNomeAux << endl;          TESTE 2

    int selecao = 0;                                        //  Contador de igualdade entre cidades

    for(int i=0; i<16; i++){
        if(cidadeNomeAux == cidadeDisponivel[i]){
            selecao = selecao+1;
        }
    }
    if (selecao != 1){
        throw invalid_argument("Cidade invalida.");
    }
}

///
///     Antes de incluir o nome da cidade deve-se verificar se esta na lista de cidades disponiveis.
///     @param nomeCidade
///
void Cidade::setCidade (char *nomeCidade){
    validar(nomeCidade);
    this->nomeCidade = nomeCidade;
}


//=========================================================================================
//=========================================================================================
