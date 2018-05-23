#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento : public Imovel
{
     protected:
        string posicao;
        long double valorDoCondominio;
        int numeroDeVagasNaGaragem, andar, tipoDeImovel;

    public:
        Apartamento(string, long double, int, int);
        virtual ~Apartamento();

        void setPosicao(string p);
        void setValorDoCondominio(long double v);
        void setNumeroDeVagasNaGaragem(int n);
        void setAndar(int a);

        string getPosicao();
        long double getValorDoCondominio();
        int getNumeroDeVagasNaGaragem();
        int getAndar();
        string getDescricao();
};

#endif // APARTAMENTO_H
