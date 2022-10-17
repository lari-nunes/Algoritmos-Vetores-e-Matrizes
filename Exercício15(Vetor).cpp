//Faça um algoritmo que receba um vetor e verifique se os elementos estão em ordem decrescente.
//Deve utilizar valores True ou False (Booleanos) e tratá-los para obter uma resposta descritiva
#include <iostream>
using namespace std;
int main()
{
    
    bool decrescente = true;
    
    cout <<"Digite o tamanho do vetor: ";
    int tamanho;
    cin >> tamanho;
    int vetor[tamanho];
     
    for(int x = 0; x < tamanho; x++){
        cout << "Digite um valor: ";
        cin >> vetor[x];
    }
    
    for(int x = 0; x < (tamanho - 1); x++){
        if(vetor[x + 1] > vetor[x]){
            decrescente = false;
        }
    }
    
    if(decrescente == true){
        cout << "A sequencia esta decrescente";
    }else{
        cout << "A sequencia nao esta decrescente";
    }
    return 0;
    
}
