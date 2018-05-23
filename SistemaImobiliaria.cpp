#include "SistemaImobiliaria.h"
#include "Imovel.h"
#include <string.h>
#include <string>
#include <iostream>
#include <stdio.h>

void menu();

using namespace std;

SistemaImobiliaria::SistemaImobiliaria()
{
    cont = 0;
}

void SistemaImobiliaria::CadastraImoveis(Imovel *imovelsao)
{
        imovel[cont] = imovelsao;
        cont++;
        string log, num, bairro, cid, cep;
        int aov;

        getchar();
        cout << "Qual o logradouro do imovel?: ";
        getline(cin, log);
        cout << "Qual o numero do imovel?: ";
        getline(cin, num);
        cout << "Qual o bairro do imovel?: ";
        getline(cin, bairro);
        cout << "Qual a cidade em que imovel se encontra?: ";
        getline(cin, cid);
        cout << "Qual o CEP do imovel?: ";
        getline(cin, cep);
        imovelsao->setEndereco(num, bairro, cid, cep, log);
        scanf("[^\n]");
        getchar();
        cout << "O imovel esta para vender ou alugar? Se estiver a venda, digite 0, se estiver para alugar, digite 1:";
        cin >> aov;
        scanf("[^\n]");
        imovelsao->setAlugarOuVender(aov);
        scanf("[^\n]");

        menu();
}


void SistemaImobiliaria::getDescricaoImoveis()
{
    for (int i = 0; i < cont; i++)
    {
            cout << imovel[i]->getDescricao() << endl;
    }
}

void SistemaImobiliaria::getImoveisPorTipo(int tipo)
{
    for (int i = 0; i < cont; i++)
    {
        if (imovel[i]->getTipoDeImovel() == tipo)
        {
            cout << imovel[i]->getDescricao() << endl;
        }
    }
}

void SistemaImobiliaria::getImoveisParaAlugarPorBairro(string bairrinho)
{

        for (int i = 0; i < cont; i++)
        {
          if((imovel[i]->getAlugarOuVender() == 1) && (imovel[i]->getEndereco().getBairro() == bairrinho))
          {
            cout << imovel[i]->getDescricao() << endl;
            if (imovel[i]->getTipoDeImovel() == 1)
            {
                cout << "Tipo de Imovel: casa" << endl << endl;
            }

            else if (imovel[i]->getTipoDeImovel() == 2)
            {
                cout << "Tipo de Imovel: apartamento" << endl << endl;
            }

            else if (imovel[i]->getTipoDeImovel() == 3)
            {
                cout << "Tipo de Imovel: terreno" << endl << endl;
            }
            else if (imovel[i]->getTipoDeImovel() == 4)
            {
                cout << "Tipo de Imovel: flat" << endl << endl;
            }
            else if (imovel[i]->getTipoDeImovel() == 5)
            {
                cout << "Tipo de Imovel: estudio" << endl << endl;
            }
          }
    }
}
void SistemaImobiliaria::getImoveisParaVenderPorBairro(string bairrinho)
{

        for (int i = 0; i < cont; i++)
        {
          if((imovel[i]->getAlugarOuVender() == 0) && (imovel[i]->getEndereco().getBairro() == bairrinho))
          {
            cout << "Imoveis para vender presentes nesta cidade: " << endl;
            cout << imovel[i]->getDescricao() << endl;
            if (imovel[i]->getTipoDeImovel() == 1)
            {
                cout << "Tipo de Imovel: casa" << endl << endl;
            }

            else if (imovel[i]->getTipoDeImovel() == 2)
            {
                cout << "Tipo de Imovel: apartamento" << endl << endl;
            }

            else if (imovel[i]->getTipoDeImovel() == 3)
            {
                cout << "Tipo de Imovel: terreno" << endl << endl;
            }
            else if (imovel[i]->getTipoDeImovel() == 4)
            {
                cout << "Tipo de Imovel: flat" << endl << endl;
            }
            else if (imovel[i]->getTipoDeImovel() == 5)
            {
                cout << "Tipo de Imovel: studio" << endl << endl;
            }
          }
    }
}

void SistemaImobiliaria::getImoveisPorCidade(string cidadosa)
{
    for (int i = 0; i < cont; i++)
    {
        if ((imovel[i]->getEndereco().getCidade() == cidadosa))
        {
            cout << "Casas nesta cidade: " << endl;
            cout << "Descricao: " << imovel[i]->getDescricao() << endl;
            if (imovel[i]->getTipoDeImovel() == 1)
            {
                cout << "Tipo de Imovel: casa" << endl << endl;
            }

            else if (imovel[i]->getTipoDeImovel() == 2)
            {
                cout << "Tipo de Imovel: apartamento" << endl << endl;
            }

            else if (imovel[i]->getTipoDeImovel() == 3)
            {
                cout << "Tipo de Imovel: terreno" << endl << endl;
            }
            else if (imovel[i]->getTipoDeImovel() == 4)
            {
                cout << "Tipo de Imovel: flat" << endl << endl;
            }
            else if (imovel[i]->getTipoDeImovel() == 5)
            {
                cout << "Tipo de Imovel: estudio" << endl << endl;
            }
        }
    }
}

int SistemaImobiliaria::getCont()
{
    return cont;
}



