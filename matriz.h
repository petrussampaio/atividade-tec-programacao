typedef struct matriz {
    int linha;
    int coluna;
    float *f;

}Matriz;

Matriz* cria (int m, int n);
void libera (Matriz* mat);
float acessa (Matriz* mat, int i, int j);
void atribui (Matriz* mat, int i, int j, float v);
int linhas (Matriz* mat);
int colunas (Matriz* mat);

