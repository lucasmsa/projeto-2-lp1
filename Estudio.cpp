#include "Estudio.h"
#include <iostream>

using namespace std;

Estudio::Estudio(string a, string b, string c, string d, string e, string f,string g, string h,string i, double j)
{
    valorDoCondominio=j;
    arcondicionado=a;
    internet=b;
    tvCabo=c;
    lavanderia=d;
    limpeza24=e;
    recepcao24=f;
    piscina=g;
    sauna=h;
    ginastica=i;


}

Estudio::~Estudio()
{

}

void Estudio::setValorDoCondominio(double j){

    valorDoCondominio=j;

}

void Estudio::setArcondicionado(string a)
{
    arcondicionado = a;
}

void Estudio::setInternet(string b)
{
    internet = b;
}
void Estudio::setTvCabo (string c)
{
    tvCabo = c;
}
void Estudio::setLavanderia (string d)
{
    lavanderia = d;
}

void Estudio::setLimpeza24 (string e)
{
    limpeza24 = e;
}

void Estudio::setRecepcao24 (string f)
{
    recepcao24 = f;
}

void Estudio::setPiscina (string g)
{
    piscina = g;
}

void Estudio::setSauna (string h)
{
    sauna = h;
}

void Estudio::setGinastica (string i)
{
    ginastica = i;
}

double Estudio::getValorDoCondominio(){

    return valorDoCondominio;

}

string Estudio::getArcondicionado()
{
    return arcondicionado;
}

string Estudio::getInternet()
{
    return internet;
}

string Estudio::getTvCabo()
{
    return tvCabo;
}

string Estudio::getLavanderia()
{
    return lavanderia;
}

string Estudio::getLimpeza24()
{
    return limpeza24;
}

string Estudio::getRecepcao24()
{
    return recepcao24;
}

string Estudio::getPiscina()
{
    return piscina;
}

string Estudio::getSauna()
{
    return sauna;
}

string Estudio::getGinastica()
{
    return ginastica;
}

string Estudio::getDescricao()
{
    string descricao = endereco.toString() + ", Valor do condominio: " + std::to_string(valorDoCondominio) + ", Ar condicionados: " + arcondicionado +
    ", Internet: " + internet + ", TV a cabo: " + tvCabo + ", Lavanderia: " + lavanderia + ", Limpeza 24h: " + limpeza24 + ", Recepcao 24h: " + recepcao24
    + ", Piscina: " + piscina + ", Sauna: " + sauna + ", Ginastica: " + ginastica;
    return descricao;
 }
