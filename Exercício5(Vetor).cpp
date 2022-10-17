//Dado um vetor de números inteiros, faça um algoritmo que deve retornar o vetor em ordem inversa
#include <iostream>
using namespace std;
int main()
{
    
    int vetNumeros[5], vetInverso[5];
    int x = 0, i = 0, tamanho;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    
    for(x = 0; x < tamanho; x++){
        cout << "Digite um número: ";
        cin >> vetNumeros[x];
    }
    
    x = 0;
    
    for(i = tamanho - 1; i >= 0; i--){
        vetInverso[x] = vetNumeros[i];
        x++;
    }
    
    cout << "---------------------------" << endl;
    
    for(x = 0; x < tamanho; x++){
        cout << "O vetor inverso é: " << vetInverso[x] << endl;
    }
    
    
    return 0;
}