
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <exception>
#include <cstdlib>
#include <regex>
#include <bits/stdc++.h>
#include "dominio.h"
#include "testes.h"

using namespace std;


void lowerstr(string &str){

	transform(str.begin(), str.end(), str.begin(), ::tolower);
}

void upperstr(string &str){

	transform(str.begin(), str.end(), str.begin(), ::toupper);
}


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
void Cidade::validar(string nomeCidade){ /// ESTA LINHA FOI ALTERADA DE char * PARA string ===========================================================
///
///     O vetor de string estatico e sulficiente para a aplicacao, pois as cidades nao vao mudar
///
    string cidadeDisponivel[16] = {"hong kong", "bangkok", "macau", "singapura", "londres", "paris",
                                 "dubai", "delhi", "istambu", "kuala", "lumpur", "nova iorque",
                                 "antalya", "mumbai", "shenzhen", "phuket"};

    //cout << "Checkpoint: " << nomeCidade << endl;             TESTE 1
    lowerstr(nomeCidade);
    //strlwr(nomeCidade);                                     //  Manipula a string para minusculo e salva na mesma variavel
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
void Cidade::setCidade (string nomeCidade){ /// ESTA LINHA FOI ALTERADA DE char * PARA string ===========================================================
    validar(nomeCidade);
    this->nomeCidade = nomeCidade;
}


//=========================================================================================
//=========================================================================================

///
///   A validação do código evita aceitar códigos com escrita errada, entrada nula e menor quantidade de algarismos necessários.
///   Há a adição do código verificador ao final do código.
///   @param valor
///
void Codigo::validar(string valor){
    int numerador = stoi(valor);                                  // Conversão de string para int;
    int somatorio = 0;
    int resto = 0;
    int i=0;                                                      // Índice Multiplicativo.

    regex CODIGO_VALIDO ("[0-9]{6}");                             // código aceitável
    regex CODIGO_INVALIDO ("[0]{1,6}");                           // código inválido.
    int DV=0;                                                     // Digito Verificador

    if  (regex_match(valor, CODIGO_INVALIDO) || !regex_match(valor, CODIGO_VALIDO))
        throw invalid_argument("Codigo invalido. O codigo deve conter 6 algarismos diferente de 000000.");

///
///   Algoritmo de Dígito de verificação (Título Eleitoral)
///
    while(numerador>0){                                           // Neste laço cada algarismo é multiplicado por
        resto = (numerador%10)*(9-i);                             // uma constante diferente, conforme o algoritmo.
        somatorio = somatorio+resto;
        numerador = numerador/10;
        i++;
    }

    DV = somatorio % 11;                                          //O resto esta em INT
    if(DV == 10)                                                  // Condição para %11 (div. por 11) = 10
        DV=0;

    valor = valor+to_string(DV);
}

///
/// Após a validação do código, este é passado para o interior da classe
///
///
void Codigo::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

//=========================================================================================
//=========================================================================================


///
///   Validação da Data em que dia, mês e ano, serão representados por
///   ANO, MES, ANO, respectivamente.
///
void Data::validar(string data){

    std::smatch matches;
    string DIA, MES, ANO;

    regex DATA_VALIDA ("\\b(\\d{2})[- /\\.]([a-zA-Z]{3})[- /\\.](\\d{4})\\b");

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
        DIA = matches.str(1);                       // Aqui será guardado DIA, MES e ANO
        MES = matches.str(2);                       // o tratamento da data será facilitado
        ANO = matches.str(3);

///
/// Tratamento do ano
///
        int ano = stoi(ANO);
        if (ano<2000 || ano>9999){                  // Verificação do ano.
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
/// Tratamento do mês de Fevereiro.
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
/// Após a validação da data, este é passado para o interior da classe
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
///     e nao há nem espaco em branco nem ponto final em sequencia.
///     @param descricao
///
void Descricao::validar(string descricao){
    smatch matches;
    regex DESCRICAO_INVALIDA("([ ]{2,})");                      //análise para cada caso separadamente.
    regex DESCRICAO_INVALIDA2("([.]{2,})");

    if(regex_search(descricao,matches,DESCRICAO_INVALIDA) ||
       regex_search(descricao,matches,DESCRICAO_INVALIDA2))
        throw invalid_argument ("Descricao invalida. use apenas 1 espaco e ponto por vez.");

    if(descricao.length()>30)
        throw invalid_argument("Entrada invalida. No max 30 caracteres.");

}

///
///     Inclusão da descrição da excurssão
///     @param descricao
///
void Descricao::setDescricao (string descricao){
    validar(descricao);
    this->descricao = descricao;
}


//=========================================================================================
//=========================================================================================

///
///     A validacao do endereco abrange de 0 a 20 caracteres
///     e nao há nem espaco em branco nem ponto final em sequencia.
///     @param descricao
///
void Endereco::validar(string endereco){
    smatch matches;
    regex ENDERECO_INVALIDO("([ ]{2,})");                      //análise para cada caso separadamente.
    regex ENDERECO_INVALIDO2("([.]{2,})");

    if(regex_search(endereco,matches,ENDERECO_INVALIDO) ||
       regex_search(endereco,matches,ENDERECO_INVALIDO2))
        throw invalid_argument ("Endereco invalido. use apenas 1 espaco e ponto por vez.");

    if(endereco.length()>20)
        throw invalid_argument("Endereco invalido. No max 20 caracteres.");

}

///
///     Inclusão do Endereco da excurssão
///     @param endereco
///
void Endereco::setEndereco (string endereco){
    validar(endereco);
    this->endereco = endereco;
}


/// Lembrar de apagar esta linha

//=========================================================================================
//=========================================================================================

///
///     A validacao do Horario abrange de 00-23 Horas e 00-59 minutos.
///     @param horario
///
void Horario::validar(string horario){
    smatch matches;
    string HH, MM;
    int hora, minuto;
    regex HORA_VALIDA("([0-2][0-9])[:]([0-5][0-9])");

    if(regex_search(horario,matches,HORA_VALIDA)){
        HH = matches.str(1);
        hora = stoi(HH);
        MM = matches.str(2);
        minuto = stoi(MM);

        if(hora<0 || hora>23 || minuto<0 || minuto>59)
            throw invalid_argument("Horario invalido. Formato valido: 00:00 ate 23:59.");
    }else{throw invalid_argument("Formato de horario invalido.");}

}

///
///     Inclusão do Horario da excursão
///     @param endereco
///
void Horario::setHorario (string horario){
    validar(horario);
    this->horario = horario;
}


//=========================================================================================
//=========================================================================================

///
///     A função recebe um vetor de char pois é mais pratico de se manipular.
///     Apos transformar a string para padrao minusculo, pode ser feita comparacao.
///     @param idioma
///
void Idioma::validar(string linguagem){   /// ESTA LINHA FOI DE char* PARA string
///
///     O vetor de string estatico e sulficiente para a aplicacao, pois os Idiomas sao constante
///
    string idiomaDisponivel[10] = {"ingles", "chines mandarim", "hindi", "espanhol", "frances", "arabe",
                                   "bengali", "russo", "portugues", "indonesio"};

    lowerstr(linguagem);
    //strlwr(linguagem);                                     //  Manipula a string para minusculo e salva na mesma variavel
    string idiomaAux = linguagem;


    int selecao = 0;                                        //  Contador de igualdade entre cidades

    for(int i=0; i<10; i++){
        if(idiomaAux == idiomaDisponivel[i]){
            selecao = selecao+1;
        }
    }
    if (selecao != 1){
        throw invalid_argument("Idioma invalido. Suas opcoes sao: ingles, chines mandarim, hindi, espanhol, frances, arabe, bengali, russo, portugues, indonesio");
    }
}

///
///     Antes de incluir o idioma deve-se verificar se esta na lista de idiomas disponiveis.
///     @param idioma
///
void Idioma::setIdioma (string linguagem){ /// ESTA LINHA FOI DE char* PARA string
    validar(linguagem);
    this->idioma = linguagem;
}


//=========================================================================================
//=========================================================================================

///
///     A validacao do endereco abrange de 0 a 20 caracteres
///     e nao há nem espaco em branco nem ponto final em sequencia.
///     @param descricao l
///
void Titulo::validar(string titulo){
    smatch matches;

    regex TITULO_INVALIDO("([ ]{2,})|([.]{2,})|([0-9])");

    if(regex_search(titulo,matches,TITULO_INVALIDO)){ //||
       //regex_search(titulo,matches,TITULO_INVALIDO2))
        throw invalid_argument ("Endereco invalido. E permitido apenas letras e use apenas 1 espaco e ponto por vez.");
    }
    if(titulo.length()<5 || titulo.length()>20)
       throw invalid_argument("Endereco invalido. No min 5 e no max 20 caracteres.");

}

///
///     Inclusão do Endereco da excurssão
///     @param endereco
///
void Titulo::setTitulo (string titulo){
    validar(titulo);
    this->titulo = titulo;
}



//=========================================================================================
//=========================================================================================



///
///     A validacao da senha abrange 6 caracteres
///     Não é permitido caracter repetido e deve conter, no minimo, 1 letra Mais., 1 letra min. e 1 num.
///     @param segredo
///
void Senha::validar(string segredo){

    smatch matches;
    int charMin = 0, charMai = 0, charNum = 0;
    char caracter;
    string caracterStr;
    regex CAR_MIN("[a-z]");
    regex CAR_MAI("[A-Z]");
    regex CAR_NUM("[0-9]");
    regex SENHA_INVALIDA("[ ]|[\\.]|[!@#$%&¨&*)\(+=£¢¬§]");
///
/// 1 verificação de senha: caracteres invalidos e comprimento de senha.
///

    if (segredo.length()<6 || segredo.length()>6 || regex_search(segredo,matches,SENHA_INVALIDA))
        throw invalid_argument ("Senha invalida. So sao permitido 6 digitos de aA-zZ 0-9.");

///
/// Tratamento de Senha para verificacoes 2 e 3
///

    for (int i=0; i<segredo.length(); i++){
        caracter = segredo[i];
        caracterStr = segredo[i];
        if(regex_match(caracterStr,CAR_MIN)){
           charMin++;
        }else{ if(regex_match(caracterStr,CAR_MAI)){
                 charMai++;
                }else{ if(regex_match(caracterStr,CAR_NUM)){
                         charNum++;
                        }
                }
        }

///
/// 2 verificação de senha: Vedada ocorrencia de 'char' repetido em sequencia.
///

        if(i != (segredo.length()-1)){
            if(caracter == segredo[i+1])
            throw invalid_argument("Senha invalida. Nao e permito caracteres repetidos em sequencia.");
        }
    }

///
/// 3 verificacao de senha: pelo menos 1 ocorrencia de 'char': minusc., maiusc., numero.
///

    if(charMin == 0 || charMai == 0 || charNum == 0)
            throw invalid_argument("Senha invalida. Deve conter pelo menos 1 caracter minusculo, 1 maiusculo e 1 numero");

}

///
///     Inclusão do Endereco da excurssão
///     @param endereco
///
void Senha::setSenha(string segredo){
    validar(segredo);
    this->senha = segredo;
}
