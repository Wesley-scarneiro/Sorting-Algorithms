/*
    Desenvolvimento do algoritmo Selection Sort.
    De forma geral, o Selection Sort busca o menor elemento e o coloca na primeira posição.
    Depois, busca o segundo menor elemento e o coloca na segunda posição e assim sucessivamente.
    Complexidade: O(n²) em qualquer caso.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
    O primeiro laço controla a inserção dos menores elementos e o segundo,
    realiza a busca do índice do menor elemento.
    A permutação ocorre no arranjo somente se o índice 'menor' for diferente do índice 'i'.
*/
void selectionSort(int *A, int t)
{
    int i, j, menor, temp;

    // Controla a insersão do menor elemento.
    for (i = 0; i < t; ++i)
    {
        menor = i;

        // Busca o índice do menor elemento
        for (j = i + 1; j < t; ++j)
        {
            if (A[j] < A[menor])
            {
                menor = j;
            }
        }

        // Posicionando o menor elemento encontrado
        if (menor != i)
        {
            temp = A[i];
            A[i] = A[menor];
            A[menor] = temp;
        }
    }
}

/*
    Função para imprimir os elementos de um arranjo.
*/
void imprimir(int* A, int t)
{
    int i;

    for (i = 0; i < t; ++i)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{   
    int A[10] = {42, 3, 17, 23, 1, 57, 43, 0, 81, 33};

    printf("Desordenado:\n");
    imprimir(A, 10);

    printf("Ordenado:\n");
    selectionSort(A, 10);
    imprimir(A, 10);

    return 0;
}

/*
Desordenado:
42 3 17 23 1 57 43 0 81 33
Ordenado:
0 1 3 17 23 33 42 43 57 81
*/