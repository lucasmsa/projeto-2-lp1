#include "Terreno.h"

Terreno::Terreno(double a){
    area = a;
    tipoDeImovel = 3;
}

Terreno::~Terreno(){

}


void Terreno::setArea(double a){
    area = a;
}

double Terreno::getArea(){
    return area;
}

string Terreno::getDescricao()
{
    string descricao = endereco.toString() + ", Area: " + std::to_string(area);
    return descricao;
 }
