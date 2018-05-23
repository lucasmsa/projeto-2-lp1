#include "Imovel.h"

Imovel::Imovel()
{

}

Imovel::~Imovel()
{

}
void Imovel::setEndereco(string n, string b, string c, string Cep, string l){
    endereco.setNumero(n);
    endereco.setBairro(b);
    endereco.setCidade(c);
    endereco.setCep(Cep);
    endereco.setLogradouro(l);
}

string Imovel::getDescricaoEndereco(){
    return endereco.toString();
}

Endereco Imovel::getEndereco(){
    return endereco;
}


void Imovel::setAlugarOuVender(int a)
{

    alugarOuVender = a;
}

int Imovel::getAlugarOuVender()
{
    return alugarOuVender;
}

int Imovel::getTipoDeImovel(){
    return tipoDeImovel;
}


void Imovel::setTipoDeImovel(int t){
    tipoDeImovel = t;
}

string Imovel::getDescricao()
{
}
