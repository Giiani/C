#include "math.h"
#include <stdio.h>
// INCLUDEs

#define JUNTAS 3
#define M JUNTAS+1
#define RADIO_1 3
#define RADIO_2 2
#define RADIO_3 1

// DEFINEs

void calcular_matriz_homogenea(double matriz[M][M], int n);
void imprimir_matriz(double matriz[M][M]);

// Prototipos

double matriz_H[M][M] = {0};
int angulos[JUNTAS] = {0};
const double alphas[JUNTAS] = {90, 0, 0};
const double r[JUNTAS] = {0, RADIO_2, RADIO_3};
const double d[JUNTAS] = {RADIO_1, 0, 0};
// Almacena el angulo de rotacion actual de cada servo

void calcular_matriz_homogenea(double matriz[M][M], int n) {
  /*
  Setea los valores de los elementos de la matriz homogenea.
  Se podria mejorar creando un arreglo de cos y sin de alphas[n],
  y eligiendo el valor de esos arreglos en lugar de calcularlos
  en cada iteración, pero eso ensuciaria un poco el codigo, por
  lo cual se decidio dejarlo asi.
  */
  matriz[0][0] = cos(angulos[n-1]);
  matriz[0][1] = -sin(angulos[n-1]) * cos(alphas[n-1]);
  matriz[0][2] = sin(angulos[n-1]) * sin(alphas[n-1]);
  matriz[0][3] = r[n-1] * cos(angulos[n-1]);

  matriz[1][0] = sin(angulos[n-1]);
  matriz[1][1] = cos(angulos[n-1]) * cos(alphas[n-1]);
  matriz[1][2] = -cos(angulos[n-1]) * sin(alphas[n-1]);
  matriz[1][3] = r[n-1] * sin(angulos[n-1]);

  matriz[2][0] = 0;
  matriz[2][1] = sin(alphas[n-1]);
  matriz[2][2] = cos(alphas[n-1]);
  matriz[2][3] = d[n-1];

  matriz[3][0] = 0;
  matriz[3][1] = 0;
  matriz[3][2] = 0;
  matriz[3][3] = 1;
}

void imprimir_matriz(double matriz[M][M]) {
  int i, j;
  for(i = 0; i < M; i++) {
    for(j = 0; j < M; j++) {
      printf("%lf",matriz[i][j]);
      printf("\t");
    }
    printf("\n");
  }
}



int main (void){
  
    int n=3;

    if (n > 0 && n <= 3) {
      calcular_matriz_homogenea(matriz_H, n);
      printf("Matriz Homogenea n=%d: \n",n);
      imprimir_matriz(matriz_H);
    }
  return 0;
}