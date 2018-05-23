#ifndef CASA_H
#define CASA_H

#include "Imovel.h"

class Casa : public Imovel
{

    protected:
        int numeroDePavimentos, quantidadeDeQuartos;
        double areaDoTerreno, areaConstruida;

    public:
        Casa(int, int, double, double);
        virtual ~Casa();

        void setNumeroDePavimentos(int n);
        void setQuantidadeDeQuartos(int q);
        void setAreaDoTerreno(double a);
        void setAreaConstruida(double a);

        int getNumeroDePavimentos();
        int getQuantidadeDeQuartos();
        double getAreaDoTerreno();
        double getAreaConstruida();
        string getDescricao();
};

#endif // CASA_H
