#include <iostream>
using namespace std;
#define MAX 2

int main()
{
    int estante[MAX][MAX];
    string produtos[6] = {"vazio", "xampu", "condicionador","hidratante", "tintura", "demaquilante"};
    int contador[6] = {0, 0, 0, 0, 0, 0};
    int i, j;

    //LER - comando de repetição para ler as linhas
    for (i=0; i < MAX; i++)
    {
        //comando de repetição para percorrer as colunas
        for (j=0; j < MAX; j++)
        {
            cout << "Informe o codigo do produto: ";
            cin >> estante[i][j];
        }
    }
    //CONTAR
    for (i=0; i < MAX; i++)
        for (j=0; j < MAX; j++)
            contador[estante[i][j]]++;

    //MOSTRAR
    for (i=0; i < 6; i++)
    {
        cout << "\nProduto: " << produtos[i];
        cout << "\nQuantidade: " << contador[i];
        cout << "\n";
    }
}