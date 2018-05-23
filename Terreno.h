#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"

class Terreno : public Imovel
{

    protected:
        double area;

    public:
        Terreno(double a);
        virtual ~Terreno();

        void setArea(double a);
        double getArea();
        string getDescricao();

};

#endif // TERRENO_H
