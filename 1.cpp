#include <iostream>

using namespace std;

bool procurar(int vetor[], int procurado, int tamanho)
{   
    bool deu;
    for(int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == procurado)
        {
            return true;
        } 
    }
    return false;
    
}

int main()
{   
    int tamanho, num;
    bool encontrado;
    cin >> tamanho;
    int vetor [tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }
    cin >> num;

    encontrado = procurar(vetor, num, tamanho);

    if(encontrado)
    {
        cout << "1";
    } else
    {
        cout << "0";
    }

}