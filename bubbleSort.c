/*
    Desenvolvimento do algoritmo Bubble Sort.
    O algoritmo busca o maior elemento e o insere na última posição. Em seguida,
    busca o segundo maior elemento e o insere na penúltima posição e assim sucessivamente.
    Complexidade: O(n²)
*/

#include <stdio.h>

/*
    Algoritmo Bubble Sort.
    O primeiro laço controla as inserções dos maiores elementos. 
    O segundo laço busca o maior elemento do arranjo.
    Uma permutação ocorre, somente se o índice 'maior' != 'i'.
*/
void bubbleSort(int* A, int t)
{
    int i, j, maior, temp;

    // Controlando as inserções dos maiores elementos
    for (i = t - 1; i > 0; --i)
    {
        maior = i;

        // Buscando o maior elemento
        for (j = 0; j < i; ++j)
        {
            if (A[j] > A[maior])
            {
                maior = j;
            }
        }

        // Posicionando o maior elemento encontrado
        if (maior != i)
        {
            temp = A[i];
            A[i] = A[maior];
            A[maior] = temp;
        }
    }
}


/*
    Versão recursiva do Bubble Sort.
*/
void bubbleSortRecursivo(int* A, int t)
{
    if (t > 1)
    {
        int i, temp;

        for (i = 0; i < t - 1; ++i)
        {
            if (A[i] > A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
            bubbleSortRecursivo(A, t-1);
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
    int B[10] = {42, 3, 17, 23, 1, 57, 43, 0, 81, 33};

    printf("Bubble Sort (iterativo):\n");
    printf("Desordenado:\n");
    imprimir(A, 10);

    printf("Ordenado:\n");
    bubbleSort(A, 10);
    imprimir(A, 10);

    printf("\nBubble Sort (recursivo):\n");
    printf("Desordenado:\n");
    imprimir(B, 10);

    printf("Ordenado:\n");
    bubbleSortRecursivo(B, 10);
    imprimir(B, 10);

    return 0;
}

/*
Desordenado:
42 3 17 23 1 57 43 0 81 33 
Ordenado:
0 1 3 17 23 33 42 43 57 81
*/