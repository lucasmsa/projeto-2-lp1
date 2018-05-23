#ifndef FLAT_H
#define FLAT_H
#include "Imovel.h"

using namespace std;

class Flat : public Imovel
{
     protected:
        std::string arcondicionado;
        std::string internet;
        std::string tvCabo;
        std::string lavanderia;
        std::string limpeza24;
        std::string recepcao24;
        double valorDoCondominio;


    public:

        void setValorDoCondominio(double);
        void setArcondicionado(string);
        void setInternet(string);
        void setTvCabo(string);
        void setLavanderia(string);
        void setLimpeza24(string);
        void setRecepcao24(string);

        double getValorDoCondominio();
        std::string getArcondicionado();
        std::string getInternet();
        std::string getTvCabo();
        std::string getLavanderia();
        std::string getLimpeza24();
        std::string getRecepcao24();
        std::string getDescricao();


        Flat(string, string, string, string, string, string, double);
};

#endif // FLAT_H
