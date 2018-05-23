#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "Casa.h"
#include "Terreno.h"
#include "Apartamento.h"
#include "Endereco.h"
#include "SistemaImobiliaria.h"

using namespace std;

void Cadastro();

SistemaImobiliaria *sys;


void Cadastro()
{
    int tiposo;
    cout << "Qual o tipo de imovel que deseja cadastrar? Digite 1 para casa, 2 para apartamento, 3 para terreno, 4 para"
    " flat e 5 para estudio: ";
    cin >> tiposo;
    if (tiposo < 1 || tiposo > 5)
    {
        "Erro! Numero errado!";
    }
    if (tiposo == 1)
    {
        int nump, qntq;
        double areat, areac;
        //scanf("[^\n]");
        cout << "Quantos pavimentos a casa possui?";
        //scanf("[^\n]");
        cin >> nump;
        scanf("[^\n]");
        cout << "Quantos quartos a casa possui?";
        //scanf("[^\n]");
        cin >> qntq;
        scanf("[^\n]");
        cout << "Qual a area do terreno?";
        //scanf("[^\n]");
        cin >> areat;
        scanf("[^\n]");
        cout << "Qual a area da casa?";
        //scanf("[^\n]");
        cin >> areac;
        //scanf("[^\n]");
        Casa *casosa = new Casa(nump, qntq, areat, areac);
        casosa->setTipoDeImovel(1);
        sys->CadastraImoveis(casosa);
    }
    else if (tiposo == 2)
    {
        string pos;
        long double vc;
        int nv, an;

        cout << "Qual a posicao do imovel?: ";
        cin >> pos;
        //scanf("[^\n]");
        cout << "Qual o valor do condominio?: ";
        cin >> vc;
        cout << "Qual o numero de vagas?: ";
        cin >> nv;
        cout << "Qual o andar do apartamento?: ";
        cin >> an;
        Apartamento *apartamentoso = new Apartamento(pos, vc, nv, an);
        apartamentoso->setTipoDeImovel(2);
        sys->CadastraImoveis(apartamentoso);
    }
    else if (tiposo == 3)
    {
        double a;
        cout << "Qual a area do terreno?: ";
        cin >> a;
        Terreno *terrenoso = new Terreno(a);
        terrenoso->setTipoDeImovel(3);
        sys->CadastraImoveis(terrenoso);
    }
    else if (tiposo == 4)
    {
        string ar, inte, tv, lav, limp, recep;
        double g;
        cout << "Possui arcondicionado?: ";
        cin >> ar;
        scanf("[^\n]");
        cout << "Possui internet?: ";
        cin >> inte;
        scanf("[^\n]");
        cout << "Possui tv a cabo?: ";
        cin >> tv;
        scanf("[^\n]");
        cout << "Possui lavanderia?: ";
        cin >> lav;
        scanf("[^\n]");
        cout << "Possui limpeza 24hrs?: ";
        cin >> limp;
        scanf("[^\n]");
        cout << "Possui recepcao 24hrs?: ";
        cin >> recep;
        scanf("[^\n]");
        cout << "Qual o valor do condominio?: ";
        cin >> g;
        scanf("[^\n]");
        Flat *flatoso = new Flat(ar, inte, tv, lav, limp, recep, g);
        flatoso->setTipoDeImovel(4);
        sys->CadastraImoveis(flatoso);
    }
    else if (tiposo == 5)
    {
        string ar, inte, tv, lav, limp, recep, pisc, sau, gin;
        double v;
        cout << "Possui arcondicionado?: ";
        cin >> ar;
        scanf("[^\n]");
        cout << "Possui internet?: ";
        cin >> inte;
        scanf("[^\n]");
        cout << "Possui tv a cabo?: ";
        cin >> tv;
        scanf("[^\n]");
        cout << "Possui lavanderia?: ";
        cin >> lav;
        scanf("[^\n]");
        cout << "Possui limpeza 24hrs?: ";
        cin >> limp;
        cout << "Possui recepcao 24hrs?: ";
        cin >> recep;
        scanf("[^\n]");
        cout << "Possui piscina?: ";
        cin >> pisc;
        scanf("[^\n]");
        cout << "Possui sauna?: ";
        cin >> sau;
        scanf("[^\n]");
        cout << "Possui ginastica?: ";
        cin >> gin;
        scanf("[^\n]");
        cout << "Qual o valor do condominio?: ";
        cin >> v;
        scanf("[^\n]");

        Estudio *estudioso = new Estudio(ar, inte, tv, lav, limp, recep, pisc, sau, gin, v);
        estudioso->setTipoDeImovel(5);
        sys->CadastraImoveis(estudioso);
    }
}

/*void getImoveisPorTipo()
{
    int tipico;
    cout << "Que tipo de imovel deseja pesquisar? Digite 1 para casa, 2 para apartamento, 3 para terreno, 4 para flat ou 5 para estudio.\n";
    for (int i = 0; i < sys->getCont(); i++)
    {
        if (sys->imovel[i]->getTipoDeImovel() == tipico)
        {
            sys->imovel[i]->getDescricao();
        }
    }
}*/

void menu(){
    char x;
    x='0';

    do{
        system("clear || cls");
        int opcao=0;
        cout << "---------------------------------------------\n"
             << "-----------IMOBILIARIA ALUCARD---------------\n"
             << "----------------------------------------------\n\n"
             << "----------------------------------------------\n"
             << "|              ESCOLHA UMA OPCAO              |\n"
             << "----------------------------------------------\n"
             << "1. CADASTRAR.\n"
             << "2. CONSULTAR TODOS OS IMOVEIS DISPONIVEIS POR TIPO.\n"
             << "3. CONSULTAR DESCRICAO DOS IMOVEIS.\n"
             << "4. IMOVEIS DISPONIVEIS PARA VENDA POR BAIRRO.\n"
             << "5. IMOVEIS DISPONIVEIS PARA ALUGAR POR BAIRRO.\n"
             << "6. CONSULTAR IMOVEIS POR CIDADE.\n";

             cin >> opcao;

            if(opcao==1){

                Cadastro();
                cout <<"Aperte enter para continuar :\n";
                scanf("%c", &x);
                scanf("[^\n]");
                if(x == '\n'){
                    continue;
                }

            }
            else if(opcao==2){
                int tipico;
                cout << "Que tipo de imovel deseja consultar? Digite 1 para casa, 2 para apartamento"
                ", 3 para terreno, 4 para flat e 5 para estudio." << endl;
                cin >> tipico;
                sys->getImoveisPorTipo(tipico);
                scanf("%c", &x);
                scanf("[^\n]");
                if(x == '\n'){
                    continue;
                }
            }
            else if(opcao==3){
                sys->getDescricaoImoveis();
                scanf("%c", &x);
                scanf("[^\n]");
                if(x == '\n'){
                    continue;
                }
            }
            else if(opcao==4){
                string bairroco;
                cout << "Digite o bairro em que deseja pesquisar: ";
                cin >> bairroco;
                sys->getImoveisParaVenderPorBairro(bairroco);
                scanf("%c", &x);
                scanf("[^\n]");
                if(x == '\n'){
                    continue;
                }
            }
            else if(opcao==5){
                    string bairrito;
                    cout << "Digite o bairro em que deseja pesquisar: ";
                    cin >> bairrito;
                    sys->getImoveisParaAlugarPorBairro(bairrito);
                    scanf("%c", &x);
                    scanf("[^\n]");
                    if(x == '\n'){
                    continue;
                    }

            }
            else if(opcao == 6)
                {
                    string cidadastica;
                    cout << "Digite a cidade em que deseja pesquisar: ";
                    cin >> cidadastica;

                    sys->getImoveisPorCidade(cidadastica);
                    scanf("%c", &x);
                    scanf("[^\n]");
                    if(x == '\n'){
                    continue;
                }


                break;
            }

        }while(1);

}


int main() {

    sys = new SistemaImobiliaria();
    menu();

    return 0;
}
