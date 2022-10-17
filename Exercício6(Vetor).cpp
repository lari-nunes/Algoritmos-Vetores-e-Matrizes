//Dado um vetor de números inteiros, faça um algoritmo que deve retornar somente os pares
#include <iostream>
using namespace std;
int main()
{
    
    int vetNumeros[5];
    int x, tamanho;
    
    cout << "Digite um tamanho para o vetor: ";
    cin >> tamanho;
    
    for(x = 0; x < tamanho; x++){
        cout << "Digite um número para o vetor: ";
        cin >> vetNumeros[x];
    }
    
    for(x = 0; x < tamanho; x++){
        if(vetNumeros[x] % 2 == 0){
            cout << "Vetores que são pares: " << vetNumeros[x] << endl;
        }
    }
    
    
    
    return 0;
}