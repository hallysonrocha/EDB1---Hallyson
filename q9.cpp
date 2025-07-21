#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
void selecao(int n, vector<int> &vetor){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(vetor[j] < vetor[min]) min = j;
        }
        int x = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = x;
    }
}
int main(){
    vector<int> lista;
    int n;
    cout << "Quantos números para ordenação? ";
    cin >> n;
    lista.resize(n);
    cout << "Digite os números:" << endl;
    for(int i = 0; i < n; i++){
        cin >> lista[i];
    }
    auto inicio = chrono::high_resolution_clock::now(); //Marca um tempo antes da execução da função.
    selecao(lista.size(), lista);
    auto fim = chrono::high_resolution_clock::now(); //Marca um tempo depois da execução da função.
    chrono::duration<double> duracao = fim - inicio; //Calcula o tempo de execução da função.
    cout << "Ordem crescente:" << endl;
    for(int i = 0; i < lista.size(); i++){
        cout << lista[i] << endl;
    }
    cout << "Tempo de execução: " << duracao.count() * 1000000 << " microssegundos." << endl;
    return 0;
}