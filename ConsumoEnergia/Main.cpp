#include <iostream>
#include "Aparelho.h"
using namespace std;

int main(){
	
	int tipoBandeira;
	cout << "Digite o tipo de bandeira: [1] verde, [2] amarela e [3] vermelha: ";
	cin >> tipoBandeira;
	Aparelho *ap1 = new Aparelho(tipoBandeira);
	ap1->Nome = "Carregador";
	ap1->Imprimir();
	
	Aparelho *ap2 = new Aparelho(1);
	ap2->Nome = "Notebook";
	ap2->Imprimir();
	
	Aparelho *ap3 = new Aparelho(1);
	ap3->Nome = "Chuveiro Eletrico";
	ap3->Imprimir();
	
	return 0;
}
