#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H

#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Flat.h"
#include "Estudio.h"

using namespace std;

class SistemaImobiliaria
{
    Imovel *imovel[10];
    int cont;

public:
    SistemaImobiliaria();

    void setNaoExiste();
    void CadastraImoveis(Imovel *imovelsao);
    void getDescricaoImoveis();
    void getImoveisPorTipo(int tipo);
    void getImoveisParaAlugarPorBairro(string);
    void getImoveisParaVenderPorBairro(string);
    void getImoveisPorCidade(string);
    int getCont();
};

#endif // SISTEMA_IMOBILIARIA
