//Faça um programa que leia um número inteiro, esse número será o tamanho do vetor de Strings a ser preenchido 
//e apresentado logo em seguida
#include <iostream>
using namespace std;

int main()
{
    int tamanho, x;
    string vetorNome[tamanho];
    
    cout << "Digite o tamanho do vetor de string: ";
    cin >> tamanho;
    
    for(x= 0; x < tamanho; x++){
        cout << "Digite o " << x << " nome: ";
        cin >> vetorNome[x];
    }
    
    for(x = 0; x < tamanho; x++){
        cout << vetorNome[x] << ", ";
    }

    return 0;
    
}