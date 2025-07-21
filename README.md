# EDB1 - Hallyson
Questões teóricas da atividade de reposição da unidade 2 de EDB1.


Questão 2 -
Na função selectionsort, o que acontece se trocarmos for (i = 0 por for (i = 1? E o que acontece se trocarmos for (i = 0; i < n-1 por for (i = 0; i < n ?

Resposta:
Trocando "for (i = 0" por "for (i = 1" a função não vai ordenar o primeiro elemento do vetor, podendo o deixar em uma posição incorreta, causando uma falha na ordenação.
Já se trocarmos "for (i = 0; i < n-1" por "for (i = 0; i < n" não há nenhuma alteração aparente, o programa continua funcionando corretamente, mas ele vai percorrer o vetor uma vez a mais de forma desnecessária.


Questão 3 -
Na função selectionsort, troque a comparação v[j] < v[min] por v[j] <= v[min]. A nova função continua correta?

Resposta:
Sim, continua correta, porém ele pode acabar realizando trocas desnecessárias durante a execução da função, como a troca de posição de números iguais. Por exemplo, se 3 <= 3, o que é verdade, então a função vai trocar os dois 3 de posição, o que é completamente desnecessário.
