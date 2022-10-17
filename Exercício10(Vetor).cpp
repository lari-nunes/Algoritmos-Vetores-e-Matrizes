//Dado um vetor de números inteiros, faça um algoritmo que deve retornar o menor valor e sua posição no vetor
#include <iostream>
using namespace std;
int main()
{
    
    int tamanho, menor, posicao;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    
    int vet[tamanho];
    
    for(int x = 0; x < tamanho; x++){
        cout << "Valor colocado no " << x + 1 << "º posiçao do vetor: ";
        cin >> vet[x];
    }
    
    menor = vet[0];
    posicao = 0;
    
    for(int x = 0; x < tamanho; x++){
        if(vet[x] <= menor){
            menor = vet[x];
            posicao = x + 1;
        }
    }
    
    cout << "O menor valor no vetor é: " << menor << " na " << posicao << "º posição";
    
    return 0;
}