//Dado um vetor de números inteiros, faça um algoritmo que deve exibir a frequência de cada elemento (DESAFIO)
#include <iostream>
using namespace std;

int main()
{
    
    int tamanho, y;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    
    int vet[tamanho];
    for(int x = 0; x < tamanho; x++){
        cout << "Digite o " << x + 1<< "º valor: ";
        cin >> vet[x];
    }
    
    cout << "----------------------" << endl;
    
    int repeticao = 0;
    cout << "A frequencia de cada numero foi de: " << endl;
    for(int y = 0; y < 100; y++){
        for(int z = 0; z < tamanho; z++){
            if(y == vet[z]){
                repeticao++;
                if(repeticao > 0){
                     cout << y << " se repete " << repeticao << " vez" << endl;
                    repeticao = 0;
                }       
            }
        }
    }
    
    
    return 0;
}