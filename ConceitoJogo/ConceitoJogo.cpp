#include <iostream>
#include "Personagem.h"
//arquivo que contém o arquivo MAIN

int main()
{
    //cria-se um personagem p
    Personagem p1, p2;
    
    //atribui o valor 100 ao atributo Energia, da classe Personagem
    p1.setEnergia(100);
    p2.setEnergia(80);

    //mostra o valor setado no atribulo Energia
    std::cout << "Personagem 1:\n";
    std::cout << "Energia: " << p1.getEnergia() << "\n";
    std::cout << "\n\n";
    
    //mostra o valor setado no atribulo Energia, sofrendo manipulacao 
    std::cout << "Personagem 2:\n";
    std::cout << "Energia: " << p2.getEnergia() << "\n";
    p2.levarSoco('r');
    std::cout << "Levou um soco fraco\n";
    std::cout << "Energia: " << p2.getEnergia() << "\n";
    p2.levarSoco('m');
    std::cout << "Levou um soco medio\n";
    std::cout << "Energia: " << p2.getEnergia() << "\n";
    p2.levarSoco('f');
    std::cout << "Levou um soco forte\n";
    std::cout << "Energia: " << p2.getEnergia() << "\n";
    
};