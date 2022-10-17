//Faça um programa que lê valores inteiros positivos até que preencha um vetor de 5 posições, entretanto,
//antes de armazenar o valor, deve verificar se ele é maior que 0, caso seja menos, perguntar novamente
#include <iostream>
using namespace std;

int main()
{
    int x, valor = 5;
    int vetor[valor];
    
    for(x = 0; x < valor; x++){
        cout << "Digite um valor: ";
        cin >> vetor[x];
        while(vetor[x] < 0){
            cout << "Digite um valor maior que 0: ";
            cin >> vetor[x];
        }
    }
    
    for(x = 0; x < valor; x++){
        cout << "Os números digitados maiores que 0, foram: " << vetor[x] << endl;
    }
    

    return 0;
}