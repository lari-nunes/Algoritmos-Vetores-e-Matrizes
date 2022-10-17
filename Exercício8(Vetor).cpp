//Dado um vetor de números inteiros, faça um algoritmo que deve calcular e retornar a média dos elementos
#include <iostream>
using namespace std;
int main()
{
    
    int tam = 1;
    int vetor[tam];
    float media = 0, total = 0;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
    
    for(int x = 0; x < tam; x++){
        cout << "Digite o " << x + 1 << "º numero: ";
        cin >> vetor[x];
    }
    
    for(int x = 0; x < tam; x++){
        total += vetor[x];
        //cout << endl;
    }
    
    cout << "\n-------------------" << endl;
    media = total / tam;
    cout << "Total: " << total << endl;
    cout << "Média dos elementos: " << media;
    
    return 0;
}