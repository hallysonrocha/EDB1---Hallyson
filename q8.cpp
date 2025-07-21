#include <iostream>
#include <vector>
using namespace std;
void selecao(int n, vector<int> &vetor){
    for(int i = 0; i < n - 1; i++){
        int max = i;
        for(int j = i + 1; j < n; j++){ //Encontra o índice do maior valor.
            if(vetor[j] > vetor[max]) max = j;
        }
        //Troca o maior valor com a primeira posição não ordenada:
        int x = vetor[i];
        vetor[i] = vetor[max];
        vetor[max] = x;
    }
}
int main(){
    vector<int> lista;
    int n;
    cout << "Quantos números para ordenação decrescente? ";
    cin >> n;
    lista.resize(n);
    for(int i = 0; i < n; i++){
        cin >> lista[i];
    }
    selecao(lista.size(), lista);
    cout << "Ordem decrescente:" << endl;
    for(int i = 0; i < lista.size(); i++){
        cout << lista[i] << endl;
    }
    return 0;
}