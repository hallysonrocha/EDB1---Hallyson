# EDB1 - Hallyson Rocha
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


Questão 5 -
Descreva e analise uma instância de pior caso para o algoritmo Selectionsort, ou seja, um vetor v[0..n-1] que leva o algoritmo a executar o maior número possível de comparações.

Resposta:
O número total de comparações na função selectionsort só depende do número total de elementos, e é o mesmo tanto para o pior caso, quanto para o melhor caso, ou seja, não importa a ordem dos elementos no vetor, o número de comparações vai ser a mesma, [(n - 1) * n] / 2, onde n é o número de elementos do vetor.
O que se altera é o número de trocas a serem realizadas, no pior dos casos será realizada n-1 trocas, quando o elemento i do vetor nunca estiver na posição correta.


Questão 6 -
Descreva e analise uma instância de melhor caso para o algoritmo Selectionsort, ou seja, um vetor v[0..n-1] que leva o algoritmo a executar o menor número possível de comparações.

Resposta:
Como a ordem dos elementos não importa para definir o número de comparações, então o número de comparações será o mesmo para qualquer vetor de tamanho n, [(n - 1) * n] / 2.
Já com relação ao número de trocas, temos que, no melhor dos casos, será necessário um total de zero trocas, quando o vetor já vier ordenado da maneira correta.


Questão 7 -
Quantas vezes, no pior caso, o algoritmo Selectionsort copia um elemento do vetor de um lugar para outro? Quantas vezes isso ocorre no melhor caso?

Resposta:
No pior dos casos, isso acontece n-1 vezes, onde n é o número de elementos do vetor. Isso ocorre quando o primeiro elemento não está na posição correta e após cada troca o primeiro elemento da parte ainda não ordenada da lista também não está na posição correta. Já no melhor caso, não haverá nenhuma troca, pois o vetor já virá ordenado da maneira correta.
