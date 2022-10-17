/******************************************************************************
Fornecida uma matriz 3x3 preenchida com “X” e “O”, verifique se um mesmo símbolo 
constitui uma sequência de três em alguma linha, coluna ou diagonal.
X O X
O X O
O X X
*******************************************************************************/
#include <iostream>

using namespace std;

int main ()
{

    string matriz[3][3] = {{"X","O","X"}, {"O","X","O"},{"O","X","X"}};
    cout << matriz[0][0]<<matriz[0][1]<<matriz[0][2]<<endl;
    cout << matriz[1][0]<<matriz[1][1]<<matriz[1][2]<<endl;
    cout << matriz[2][0]<<matriz[2][1]<<matriz[2][2]<<endl;

  return 0;
}
