#include<stdio.h>
#include<stdlib.h>
#include"matriz.h"

main()
{
    Matriz *M;

    M = cria(3, 3);

    atribui(M, 2, 2, 3.6);

    acessa(M, 2, 2);

    linhas(M);

    colunas(M);

    libera(M);
    
    return 0;

}