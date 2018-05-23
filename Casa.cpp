#include "Casa.h"

Casa::Casa(int ndp, int qdq, double adt, double ac){

    tipoDeImovel = 1;
    numeroDePavimentos = ndp;
    quantidadeDeQuartos = qdq;
    areaDoTerreno = adt;
    areaConstruida = ac;
}

Casa::~Casa(){

}

void Casa::setNumeroDePavimentos(int n){
    numeroDePavimentos = n;
}

void Casa::setQuantidadeDeQuartos(int q){
    quantidadeDeQuartos = q;
}

void Casa::setAreaDoTerreno(double a){
    areaDoTerreno = a;
}

void Casa::setAreaConstruida(double a){
    areaConstruida = a;
}

int Casa::getNumeroDePavimentos(){
    return numeroDePavimentos;
}

int Casa::getQuantidadeDeQuartos(){
    return quantidadeDeQuartos;
}

double Casa::getAreaDoTerreno(){
    return areaDoTerreno;
}

double Casa::getAreaConstruida(){
    return areaConstruida;
}

string Casa::getDescricao()
{
    string descricao = endereco.toString() + ", Numero de pavimentos: " + std::to_string(numeroDePavimentos) + ", Quantidade de Quartos: " + std::to_string(quantidadeDeQuartos) +
    ", Area do terreno: " + std::to_string(areaDoTerreno) + ", Area construida: " + std::to_string(areaConstruida);
    return descricao;
 }
