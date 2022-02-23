#include <iostream>
#include <exception>
#include <string>
#include <cstring>
#include <locale>
#include "dominio.h"
#include "testes.h"
using namespace std;

int main (){
setlocale(LC_ALL, "portuguese");

//____________         TESTES DE UNIDADE DE DOMINIO        __________________
///
/// Teste Unidade - Duracao
/// A classe Duração será testada antes de sua utilização
///

    TUDuracao testeDuracao;

    switch(testeDuracao.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUDuracao::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


///
/// Teste Unidade - Nota
/// A função 'run' irá rodar ambos os teste.
///
    TUNota testeNota;

    switch(testeNota.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


///
/// Teste Unidade - Cidade
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final
///
    TUCidade testeCidade;

    switch(testeCidade.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


///
/// Teste Unidade - Codigo
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a função está funcionando corretamente.
///
    TUCodigo testeCodigo;

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


///
/// Teste Unidade - Data
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a função está funcionando corretamente.
///
    TUData testeData;

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

///
/// Teste Unidade - Descrição
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a função está funcionando corretamente.
///
    TUDescricao testeDescricao;

    switch(testeDescricao.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


///
/// Teste Unidade - Endereco
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a função está funcionando corretamente.
///
    TUEndereco testeEndereco;

    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUEndereco::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


///
/// Teste Unidade - Horario
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a função está funcionando corretamente.
///
    TUHorario testeHorario;

    switch(testeHorario.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUHorario::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }



///
/// Teste Unidade - Idioma
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a função está funcionando corretamente.
///
    TUIdioma testeIdioma;

    switch(testeIdioma.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUHorario::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


///
/// Teste Unidade - Titulo
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a função está funcionando corretamente.
///
    TUTitulo testeTitulo;

    switch(testeTitulo.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUTitulo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

///
/// Teste Unidade - Senha
/// A função 'run' irá rodar ambos os teste, espera-se obter sucesso ao final.
/// Isto significa que a função está funcionando corretamente.
///
    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


//____________         TESTES DE UNIDADE DE ENTIDADE        __________________
//____________________________________________________________________________

 TUAvaliacao testeAvaliacao;

    // Invocar m�todo e apresentar mensagem acerca do resultado do teste.

    switch(testeAvaliacao.run()){
        case TUAvaliacao::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
                                break;
        case TUAvaliacao::FALHA  : cout << "FALHA   - PROJETO" << endl;
                                break;
    }


 TUSessao testeSessao;

    // Invocar m�todo e apresentar mensagem acerca do resultado do teste.

    switch(testeSessao.run()){
        case TUSessao::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
                                break;
        case TUSessao::FALHA  : cout << "FALHA   - PROJETO" << endl;
                                break;
    }

 TUExcursao testeExcursao;

    // Invocar m�todo e apresentar mensagem acerca do resultado do teste.

    switch(testeExcursao.run()){
        case TUExcursao::SUCESSO: cout << "SUCESSO - PROJETO" << endl;
                                break;
        case TUExcursao::FALHA  : cout << "FALHA   - PROJETO" << endl;
                                break;
    }

//==============================================================================================================================

///
/// Declaração da função de duração do passeio.
/// Assim como, a validação do valor inserido.
///

    int duracaoPasseio = 30;
    Duracao passeio;                                    //Instância da classe Duracao
    //cout << "Digite a duracao do passeio: " << endl;
    //cin >> duracaoPasseio;
    //cin.get();                                          // este "get" coleta "\n" deixado por "cin" acima. Assim não influencia no getline.

///
/// A validação é feita dentro de bloco try-catch, pois assim é feito o tratamento adequado de excessão.
///
    try{
        passeio.Duracao::setValor(duracaoPasseio);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }


///
/// Declaração da função de Nota de avaliação.
/// Assim como, a validação do valor inserido.
///
    // Declaração de instâncias
    int notaPasseio = 4;
    Nota nota;

    // Desenvolvimento
    //cout << "Digite a Nota de avaliação para a excursão: " << endl;
    //cin >> notaPasseio;
    //cin.get()                                         // este "get" coleta "\n" deixado por "cin" acima. Assim não influencia no getline.

    try{
        nota.Nota::setValor(notaPasseio);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }



///
/// Declaração da função nome da cidade.
/// Assim como, a validação do nome inserido.
///
    // Declaração de instâncias
    string nomeCidade = "Macau"; //char nomeCidade[20]="Macau";
    Cidade cidade;

    // Desenvolvimento
    //cout << "Digite o Nome da cidade para a excursão: " << endl;
    //cin.getline(nomeCidade,20) ;

    //Verificação
    try{
        cidade.Cidade::setCidade(nomeCidade);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }


///
/// Declaração da função CODIGO.
/// Assim como, a validação do CODIGO.
///
    // Declaração de instâncias
    string numCodigo= "123456";
    Codigo codigo;

    //Verificação
    try{
        codigo.setValor(numCodigo);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

///
/// Declaração da função DATA
/// Assim como, a validação dA DATA
///
    // Declaração de instâncias
    string numData = "31.JAN.2020";
    Data data;

    //Verificação
    try{
        data.setData(numData);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }


///
/// Declaração da função de descrição do passeio.
/// Assim como, a validação do texto inserido.
///

    string descricaoExcurssao = "TESTE";
    //                           ^                            ^
    Descricao descricao;                                    //Instância da classe Duracao

///
/// A validação é feita dentro de bloco try-catch, pois assim é feito o tratamento adequado de excessão.
///
    try{
        descricao.Descricao::setDescricao(descricaoExcurssao);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }



///
/// Declaração da função de Endereco da excursao.
/// Assim como, a validação do texto inserido.
///

    string enderecoExcursao = "TESTE";
    //                           ^                            ^
    Endereco endereco;                                    //Instância da classe Endereco

///
/// A validação é feita dentro de bloco try-catch, pois assim é feito o tratamento adequado de excessão.
///
    try{
        endereco.Endereco::setEndereco(enderecoExcursao);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }



///
/// Declaração da função Horario da excursao.
/// Assim como, a validação do texto inserido.
///

    string horarioExcursao = "23:59";
    //                           ^                            ^
    Horario horario;                                    //Instância da classe Endereco

///
/// A validação é feita dentro de bloco try-catch, pois assim é feito o tratamento adequado de excessão.
///
    try{
        horario.Horario::setHorario(horarioExcursao);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }



///
/// Declaração da função idioma.
/// Assim como a validação
///
    // Declaração de instâncias
    string linguagem = "PorTugUeS";  /// ESTA LINHA FOI DE char PARA string
    Idioma idioma;

    //Verificação
    try{
        idioma.Idioma::setIdioma(linguagem);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }



///
/// Declaração da função Titulo.
/// Assim como a validação
///
    // Declaração de instâncias
    string texto = "Excursao Camelo.";
    Titulo titulo;

    //Verificação
    try{
        titulo.Titulo::setTitulo(texto);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

///
/// Declaração da função Senha.
/// Assim como a validação
///
    // Declaração de instâncias
    string segredo = "123aQp";
    Senha senha;

    //Verificação
    try{
        senha.Senha::setSenha(segredo);
    }
    catch(invalid_argument &exp){
        cout << "Excecao: " << exp.what() << endl;
    }

//========================================================================================

    return 0;
}
