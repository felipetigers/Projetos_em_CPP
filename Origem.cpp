#include <iostream>
#include <string>
#define MAX 2
using namespace std;

class Aparelho
{
public:
	string nome;
	float potencia;
	float tempoAtivo;
	int qtde;
	float calcularConsumo();
};

float Aparelho::calcularConsumo() {
	return potencia * tempoAtivo * qtde;
}

int main()
{
	int i = 0, t = 30;			//o valor de "t" equivale a 30 dias de uso
	float soma = 0;				
	
	float vVerde = 0.500;		//valor da tarifa da bandeira verde
	float vAmarela = 0.020;		//valor da tarifa da bandeira amarela
	float vVermelha = 0.035;	//valor da tarifa da bandeira vermelha

	Aparelho aparelho[2];

	for (i = 0; i < MAX; i++)
	{
		cout << "Nome: ";
		cin >> aparelho[i].nome;
		cout << "Potencia: ";
		cin >> aparelho[i].potencia;
		cout << "Tempo de Uso: ";
		cin >> aparelho[i].tempoAtivo;
		cout << "Quantidade: ";
		cin >> aparelho[i].qtde;
		cout << endl;
	}
	cout << "------------------------------" << endl;
	cout << "RESUMO DE GASTOS" << endl;
	cout << "------------------------------" << endl;
	for (i = 0; i < MAX; i++)
	{
		cout << "Nome............: " << aparelho[i].nome << endl;
		cout << "Consumo diario..: " << aparelho[i].calcularConsumo() << " kW" << endl;
		cout << "Na bandeira verde, este aparelho gasta diariamente RS " << aparelho[i].calcularConsumo() * vVerde << " reais." << endl;
		cout << "Na bandeira amarela, este aparelho gasta diariamente " << aparelho[i].calcularConsumo() * vAmarela << " reais." << endl;
		cout << "Na bandeira vermelha, este aparelho gasta diariamente " << aparelho[i].calcularConsumo() * vVermelha  << " reais." << endl;
		soma = soma + aparelho[i].calcularConsumo();
		cout << endl;
	}

	cout << "RESULTADOS DIARIOS ----------------" << endl;
	cout << "A soma total de kW consumido eh " << soma << " Kw" << endl;
	cout << "O gasto total, na bandeira Verde, eh de " << soma * vVerde << " reais." << endl;
	cout << "O gasto total, na bandeira Amarela, eh de " << soma * vAmarela << " reais." << endl;
	cout << "O gasto total, na bandeira Vermelha, eh de " << soma * vVermelha << " reais." << endl;
	cout << endl;
	cout << "RESULTADOS MENSAIS ----------------" << endl;
	cout << "A soma total de kW consumido eh " << soma * t << " Kw" << endl;
	cout << "O gasto total, na bandeira Verde, eh de " << soma * vVerde * t << " reais." << endl;
	cout << "O gasto total, na bandeira Amarela, eh de " << soma * vAmarela * t << " reais." << endl;
	cout << "O gasto total, na bandeira Vermelha, eh de " << soma * vVermelha * t << " reais." << endl;

	system("pause");
	return 0;
}