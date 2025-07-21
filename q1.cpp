#include <iostream>
#include <vector>
using namespace std;
void selecao_recursiva(int i, int n, vector<int> &vetor) {
    if (i >= n - 1) return; //Caso base: já percorreu o vetor inteiro.
    int min = i;
    for(int j = i + 1; j < n; j++){
        if (vetor[j] < vetor[min]) min = j;
    }
    int x = vetor[i];
    vetor[i] = vetor[min];
    vetor[min] = x;
    selecao_recursiva(i + 1, n, vetor); //Chamada recursiva para o próximo índice.
}
int main(){
    vector<int> lista;
    int n;
    cout << "Quantos números para ordenação? ";
    cin >> n;
    lista.resize(n);
    for(int i = 0; i < n; i++){
        cin >> lista[i];
    }
    selecao_recursiva(0, lista.size(), lista);
    cout << "Ordem crescente:" << endl;
    for(int i = 0; i < lista.size(); i++){
        cout << lista[i] << endl;
    }
    return 0;
}