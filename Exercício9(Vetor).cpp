//Dado um vetor de números inteiros, faça um algoritmo que deve retornar o maior valor e sua posição no vetor
#include <iostream>
using namespace std;
int main()
{
    
    int tamanho, maior, posicao;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    
    int vet[tamanho];
    
    for(int x = 0; x < tamanho; x++){
        cout << "Valor colocado no " << x + 1 << "º posiçao do vetor: ";
        cin >> vet[x];
    }
    
    maior = vet[0];
    posicao = 0;
    
    for(int x = 0; x < tamanho; x++){
        if(vet[x] >= maior){
            maior = vet[x];
            posicao = x + 1;
        }
    }
    
    cout << "O maior valor no vetor é: " << maior << " na " << posicao << "º posição";
    
    return 0;
}