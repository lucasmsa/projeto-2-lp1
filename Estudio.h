#ifndef ESTUDIO_H
#define ESTUDIO_H
#include "Imovel.h"

using namespace std;

class Estudio : public Imovel
{
     protected:
        std::string arcondicionado;
        std::string internet;
        std::string tvCabo;
        std::string lavanderia;
        std::string limpeza24;
        std::string recepcao24;
        std::string piscina;
        std::string sauna;
        std::string ginastica;
        double valorDoCondominio;


    public:

        void setValorDoCondominio(double);
        void setArcondicionado(string);
        void setInternet(string);
        void setTvCabo(string);
        void setLavanderia(string);
        void setLimpeza24(string);
        void setRecepcao24(string);
        void setPiscina(string);
        void setSauna(string);
        void setGinastica(string);

        double getValorDoCondominio();
        std::string getArcondicionado();
        std::string getInternet();
        std::string getTvCabo();
        std::string getLavanderia();
        std::string getLimpeza24();
        std::string getRecepcao24();
        std::string getPiscina();
        std::string getSauna();
        std::string getGinastica();
        std::string getDescricao();



        Estudio(string, string, string, string, string, string, string, string, string, double);
        virtual ~Estudio();


};

#endif // ESTUDIO_H
