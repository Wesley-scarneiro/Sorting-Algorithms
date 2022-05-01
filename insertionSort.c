/*
    Desenvolvimento do algoritmo Insertion Sort.
    O Insertion Sort realiza sucessivos deslocamentos para determinar a posição final do elemento chave.
    O valor inicial da chave varia a cada laço, dentro do intervalo [A[1]; A[n-1]].
    Todos os elementos do intervalo [A[0]; A[i-1]] serão comparados com a chave.
    Se o elemento a ser comparado com a chave é maior, então ele ocupará a posição seguinte.
    Por fim, a chave ocupará a posição do último elemento deslocado.
    Complexidade: O(n²).
    Fonte: Algoritmos: Teoria e prática; Thomas Cormen; 3ª edição, ELSIVIER.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
    Insertion Sort.
    Ordena os elementos os deslocando até a sua posição final no arranjo.
    A posição final da chave será a posição inicial do último A[j] deslocado.
*/
void insertionSort(int *A, int n)
{
    int i, j, chave;

    for (i = 1; i < n; ++i)
    {
        chave = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > chave)
        {
            A[j+1] = A[j];
            --j;
        }
        A[j+1] = chave;
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
    insertionSort(A, 10);
    imprimir(A, 10);

    return 0;
}

/*
Desordenado:
42 3 17 23 1 57 43 0 81 33
Ordenado:
0 1 3 17 23 33 42 43 57 81
*/