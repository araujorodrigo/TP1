///Inclusão de bibliotecas auxiliares
#include <iostream>
#include <exception>
#include "dominio.h"
#include "testes.h"


using namespace std;


///
///   setUp cria um objeto no proposito de completação dos testes
///
void TUDuracao::setUp(){
    duracao = new Duracao();                          ///inicializa o objeto DURACAO -------- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a instância ESTADO
}

///
///   O Teste de cenário de sucesso provoca a classe com valor VALIDO.
///   Somente recebe estado de FALHA em caso de erro na classe.
///
void TUDuracao::testarCenarioSucesso(){
    try{
        duracao->setValor(VALOR_VALIDO);
        if (duracao->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}

///
///   O Teste de cenário de falha provoca a classe com valor INVALIDO.
///   Espera-se obter erro de exceção
///
void TUDuracao::testarCenarioFalha(){
    try{
        duracao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                      ///Se o valor está INVALIDO, ele nem será incluido para a variável
        //cout << "FALHA - CODIGO. Excessao: " << exc.what() << duracao->getValor() << VALOR_INVALIDO << endl;          CÓDIGO DE TESTE
        if(duracao->getValor() == VALOR_INVALIDO)     ///como então getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}

///
///   A aqui sera feita a destruição do objeto de testes.
///
void TUDuracao::tearDown(){
    delete duracao;                                   ///Exclusão do objeto da maneira correta
}

///
/// O procedimento de Testes é composto da etapas abaixo e retornará SUCESSO ou FALHA
///
int TUDuracao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//===========================================================================================================

///
/// Criação do objeto de testes de nota
/// e atribuição de estado inicial.
///
void TUNota::setUp(){
    nota = new Nota();                                ///inicializa o objeto DURACAO -------- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a instância ESTADO
}

///
/// Testes de cenário de sucesso e de falha.
///
void TUNota::testarCenarioSucesso(){
    try{
        nota->setValor(VALOR_VALIDO);
        if (nota->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUNota::testarCenarioFalha(){
    try{
        nota->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                   ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (nota->getValor() == VALOR_INVALIDO)     ///como então getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUNota::tearDown(){
    delete nota;                                   ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para nota.
/// Retorna somente um estado, é passível de melhoria.
///
int TUNota::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//===========================================================================================================

///
/// Criação do objeto de testes de nome de Cidade
/// e atribuição de estado inicial.
///
void TUCidade::setUp(){
    cidade = new Cidade();                            ///inicializa o objeto CIDADE ---- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a instância ESTADO
}

///
/// Testes de cenário de sucesso e de falha.
///
void TUCidade::testarCenarioSucesso(){
    try{
        cidade->setCidade(VALOR_VALIDO);
        if (cidade->getCidade() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUCidade::testarCenarioFalha(){
    try{
        cidade->setCidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                      ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (cidade->getCidade() == VALOR_INVALIDO)     ///como então getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUCidade::tearDown(){
    delete cidade;                                   ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Cidade.
/// Retorna somente um estado, é passível de melhoria.
///
int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//===========================================================================================================


///
/// Criação do objeto de testes para código da excurssão
/// e atribuição de estado inicial.
///
void TUCodigo::setUp(){
    codigo = new Codigo();                            ///inicializa o objeto CIDADE ---- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a instância ESTADO
}

///
/// Testes de cenário de sucesso e de falha.
///
void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                      ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (codigo->getValor() == VALOR_INVALIDO)     ///como então getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUCodigo::tearDown(){
    delete codigo;                                      ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Código.
///
int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//===========================================================================================================


///
/// Criação do objeto de testes para Data da excurssão
/// e atribuição de estado inicial.
///
void TUData::setUp(){
    data = new Data();                            ///inicializa o objeto CIDADE ---- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a instância ESTADO
}

///
/// Testes de cenário de sucesso e de falha.
///
void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                      ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (data->getData() == VALOR_INVALIDO)     ///como então getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUData::tearDown(){
    delete data;                                      ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Código.
///
int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//===========================================================================================================


///
/// Criação do objeto de testes para Descrição da excurssão
/// e atribuição de estado inicial.
///
void TUDescricao::setUp(){
    descricao = new Descricao();                            ///inicializa o objeto CIDADE ---- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                 ///inicializa a instância ESTADO
}

///
/// Testes de cenário de sucesso e de falha.
///
void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setDescricao(VALOR_VALIDO);
        if (descricao->getDescricao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setDescricao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                      ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (descricao->getDescricao() == VALOR_INVALIDO)     ///como então getvalor pode ser igual ao valor INVALIDO ???
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUDescricao::tearDown(){
    delete descricao;                                      ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Código.
///
int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//===========================================================================================================


///
/// Criação do objeto de testes para Endereco da excursão
/// e atribuição de estado inicial.
///
void TUEndereco::setUp(){
    endereco = new Endereco();                              ///inicializa o objeto Endereco ---- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                       ///inicializa a instância ESTADO
}

///
/// Testes de cenário de sucesso e de falha.
///
void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                           ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (endereco->getEndereco() == VALOR_INVALIDO)
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUEndereco::tearDown(){
    delete endereco;                                      ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Endereco.
///
int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//===========================================================================================================


///
/// Criação do objeto de testes para Horario da excursão
/// e atribuição de estado inicial.
///
void TUHorario::setUp(){
    horario = new Horario();                                ///inicializa o objeto Endereco ---- Já não havia sido criado em testes.h ???
    estado = SUCESSO;                                       ///inicializa a instância ESTADO
}

///
/// Testes de cenário de sucesso e de falha.
///
void TUHorario::testarCenarioSucesso(){
    try{
        horario->setHorario(VALOR_VALIDO);
        if (horario->getHorario() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUHorario::testarCenarioFalha(){
    try{
        horario->setHorario(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                           ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (horario->getHorario() == VALOR_INVALIDO)
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUHorario::tearDown(){
    delete horario;                                      ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Endereco.
///
int TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//===========================================================================================================


///
/// Criação do objeto de testes para Idioma da excursão
/// e atribuição de estado inicial.
///

void TUIdioma::setUp(){
    idioma = new Idioma();                                ///inicializa o objeto Idioma
    estado = SUCESSO;
}

///
/// Testes de cenário de sucesso e de falha.
///

void TUIdioma::testarCenarioSucesso(){
    try{
        idioma->setIdioma(VALOR_VALIDO);
        if (idioma->getIdioma() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUIdioma::testarCenarioFalha(){
    try{
        idioma->setIdioma(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                           ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (idioma->getIdioma() == VALOR_INVALIDO)
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUIdioma::tearDown(){
    delete idioma;                                      ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Endereco.
///
int TUIdioma::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//===========================================================================================================


///
/// Criação do objeto de testes para Titulo da excursão
/// e atribuição de estado inicial.
///

void TUTitulo::setUp(){
    titulo = new Titulo();                                ///inicializa o objeto Idioma
    estado = SUCESSO;
}

///
/// Testes de cenário de sucesso e de falha.
///

void TUTitulo::testarCenarioSucesso(){
    try{
        titulo->setTitulo(VALOR_VALIDO);
        if (titulo->getTitulo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUTitulo::testarCenarioFalha(){
    try{
        titulo->setTitulo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                           ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (titulo->getTitulo() == VALOR_INVALIDO)
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUTitulo::tearDown(){
    delete titulo;                                      ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Endereco.
///
int TUTitulo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

///
/// Criação do objeto de testes para senha de usuário
/// e atribuição de estado inicial.
///

void TUSenha::setUp(){
    senha = new Senha();                                ///inicializa o objeto Idioma
    estado = SUCESSO;
}

///
/// Testes de cenário de sucesso e de falha.
///

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                           ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUSenha::tearDown(){
    delete senha;                                      ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Endereco.
///
int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

///
/// Criação do objeto de testes para email de usuário
/// e atribuição de estado inicial.
///

void TUEmail::setUp(){
    email = new Email();                                ///inicializa o objeto Idioma
    estado = SUCESSO;
}

///
/// Testes de cenário de sucesso e de falha.
///

void TUEmail::testarCenarioSucesso(){
    try{
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUEmail::testarCenarioFalha(){
    try{
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                           ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (email->getEmail() == VALOR_INVALIDO)
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUEmail::tearDown(){
    delete email;                                      ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Endereco.
///
int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

///
/// Criação do objeto de testes para nome de usuário
/// e atribuição de estado inicial.
///

void TUNome::setUp(){
    nome = new Nome();                                ///inicializa o objeto Idioma
    estado = SUCESSO;
}

///
/// Testes de cenário de sucesso e de falha.
///

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &exc){
        estado = FALHA;
    }
}


void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &exc){                           ///Se o valor está INVALIDO, ele nem será incluido para a variável
        if (nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
    }
}


///
/// exclusão correta do objeto de testes
///
void TUNome::tearDown(){
    delete nome;                                      ///Exclusão do objeto da maneira correta
}

///
/// Script de teste de unidade para Endereco.
///
int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//__________________________________________________________________________________________________________
//______________________     Testes de unidade de Entidades      ___________________________________________
//__________________________________________________________________________________________________________



void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown(){
    delete avaliacao;
}

void TUAvaliacao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO1);
    avaliacao->setCodigoE(codigo);
    if(avaliacao->getCodigoE().getValor() != VALOR_VALIDO1)
        estado = FALHA;

    Nota nota;
    nota.setValor(VALOR_VALIDO2);
    avaliacao->setNotaE(nota);
    if(avaliacao->getNotaE().getValor() != VALOR_VALIDO2)
        estado = FALHA;

    Descricao descricao;
    descricao.setDescricao(VALOR_VALIDO3);
    avaliacao->setDescricaoE(descricao);
    if(avaliacao->getDescricaoE().getDescricao() != VALOR_VALIDO3)
        estado = FALHA;
}

int TUAvaliacao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

//__________________________________________________________________________________________________________
//__________                TU - Usuario                     ________________________________________________


void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
    Nome nome;
    nome.setNome(VALOR_VALIDO1);
    usuario->setNomeE(nome);
    if(usuario->getNomeE().getNome() != VALOR_VALIDO1)
        estado = FALHA;

    Email email;
    email.setEmail(VALOR_VALIDO2);
    usuario->setEmailE(email);
    if(usuario->getEmailE().getEmail() != VALOR_VALIDO2)
        estado = FALHA;

    Senha senha;
    senha.setSenha(VALOR_VALIDO3);
    usuario->setSenhaE(senha);
    if(usuario->getSenhaE().getSenha() != VALOR_VALIDO3)
        estado = FALHA;
}

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

//__________________________________________________________________________________________________________
//__________                TU - Sessão                     ________________________________________________


void TUSessao::setUp(){
    sessao = new Sessao();
    estado = SUCESSO;
}

void TUSessao::tearDown(){
    delete sessao;
}

void TUSessao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO1);
    sessao->setCodigoE(codigo);
    if(sessao->getCodigoE().getValor() != VALOR_VALIDO1)
        estado = FALHA;

    Data data;
    data.setData(VALOR_VALIDO2);
    sessao->setDataE(data);
    if(sessao->getDataE().getData() != VALOR_VALIDO2)
        estado = FALHA;

    Horario horario;
    horario.setHorario(VALOR_VALIDO3);
    sessao->setHorarioE(horario);
    if(sessao->getHorarioE().getHorario() != VALOR_VALIDO3)
        estado = FALHA;

    Idioma idioma;
    idioma.setIdioma(VALOR_VALIDO4);
    sessao->setIdiomaE(idioma);
    if(sessao->getIdiomaE().getIdioma() != VALOR_VALIDO4)
        estado = FALHA;
}

int TUSessao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


//__________________________________________________________________________________________________________
//__________                TU - Excursão                   ________________________________________________


void TUExcursao::setUp(){
    excursao = new Excursao();
    estado = SUCESSO;
}

void TUExcursao::tearDown(){
    delete excursao;
}

void TUExcursao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO1);
    excursao->setCodigoE(codigo);
    if(excursao->getCodigoE().getValor() != VALOR_VALIDO1)
        estado = FALHA;

    Titulo titulo;
    titulo.setTitulo(VALOR_VALIDO2);
    excursao->setTituloE(titulo);
    if(excursao->getTituloE().getTitulo() != VALOR_VALIDO2)
        estado = FALHA;

    Nota nota;
    nota.setValor(VALOR_VALIDO3);
    excursao->setNotaE(nota);
    if(excursao->getNotaE().getValor() != VALOR_VALIDO3)
        estado = FALHA;

    Cidade cidade;
    cidade.setCidade(VALOR_VALIDO4);
    excursao->setCidadeE(cidade);
    if(excursao->getCidadeE().getCidade() != VALOR_VALIDO4)
        estado = FALHA;

    Duracao duracao;
    duracao.setValor(VALOR_VALIDO5);
    excursao->setDuracaoE(duracao);
    if(excursao->getDuracaoE().getValor() != VALOR_VALIDO5)
        estado = FALHA;

    Descricao descricao;
    descricao.setDescricao(VALOR_VALIDO6);
    excursao->setDescricaoE(descricao);
    if(excursao->getDescricaoE().getDescricao() != VALOR_VALIDO6)
        estado = FALHA;

    Endereco endereco;
    endereco.setEndereco(VALOR_VALIDO7);
    excursao->setEnderecoE(endereco);
    if(excursao->getEnderecoE().getEndereco() != VALOR_VALIDO7)
        estado = FALHA;
}

int TUExcursao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
