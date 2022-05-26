#pragma once
#include "Vetor3.h" //aspas dupla pq a bibliotece pertence ao mesmo projeto

class Personagem
{
private:
    int energia;
    Vetor3 posicao;

public:
//setters - grava dado no atribulo Energia
    void setEnergia(int e)
    {
        energia = e;
    }
    void levarSoco(char f)
    {
        switch (f)
        {
        case 'r': energia = energia - 5; break;
        case 'm': energia = energia - 10; break;
        case 'f': energia = energia - 20; break;
        }
    }
    void pular()
    {

    }
//getters - ler valor do atributo Energia
    int getEnergia()
    {
        return energia;
    }

};