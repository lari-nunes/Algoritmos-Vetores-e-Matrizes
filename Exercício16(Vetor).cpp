//Dado uma lista com nome de sete alunos e outra lista com a média final desses alunos. Calcule e mostre:
//a) o nome do aluno com a maior média (desconsiderar empates).
//b) o nome do aluno com a menor média.
//c) uma lista com o nome dos alunos aprovados.
#include <iostream>
using namespace std;
int main() {
    
    int quantidade = 7;
    string nomes[quantidade];
    double notas[quantidade]; 
    
    for(int x = 0; x < quantidade; x++){
        cout << "Nome do " << x + 1 << "º aluno: ";
        cin >> nomes[x];
        cout << "Media do aluno: ";
        cin >> notas[x];
    }
    
    int maior = 0;
    string alunoMaior;
    for(int z = 0; z < quantidade; z++){
        if(notas[z] > maior){
            alunoMaior = nomes[z];
            maior = notas[z];
        }
    }
    
    int menor = maior;
    string alunoMenor;
    for(int a = 0; a < quantidade; a++){
        if(notas[a] < menor){
            alunoMenor = nomes[a];
            menor = notas[a];
        }
    }
    
    cout << "--------------------------" << endl;
    
    cout << "A- O aluno com a maior media: " << alunoMaior << endl;
    cout << "B- O aluno com a menor media: " << alunoMenor << endl;
    cout << "C- Alunos aprovados: " << endl;
    
    for(int b = 0; b < quantidade; b++){
        if(notas[b]>= 7){
            cout << nomes[b] << " = " << notas[b] << endl;
        }
    }
    
    return 0;
}
    
    

