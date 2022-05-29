#ifndef APARELHO_H_INCLUDED
#define APARELHO_H_INCLUDED
using namespace std;

class Aparelho{
private:
public:
	string Nome, TipoBandeira;
	float Potencia, UsoDiario, Consumo, ValorConsumo, Tarifa;
	Aparelho(int t);
	void Imprimir();
};

//método construtor
Aparelho::Aparelho(int t){
	if (t == 1){
		Nome = "Carregador";
		TipoBandeira = "Verde";
		Tarifa = 0.500;
		Consumo = (Potencia * UsoDiario);
		ValorConsumo = Consumo * Tarifa;
	}
	else if (t == 2){
		TipoBandeira = "Amarela";
		Tarifa = 0.020;
		Consumo = (Potencia * UsoDiario);
		ValorConsumo = Consumo * Tarifa;
	}
	else {
		TipoBandeira = "Vermelha";
		Tarifa = 0.035;
		Consumo = (Potencia * UsoDiario);
		ValorConsumo = Consumo * Tarifa;
	}
}

//método para exibir os valores dos atributos da classe Aparelho
void Aparelho::Imprimir(){
	cout << "Bandeira:........: " << TipoBandeira << endl;
	cout << "Valor da tarifa:.: " << Tarifa << endl;
	//cout << "Nome:............: " << Nome << endl;
	cout << "Potencia.........: " << Potencia << endl;
	cout << "Uso diario.......: " << UsoDiario << endl;
	cout << "Consumo:.........: " << Consumo << endl;
	cout << "Valor Consumo....: " << ValorConsumo << endl;
	cout << "---------------------------------" << endl;
}

#endif 	// APARELHO_H_INCLUDED
