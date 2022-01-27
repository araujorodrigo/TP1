#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

class CIDADE{
    private:
        char    cidadeNome[15];
        void    validar(int);

    public:
        void    setCidade();
        char    getCidade(); const //Deve ser somente leitura

}; // CIDADE


#endif // DOMINIO_H_INCLUDED