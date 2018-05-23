#include "Flat.h"
#include <string>

using namespace std;

Flat::Flat(std::string a, std::string b, std::string c, std::string d, std::string e, std::string f, double g){

    valorDoCondominio=g;
    arcondicionado=a;
    internet=b;
    tvCabo=c;
    lavanderia=d;
    limpeza24=e;
    recepcao24=f;


}

void Flat::setValorDoCondominio(double g){

    valorDoCondominio = g;

}

void Flat::setArcondicionado(string a)
{
    arcondicionado = a;
}

void Flat::setInternet(string b)
{
    internet = b;
}
void Flat::setTvCabo (string c)
{
    tvCabo = c;
}
void Flat::setLavanderia (string d)
{
    lavanderia = d;
}

void Flat::setLimpeza24 (string e)
{
    limpeza24 = e;
}

void Flat::setRecepcao24 (string f)
{
    recepcao24 = f;
}

double Flat::getValorDoCondominio(){

    return valorDoCondominio;

}

string Flat::getArcondicionado()
{
    return arcondicionado;
}

string Flat::getInternet()
{
    return internet;
}

string Flat::getTvCabo()
{
    return tvCabo;
}

string Flat::getLavanderia()
{
    return lavanderia;
}

string Flat::getLimpeza24()
{
    return limpeza24;
}

string Flat::getRecepcao24()
{
    return recepcao24;
}

string Flat::getDescricao()
{
    string descricao = endereco.toString() + ", Valor do condominio: " + std::to_string(valorDoCondominio) + ", Ar condicionados: " + arcondicionado +
    ", Internet: " + internet + ", TV a cabo: " + tvCabo + ", Lavanderia: " + lavanderia + ", Limpeza 24h: " + limpeza24 + ", Recepcao 24h: " + recepcao24;
    return descricao;
 }
