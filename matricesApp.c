#include <stdio.h>
#include <stdlib.h>
#include "funcionmatrices.h"
#include "ctime.h"

int main(int argc, char **argv) {
  int N;

  N = (int) atof(argv[1]);

  int matrizA[N][N];
  int matrizB[N][N];
  int matrizC[N][N];

  matrizInit(N, matrizA);
  matrizInit(N, matrizB);

  sampleStart();

  multiplicacionMatrices(N, matrizA, matrizB, matrizC);

  sampleStop();
  printTime();

  return 0;


}
