#include "Apartamento.h"
#include <string>

using namespace std;

Apartamento::Apartamento(string p, long double v, int nvagas, int an){

    tipoDeImovel = 2;
    posicao = p;
    valorDoCondominio = v;
    numeroDeVagasNaGaragem = nvagas;
    andar = an;
}

Apartamento::~Apartamento(){

}
void Apartamento::setPosicao(string p){
    posicao = p;
}

void Apartamento::setValorDoCondominio(long double v){
    valorDoCondominio = v;
}

void Apartamento::setNumeroDeVagasNaGaragem(int n){
    numeroDeVagasNaGaragem = n;
}

void Apartamento::setAndar(int a){
    andar = a;
}

string Apartamento::getPosicao(){
    return posicao;
}

long double Apartamento::getValorDoCondominio(){
    return valorDoCondominio;
}

int Apartamento::getNumeroDeVagasNaGaragem(){
    return numeroDeVagasNaGaragem;
}

int Apartamento::getAndar(){
    return andar;
}

string Apartamento::getDescricao()
{
    string descricao = endereco.toString() + ", Posicao:\n " + posicao + ", Valor do condominio: \n" + std::to_string(valorDoCondominio) +
    ", Numero de Vagas na garagem: " + std::to_string(numeroDeVagasNaGaragem) + ", Andar: " + std::to_string(andar);
    return descricao;
 }
