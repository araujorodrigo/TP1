

#include "func.h"

///
/// \brief Esta Funcao transforma os caracteres da string passada como parametro.
/// lowerstr transforma caracteres maiusculos em minusculos.
/// upperstr transforma caracteres minusculos em maiusculos.
/// \param str
/// \return void
///

void lowerstr(string &str){

	transform(str.begin(), str.end(), str.begin(), ::tolower);
}

void upperstr(string &str){

	transform(str.begin(), str.end(), str.begin(), ::toupper);
}
