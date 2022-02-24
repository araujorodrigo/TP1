///
/// \file dominio.cpp
/// \version 1.0
///

//  /**********************************************************************************************
//                                         BIBLIOTECAS
//  ***********************************************************************************************/

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
#include "func.h"

using namespace std;

// ************************************************************************************************
// *                                  DESENVOLVIMENTO dominio.cpp
// ************************************************************************************************/


///
/// \brief Duraç&atilde;o do passeio pode ser de 30, 60, 90, 120 ou 180 minutos.
///
/// \param valor
///
/// \throw invalid_argument("Duracao invalida.")
///
    void Duracao::validar(int valor){
    if (valor != 30 && valor != 60 && valor != 90 && valor != 120 && valor != 180)
        throw invalid_argument("Duracao invalida.");
    }

///
/// \brief M&eacute;todo setValor permite salvar n&uacute;meros v&aacute;lidos.
///
/// \param valor
///
    void Duracao::setValor(int valor){
    Duracao::validar(valor);
    this->valor = valor;
    }

///
/// \brief Nota pode ser valor de 0 &agrave; 5.
///
/// \param valor
///
/// \throw invalid_argument("Nota invalida.")
///
    void Nota::validar(int valor){
    if (valor != 0 && valor != 1 && valor != 2 && valor != 3 && valor != 4 && valor != 5)
        throw invalid_argument("Nota invalida.");
    }

///
/// \brief M&eacute;todo setValor permite salvar n&uacute;meros v&aacute;lidos.
///
/// \param valor
///
    void Nota::setValor(int valor){
    Nota::validar(valor);
    this->valor = valor;
    }

///
/// \brief H&aacute; 16 cidades v&aacute;lidas para excurs&atilde;o:
///
/// hong kong, bangkok, macau, singapura, londres, paris, dubai, delhi, istambul,
/// kuala, lumpur, nova iorque, antalya, mumbai, shenzhen, phuket.
///
/// \param nomeCidade
///
/// \throw invalid_argument("Cidade invalida.")
///
    void Cidade::validar(string nomeCidade){

    // O vetor estatico e sulficiente para a aplicacao
    string cidadeDisponivel[16] = {"hong kong", "bangkok", "macau", "singapura", "londres", "paris",
                                 "dubai", "delhi", "istambul", "kuala", "lumpur", "nova iorque",
                                 "antalya", "mumbai", "shenzhen", "phuket"};

    // Passar a string para minusculo garante que a funcao seja 'case no sensitive'
    lowerstr(nomeCidade);

    // A criacao de variavel auxiliar objetiva nao alterar o valor original da variavel parametro.
    string cidadeNomeAux = nomeCidade;

    // Contador de igualdade entre cidade requisitada e cidades disponiveis.
    int selecao = 0;

    // Mecanismo de comparacao entre parametro e vetor de cidades disponiveis.
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
/// \brief M&eacute;todo setCidade permite salvar cidades v&aacute;lidas.
///
/// \param nomeCidade
///
void Cidade::setCidade (string nomeCidade){
    validar(nomeCidade);
    this->nomeCidade = nomeCidade;
}


///
/// \brief C&oacute;digo deve ser 6 d&iacute;gitos n&uacute;mericos diferentes de '000000'.
///
/// algoritmo de verificacao => Titulo eleitoral <A HREF = "http://ghiorzi.org/DVnew.htm" </A>
///
/// \param valor
///
/// \throw invalid_argument("Codigo invalido. O codigo deve conter 6 algarismos diferente de 000000.")
///
    void Codigo::validar(string valor){
    int numerador = stoi(valor);                                  // Conversao de string para int;
    int somatorio = 0;                                            // Somatario dos digitos
    int resto = 0;                                                // resto da div por 11
    int i=0;                                                      // Indice Multiplicativo.

    regex CODIGO_VALIDO ("[0-9]{6}");                             // codigo aceitavel
    regex CODIGO_INVALIDO ("[0]{1,6}");                           // codigo invalido.
    int DV=0;                                                     // Digito Verificador

    if  (regex_match(valor, CODIGO_INVALIDO) || !regex_match(valor, CODIGO_VALIDO))
        throw invalid_argument("Codigo invalido. O codigo deve conter 6 algarismos diferente de 000000.");

///
///   Algor&iacute;tmo de D&iacute;gito de verifica&ccedil;&atilde;o (T&iacute;tulo Eleitoral)
///
    while(numerador>0){                                           // Neste laco cada algarismo e multiplicado por
        resto = (numerador%10)*(9-i);                             // uma constante diferente, conforme o algoritmo.
        somatorio = somatorio+resto;
        numerador = numerador/10;
        i++;
    }

    DV = somatorio % 11;                                          //O resto esta em INT

    if(DV == 10)                                                  // Condicao para %11=10 (div. por 11) = 10
        DV=0;

    valor = valor+to_string(DV);
    }

///
/// \brief M&eacute;todo setValor permite salvar c&oacute;digos v&aacute;lidos.
///
    void Codigo::setValor(string valor){
    validar(valor);
    this->valor = valor;
    }


///
/// Valida&ccedil;&atilde;o da Data em que: dia, m&&ecirc;s e ano, serão representados por
/// DIA, MES, ANO, respectivamente.
///
/// \param data
///
/// \throw invalid_argument
///
    void Data::validar(string data){

    std::smatch matches;
    string DIA, MES, ANO;

    regex DATA_VALIDA ("\\b(\\d{2})[- /\\.]([a-zA-Z]{3})[- /\\.](\\d{4})\\b");

    regex JAN ("[jJ][aA][nN]");                             //A Codificao dos meses generalizada.
    regex FEV ("[fF][eE][vV]");                             //A entrada e no-sensitive.
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
        DIA = matches.str(1);                               // Aqui sera guardado DIA, MES e ANO
        MES = matches.str(2);                               // o tratamento da data sera facilitado
        ANO = matches.str(3);

    // Tratamento do ano
        int ano = stoi(ANO);
        if (ano<2000 || ano>9999){
            throw invalid_argument("Entrada invalida. O ano deve ser entre 2000 - 9999.");
        }

    // Tratamento dos Meses com 30 dias
        if (regex_match(MES,ABR) || regex_match(MES,JUN) ||
            regex_match(MES,SET) || regex_match(MES,NOV)){
            int dia30 = stoi(DIA);
            if(dia30<1 || dia30>30)
                throw invalid_argument("Entrada invalida. Este mes possui 30 dias.");
        }

    // Tratamento dos Meses com 31 dias
        if (regex_match(MES,JAN) || regex_match(MES,MAR) ||
            regex_match(MES,MAI) || regex_match(MES,JUL) ||
            regex_match(MES,AGO) || regex_match(MES,OUT) ||
            regex_match(MES,DEZ)){
            int dia31 = stoi(DIA);
            if(dia31<1 || dia31>31)
                throw invalid_argument("Entrada invalida. Este mes possui 31 dias.");
        }

    // Tratamento do mes de Fevereiro.
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
/// \brief M&eacute;todo setData permite salvar data v&aacute;lida.
///
    void Data::setData(string data){
    validar(data);
    this->data = data;
    }

///
/// \brief Descricao cont&eacute;m de 0 &agrave; 30 car&aacute;cteres
///  nao deve haver espa&ccedil;o em branco, nem ponto final em sequ&ecirc;ncia.
///
///  @param descricao
///
/// \throw invalid_argument
///
    void Descricao::validar(string descricao){
    smatch matches;
    regex DESCRICAO_INVALIDA("([ ]{2,})");                  //analise para cada caso separadamente.
    regex DESCRICAO_INVALIDA2("([.]{2,})");

    // Condicao de padrao valido
    if(regex_search(descricao,matches,DESCRICAO_INVALIDA) ||
       regex_search(descricao,matches,DESCRICAO_INVALIDA2))
        throw invalid_argument ("Descricao invalida. use apenas 1 espaco e ponto por vez.");

    //Condicao de comprimento de string
    if(descricao.length()>30)
        throw invalid_argument("Entrada invalida. No max 30 caracteres.");

    }

///
/// \brief M&eacute;todo setDescricao permite salvar descri&ccedil;&atilde;o v&aacute;lida.
///
/// \param descricao
///
    void Descricao::setDescricao (string descricao){
    validar(descricao);
    this->descricao = descricao;
    }

///
/// \brief Endere&ccedil;o deve ser de 0 &agrave; 20 caracteres
///  e n&atilde;o h&aacute; nem espa&ccedil;o em branco, nem ponto final em sequ&ecirc;ncia.
///
/// \param descri&ccedil;&atilde;o
///
/// \throw invalid_argument("Endereco invalido.")
///
    void Endereco::validar(string endereco){
    smatch matches;
    regex ENDERECO_INVALIDO("([ ]{2,})");                   //analise para cada caso separadamente.
    regex ENDERECO_INVALIDO2("([.]{2,})");

    // Condicao de padrao valido.
        if(regex_search(endereco,matches,ENDERECO_INVALIDO) ||
           regex_search(endereco,matches,ENDERECO_INVALIDO2))
            throw invalid_argument ("Endereco invalido. Use apenas 1 espaco e ponto por vez.");

    //Condicao de comprimento de string
        if(endereco.length()>20)
            throw invalid_argument("Endereco invalido. No max 20 caracteres.");

    }

///
/// \brief M&eacute;todo setEndereco permite salvar endere&ccedil;o v&aacute;lido.
///
/// \param endereco
///
    void Endereco::setEndereco (string endereco){
    validar(endereco);
    this->endereco = endereco;
    }

///
/// \brief Valida&ccedil;&atilde;o do Hor&aacute;rio abrange de 00-23 Horas e 00-59 minutos.
///
/// \param horario
///
/// \throw invalid argment("Horario invalido.")
///
    void Horario::validar(string horario){
    smatch matches;
    string HH, MM;
    int hora, minuto;
    regex HORA_VALIDA("([0-2][0-9])[:]([0-5][0-9])");

    // Verificacao de tipo de dado. Sem filtro de hora especifico.
        if(regex_search(horario,matches,HORA_VALIDA)){
            HH = matches.str(1);
            hora = stoi(HH);
            MM = matches.str(2);
            minuto = stoi(MM);

    // Verificacao de horario permitido
            if(hora<0 || hora>23 || minuto<0 || minuto>59)
                throw invalid_argument("Horario invalido. Formato valido: 00:00 ate 23:59.");
        }else{throw invalid_argument("Formato de horario invalido.");}

    }

///
/// \brief M&eacute;todo setHorario permite salvar hor&aacute;rio v&aacute;lido.
///
/// \param horario
///
    void Horario::setHorario (string horario){
    validar(horario);
    this->horario = horario;
    }


///
/// \brief Idiomas dispon&iacute;veis:
/// ingles, chines mandarim, hindi, espanhol, frances, arabe, bengali, russo, portugues, indonesio.
///
/// \param linguagem
///
    void Idioma::validar(string linguagem){

    // O vetor de string estatico e sulficiente para a aplicacao, pois os Idiomas nao sao alterados.
    string idiomaDisponivel[10] = {"ingles", "chines mandarim", "hindi", "espanhol", "frances", "arabe",
                                   "bengali", "russo", "portugues", "indonesio"};

    lowerstr(linguagem);        ///<  Manipula a string para min&uacute;sculo e salva na mesma vari&aacute;vel.
    string idiomaAux = linguagem;

    int selecao = 0;                                        // Contador de igualdade entre idiomas.

    // Comparacao de idioma requisitado e idiomas disponiveis
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
/// \brief M&eacute;todo setIdioma permite salvar idioma v&aacute;lido.
///
/// \param linguagem
///
    void Idioma::setIdioma (string linguagem){ /// ESTA LINHA FOI DE char* PARA string
    validar(linguagem);
    this->idioma = linguagem;
    }


//=========================================================================================
//=========================================================================================

///
/// \brief T&iacute;tulo deve cont&eacute;r de 0 &agrave; 20 caracteres
///
/// e n&atilde;o h&aacute; nem espaco em branco, nem ponto final em sequ&ecirc;ncia.
///
/// \param titulo
///
/// \throw invalid_argument("Titulo invalido.")
///
    void Titulo::validar(string titulo){
    smatch matches;
    regex TITULO_INVALIDO("([ ]{2,})|([.]{2,})|([0-9])");

    // Condicao invalida
    if(regex_search(titulo,matches,TITULO_INVALIDO)){
        throw invalid_argument ("Titulo invalido. E permitido apenas letras e use apenas 1 espaco e ponto por vez.");
    }
    // Condicao de comprimento da string
    if(titulo.length()<5 || titulo.length()>20)
       throw invalid_argument("Titulo invalido. No min 5 e no max 20 caracteres.");

    }

///
/// \brief M&eacute;todo setTitulo permite salvar t&iacute;tulo v&aacute;lido.
///
/// \param titulo
///
    void Titulo::setTitulo (string titulo){
    validar(titulo);
    this->titulo = titulo;
    }


///
/// \brief Valida&ccedil;&atilde;o da senha abrange 6 caracteres.
/// N&atilde;o &eacute; permitido car&aacute;cter repetido e deve conter, no min: 1 letra "M", 1 letra "m" e 1 n&uacute;m.
///
/// \param segredo
///
/// \throw invalid_argument("Senha invalida.")
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

    // 1 verificacao de senha: caracteres invalidos e comprimento de senha.
    if (segredo.length()<6 || segredo.length()>6 || regex_search(segredo,matches,SENHA_INVALIDA))
        throw invalid_argument ("Senha invalida. So sao permitido 6 digitos de aA-zZ 0-9.");

    // Tratamento de Senha para verificacoes 2 e 3
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


        // 2 verificação de senha: Vedada ocorrencia de 'char' repetido em sequencia.
        if(i != (segredo.length()-1)){
            if(caracter == segredo[i+1])
            throw invalid_argument("Senha invalida. Nao e permito caracteres repetidos em sequencia.");
        }
    }

    // 3 verificacao de senha: pelo menos 1 ocorrencia de 'char': minusc., maiusc., numero.
    if(charMin == 0 || charMai == 0 || charNum == 0)
            throw invalid_argument("Senha invalida. Deve conter pelo menos 1 caracter minusculo, 1 maiusculo e 1 numero");

    }

///
/// \brief M&eacute;todo setSenha permite salvar senha v&aacute;lida.
///
/// \param segredo
///
    void Senha::setSenha(string segredo){
    validar(segredo);
    this->senha = segredo;
    }


///
/// \brief Validacao da email abrange parte-local@dominio
///
/// \param email
///
/// \throw invalid_argument("Email invalido.")
///
    void Email::validar(string email){

    smatch matches;
    int i = 0;
    stringstream full_email(email);
    string intermediate;
    regex EMAIL_VALIDO("[a-zA-Z0-9!#\\$%&'*\\+\\-\\/=^_`{|}~\\.]{1,64}[@][a-zA-Z0-9\\.\\-]{1,253}");

    // 1 verificacao de email: caracteres invalidos, comprimento de email e formato.
    if(!regex_search(email,matches,EMAIL_VALIDO))
        throw invalid_argument ("Email invalido 1");

    // 2 verificacao de email: Ocorrencia de ponto
    while(getline(full_email, intermediate, '@')){
        if(i == 0 && (intermediate.front() == '.' || intermediate.back() == '.')){
            throw invalid_argument ("Email invalido 2A");
        }

        if(i == 1 && intermediate.front() == '.'){
            throw invalid_argument ("Email invalido 2B");
        }

        i++;
    }


    // 3 verificacao de email: Pontos duplos
    if(email.find("..") != string::npos){
        throw invalid_argument ("Email invalido 3");
        }

    }

///
/// \brief Inclus&atilde;o do Endere&ccedil;o da excurs&atilde;o
///
/// \param email
///
    void Email::setEmail(string email){
    validar(email);
    this->email = email;
    }


///
/// \throw Validacao de nome
///
/// \param nome
///
/// \throw invalid_argument("Nome invalido.")
///
    void Nome::validar(string nome){

    smatch matches;
    stringstream ss_nome(nome);
    string intermediate;
    //regex NOME_VALIDO("[a-zA-Z \\.]{5,20}");
    regex CAR_INVALIDO("[^a-zA-Z \\.]");
    //
    regex MINUSCULO_VALIDO_MEIO("[\\. ][a-z]");
    regex MINUSCULO_VALIDO_INICIO("^[A-Z]");
    //
    regex PONTO_ESPACO_INVALIDO("([\\.][A-Za-z])|([\\.][\\.])|([ ][ ])|([ ][a-z\\.])");

    // 1 verificacao de nome: caracteres invalidos, comprimento de nome e formato.
    if(nome.length() < 5 || nome.length() > 20 || regex_search(nome,matches,CAR_INVALIDO))
        throw invalid_argument ("Erro: NOME_INVALIDO");

    // 2 verificacao de nome: Ocorrencia nome iniciando minusculo
    if(regex_search(nome,matches,MINUSCULO_VALIDO_MEIO) || !regex_search(nome,matches,MINUSCULO_VALIDO_INICIO))
        throw invalid_argument ("Erro: not MINUSCULO_VALIDO");

    // 3 verificacao de nome: Ocorrencias com ponto e espaco
    if(regex_search(nome,matches,PONTO_ESPACO_INVALIDO))
        throw invalid_argument ("Erro: PONTO_ESPACO_INVALIDO");

}

///
/// \brief Inclus&atilde;o do Endere&ccedil;o da excurs&atilde;o
///
/// \param nome
///
    void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;
    }

