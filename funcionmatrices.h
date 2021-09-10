#ifndef FUNCIONMATRICES_H_INCLUDED
#define FUNCIONMATRICES_H_INCLUDED

void matrizInit(int N, int matriz[N][N]);
void sumaMatrices(int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]);
void restaMatrices(int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]);
void multiplicacionMatrices(int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]);
void matrizTranspuesta(int N, int matrizA[N][N], int matrizC[N][N]);
void imprimirMatriz(int N,int matriz[N][N]);

#endif

