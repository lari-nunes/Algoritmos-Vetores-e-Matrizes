//Dado um vetor de números inteiros, faça um algoritmo que deve retornar os elementos repetidos
#include <iostream>
using namespace std;
int main()
{
    
    int tamanho, x, i;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    
    int vetor[tamanho];
    
    for(x = 0; x < tamanho; x++){
        cout << "Digite um valor: ";
        cin >> vetor[x];
    }
    
    for(x = 0; x < tamanho; x++){
        for(i = x + 1; i < tamanho; i++){
            if(x != i){
                if(vetor[x] == vetor[i]){
                    cout << "Número " << vetor[x] << " repetidos";
                }
            }
        }
    }
    
    return 0;
    
}
