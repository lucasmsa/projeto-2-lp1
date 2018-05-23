#include "Endereco.h"

Endereco::Endereco()
{

}

Endereco::~Endereco()
{

}

string Endereco::getCep(){
    return cep;
}

string Endereco::getLogradouro(){
    return logradouro;
}

string Endereco::getNumero(){
    return numero;
}

string Endereco::getCidade(){
    return cidade;
}

string Endereco::getBairro(){
    return bairro;
}

void Endereco::setNumero(string n){
    numero = n;
}

void Endereco::setCidade(string c){
    cidade = c;
}

void Endereco::setBairro(string b){
    bairro = b;
}

void Endereco::setCep(string Cep){
    cep = Cep;
}

void Endereco::setLogradouro(string l){
    logradouro = l;
}

string Endereco::toString(){
    return "Numero:" + numero + ", Bairro: " + bairro + ", Cidade: " + cidade + ", CEP: " + cep + ", Logradouro: " + logradouro;
}
