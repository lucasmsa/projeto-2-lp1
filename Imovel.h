#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"
#include <iostream>

using namespace std;

class Imovel
{
   protected:
        Endereco endereco;
        int alugarOuVender;
        int tipoDeImovel;

    public:
        Imovel();
        virtual ~Imovel();

        Endereco getEndereco();
        void setEndereco(string, string, string, string, string);
        void setAlugarOuVender(int);
        int getAlugarOuVender();
        void setTipoDeImovel(int);
        int getTipoDeImovel();
        void setSeExite(int);
        int getSeExiste();
        string getDescricaoEndereco();
        virtual string getDescricao() = 0;
};

#endif // IMOVEL_H
