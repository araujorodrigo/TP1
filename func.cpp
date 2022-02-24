///
/// \file func.cpp
/// \version 1.0
///

#include "func.h"

///
/// \brief Esta Fun&ccedil;&atilde;o transforma os caracteres da string passada como par&acirc;metro.
///
/// \note lowerstr: transforma caracteres mai&uacute;sculos em min&uacute;sculos.
///
/// \param str
///
/// \return void
///

void lowerstr(string &str){

	transform(str.begin(), str.end(), str.begin(), ::tolower);
}

///
/// \brief Esta Fun&ccedil;&atilde;o transforma os caracteres da string passada como par&acirc;metro.
///
/// \note upperstr: transforma caracteres min&uacute;sculos em mai&uacute;sculos.
///
/// \param str
///
/// \return void
///

void upperstr(string &str){

	transform(str.begin(), str.end(), str.begin(), ::toupper);
}
