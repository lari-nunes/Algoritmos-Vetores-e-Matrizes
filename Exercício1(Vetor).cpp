//Faça um programa que lê 10 números de ponto flutuante para um vetor 
//e, em seguida, exiba todos os elementos na tela.
#include <iostream>
using namespace std;
int main()
{
    
    int x, tam = 10;
    int vetor[tam];
    
    for(x = 0; x < tam; x++){
        cout << "Digite um valor: ";
        cin >> vetor[x];
    }
       for(int x = 0; x < tam; x++){
        cout << "Você digitou o número: " << vetor[x] << endl;
    }
    
    return 0;
}