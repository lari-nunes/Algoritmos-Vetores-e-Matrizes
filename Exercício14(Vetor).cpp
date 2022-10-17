//Dado dois vetores distintos de tamanhos aleatórios,retorne um terceiro vetor com os elementos
//que estão contidos em ambos os vetores, ou seja, faça a intersecção dos vetores (DESAFIO)
#include <iostream>
using namespace std;
int main() {
    const int tamVetorA = 5;
    const int tamVetorB = 4;
    int cont = 0;
    int vetorA[tamVetorA], vetorB[tamVetorB],vetorC[tamVetorB];
    
    for(int i = 0; i < tamVetorA; i++){
        cout << "Informe o valor do vetor A: ";
        cin >> vetorA[i]; 
    }
    for(int i = 0; i < tamVetorB; i++){
        cout << "Informe o valor do vetor B: ";
        cin >> vetorB[i];
    }
    
    for(int i=0;i<tamVetorB;i++){
        vetorC[i]=0;
    }
    
    for(int i=0;i<tamVetorA;i++){
        for(int j=0;j<tamVetorB;j++){
            if(vetorA[i] == vetorB[j]){
                vetorC[j]= vetorB[j];
            }
        }
    }
    
    for(int i=0;i<tamVetorB;i++){
        if(vetorC[i] != 0){
            cout<<vetorC[i]<<",";
        }
    }
}