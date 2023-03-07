#include<stdio.h>
#include<stdlib.h>
#include"matriz.h"

void libera (Matriz* mat) {
    free(mat);
}

Matriz* cria (int m, int n) {
    Matriz *x = (Matriz*) malloc(1 * sizeof(Matriz));
    x -> coluna = m;
    x -> linha = n;
    x -> f = NULL;

    return  x;
}

float acessa (Matriz* mat, int i, int j) {
    int conta = i + j;
    printf("Valor: %.2f\n", *((mat->f) + conta));
}

int linhas (Matriz* mat) {
    printf("A matriz possui %dlinhas\n", mat -> linha);
}

void atribui (Matriz* mat, int i, int j, float x) {
    int conta = (mat -> linha) * (mat -> coluna);
    
    mat -> f = (float*) malloc(conta * sizeof(float));

    *((mat -> f) + i + j) = x;
}

int colunas (Matriz* mat) {
    printf("A matriz possui %dcolunas\n", mat -> coluna);
}