//Faça um programa que leia um número inteiro, esse número será o tamanho do vetor de inteiros a ser preenchido e
//apresentado logo em seguida
#include <iostream>
using namespace std;

int main()
{
    int tamanho = 1;
    int vetor[tamanho];
    
    cout << "Digite um tamanho do vetor: ";
    cin >> tamanho;
    
    
    for(x = 0; x < tamanho; x++){
        cout << "Digite números contidos no vetor: ";
        cin >> vetor[x];
    } 
        for(x = 0; x < tamanho; x++){
            cout << vetor[x] << ", ";
    }
    

    return 0;
}