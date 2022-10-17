//Dado um vetor de números inteiros, faça um algoritmo que deve retornar a soma dos elementos ímpares
#include <iostream>
using namespace std;
int main()
{
    
    int vetNumeros[5];
    int x, tamanho;
    
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    
    for(x = 0; x < tamanho; x++){
        cout << "Digite um número para o vetor: ";
        cin >> vetNumeros[x];
    }
    
    for(x = 0; x < tamanho; x++){
        if(vetNumeros[x] % 2 != 0){
            cout << "Vetores que são ímpares: " << vetNumeros[x] << endl;
        }
    }
    
    
    
    return 0;
}