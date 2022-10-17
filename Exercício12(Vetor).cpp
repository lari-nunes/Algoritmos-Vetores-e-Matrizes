//Dado um vetor de números inteiros, faça um algoritmo que deve retornar os elementos não repetidos
#include <iostream>
using namespace std;

int main()
{
    int tam;
    bool repetiu = true;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
    
    int vetor[tam];
    
    for(int x = 0; x < tam; x++){
        cout<<"Digite o valor do vetor: ";
        cin>>vetor[x];
    }
    
    for(int x = 0; x < tam; x++){
        for(int i = 0; i < tam; i++){
            if(x != i){
                if(vetor[x] == vetor[i]){
                    repetiu= true;
                }
            }
        }
        
        if(repetiu == false ){
            cout << "O valor " << vetor[x] << " não foi repetido" << endl;
        }else{
            repetiu=false;
        }
    }
    

    return 0;
}