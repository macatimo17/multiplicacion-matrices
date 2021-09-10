#include <stdio.h>
#include "funcionmatrices.h"

void matrizInit(int N,int matriz[N][N]) {
  int i,j;
  for(i = 0; i<N; i++)
    for(j=0; j<N; j++)
      matriz[i][j]= 2*(j-i);
}

void sumaMatrices(int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]) {
  int i;
  int j;
  for(i = 0; i<N; i++){
    for(j = 0; j<N; j++){
      matrizC[i][j]=matrizA[i][j] + matrizB[i][j];
    }
  }
}


void restaMatrices(int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]) {
  int i;
  int j;
  for(i = 0; i<N; i++){
    for(j = 0; j<N; j++){
      matrizC[i][j]=matrizA[i][j] - matrizB[i][j];
    }
  }
}


void multiplicacionMatrices(int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]) {
  int i;
  int j;
  int k;
  for(i = 0; i<N; i++){
    for(j = 0; j<N; j++){
      matrizC[i][j]=0;
      for(k =0; k<N; k++){
        matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
      }
    }
  }
}


void matrizTranspuesta(int N, int matrizA[N][N], int matrizC[N][N]) {
  int i;
  int j;
  for(i = 0; i<N; i++){
    for(j = 0; j<N; j++){
      matrizC[i][j] = matrizA[j][i];
    }
  }
}


void imprimirMatriz(int N, int matriz[N][N]) {
  int i;
  int j;
  for(i = 0; i<N; i++){
    for(j = 0; j<N; j++){
      printf("%d \t ", matriz[i][j]);
    }
    printf("\n");
  }
}

