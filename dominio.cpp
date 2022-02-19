
#include <iostream>
#include <string>
#include <cstring>
#include <exception>
#include <cstdlib>
#include <regex>
#include "dominio.h"
#include "testes.h"

//=========================================================================================
//=========================================================================================

///
/// A dura��o do passeio pode ser de 30, 60, 90, 120 ou 180 minutos.
/// O instrutor pode oferecer seu passeio dentre estas op��es de dura��o.
/// A fun��o abaixo busca validar se o valor inclu�do pode ser cadastrado ou n�o.
/// @param valor
///
void Duracao::validar(int valor){
    if (valor != 30 && valor != 60 && valor != 90 && valor != 120 && valor != 180)
        throw invalid_argument("Duracao invalida.");
}

///
/// SETVALOR � o meio pelo qual se faz adi��o de valor para a vari�vel.
/// Para isto, requer-se valid��o deste valor.
/// @param valor
///
void Duracao::setValor(int valor){
    Duracao::validar(valor);
    this->valor = valor;
}


//=========================================================================================
//=========================================================================================


///
/// A fun��o de valida��o da nota possibilita a sele��o dentro da faixa correta de valores para nota,
/// evitando valores grandes ou at� negativos.
/// @param valor
///
void Nota::validar(int valor){
    if (valor != 0 && valor != 1 && valor != 2 && valor != 3 && valor != 4 && valor != 5)
        throw invalid_argument("Nota invalida.");
}

///
/// SETVALOR � o meio pelo qual se faz adi��o da nota para a vari�vel de avalia��o.
/// Para isto, requer-se valid��o deste valor, antes de sua inclus�o.
///
void Nota::setValor(int valor){
    Nota::validar(valor);
    this->valor = valor;
}


//=========================================================================================
//=========================================================================================

///
///     A fun��o recebe um vetor de char pois � mais pratico de se manipular.
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

///
///   A valida��o do c�digo evita aceitar c�digos com escrita errada, entrada nula e menor quantidade de algarismos necess�rios.
///   H� a adi��o do c�digo verificador ao final do c�digo.
///   @param valor
///
void Codigo::validar(string valor){
    int numerador = stoi(valor);                                  // Convers�o de string para int;
    int somatorio = 0;
    int resto = 0;
    int i=0;                                                      // �ndice Multiplicativo.

    regex CODIGO_VALIDO ("[0-9]{6}");                             // c�digo aceit�vel
    regex CODIGO_INVALIDO ("[0]{1,6}");                           // c�digo inv�lido.
    int DV=0;                                                     // Digito Verificador

    if  (regex_match(valor, CODIGO_INVALIDO) || !regex_match(valor, CODIGO_VALIDO))
        throw invalid_argument("Codigo invalido. O codigo deve conter 6 algarismos diferente de 000000.");

///
///   Algoritmo de D�gito de verifica��o (T�tulo Eleitoral)
///
    while(numerador>0){                                           // Neste la�o cada algarismo � multiplicado por
        resto = (numerador%10)*(9-i);                             // uma constante diferente, conforme o algoritmo.
        somatorio = somatorio+resto;
        numerador = numerador/10;
        i++;
    }

    DV = somatorio % 11;                                          //O resto esta em INT
    if(DV == 10)                                                  // Condi��o para %11 (div. por 11) = 10
        DV=0;

    valor = valor+to_string(DV);
}

///
/// Ap�s a valida��o do c�digo, este � passado para o interior da classe
///
///
void Codigo::setValor(string valor){
    validar(valor);
    this->valor = valor;
}


///
///   Valida��o da Data em que dia, m�s e ano, ser�o representados por
///   ANO, MES, ANO, respectivamente.
///
void Data::validar(string data){

    std::smatch matches;
    string DIA, MES, ANO;

    regex DATA_VALIDA ("\\b(\\d{2})[- /\.]([a-zA-Z]{3})[- /\.](\\d{4})\\b");

    regex JAN ("[jJ][aA][nN]");                             //a Codificacao dos meses generaliza
    regex FEV ("[fF][eE][vV]");                             //a entrada, sendo no-sensitive.
    regex MAR ("[mM][aA][rR]");
    regex ABR ("[aA][bB][rR]");
    regex MAI ("[mM][aA][iI]");
    regex JUN ("[jJ][uU][nN]");
    regex JUL ("[jJ][uU][lL]");
    regex AGO ("[aA][gG][oO]");
    regex SET ("[sS][eE][tT]");
    regex OUT ("[oO][uU][tT]");
    regex NOV ("[nN][oO][vV]");
    regex DEZ ("[dD][eE][zZ]");

    if(regex_search(data, matches, DATA_VALIDA)){
        DIA = matches.str(1);                       // Aqui ser� guardado DIA, MES e ANO
        MES = matches.str(2);                       // o tratamento da data ser� facilitado
        ANO = matches.str(3);

///
/// Tratamento do ano
///
        int ano = stoi(ANO);
        if (ano<2000 || ano>9999){                  // Verifica��o do ano.
            throw invalid_argument("Entrada invalida. O ano deve ser entre 2000 - 9999.");
        }
///
/// Tratamento dos Meses com 30 dias
///
        if (regex_match(MES,ABR) || regex_match(MES,JUN) ||
            regex_match(MES,SET) || regex_match(MES,NOV)){
            int dia30 = stoi(DIA);
            if(dia30<1 || dia30>30)
                throw invalid_argument("Entrada invalida. Este mes possui 30 dias.");
        }


///
/// Tratamento dos Meses com 31 dias
///
        if (regex_match(MES,JAN) || regex_match(MES,MAR) ||
            regex_match(MES,MAI) || regex_match(MES,JUL) ||
            regex_match(MES,AGO) || regex_match(MES,OUT) ||
            regex_match(MES,DEZ)){
            int dia31 = stoi(DIA);
            if(dia31<1 || dia31>31)
                throw invalid_argument("Entrada invalida. Este mes possui 31 dias.");
        }

///
/// Tratamento do m�s de Fevereiro.
///

        if (regex_match(MES, FEV)){
            int diaMaxFev = stoi(DIA);
            if(diaMaxFev>29){
                throw invalid_argument("Entrada invalida. Fevereiro nao possui mais de 29 dias");
            }else if(diaMaxFev == 29 && !(ano%4 == 0 && (ano%100 != 0 || ano%400 == 0))){
                    throw invalid_argument("Entrada invalida. Este ano nao e bissexto.");
                    }


        }


    }else{
        throw invalid_argument("Data invalida, deve ser DIA-MES-ANO, numeros para DIA e ANO e 3 letras para o MES.");
    }
}




///
/// Ap�s a valida��o da data, este � passado para o interior da classe
///
///
void Data::setData(string data){
    validar(data);
    this->data = data;
}

//=========================================================================================
//=========================================================================================

///
///     A validacao da descricao abrange de 0 a 30 caracteres
///     e nao h� nem espaco em branco nem ponto final em sequencia.
///     @param descricao
///
void Descricao::validar(string descricao){
    smatch matches;
    regex DESCRICAO_INVALIDA("([ ]{2,})");                      //an�lise para cada caso separadamente.
    regex DESCRICAO_INVALIDA2("([.]{2,})");

    if(regex_search(descricao,matches,DESCRICAO_INVALIDA) ||
       regex_search(descricao,matches,DESCRICAO_INVALIDA2))
        throw invalid_argument ("Descricao invalida. use apenas 1 espaco e ponto por vez.");

    if(descricao.length()>30)
        throw invalid_argument("Entrada invalida. No max 30 caracteres.");

}

///
///     Inclus�o da descri��o da excurss�o
///     @param descricao
///
void Descricao::setDescricao (string descricao){
    validar(descricao);
    this->descricao = descricao;
}

