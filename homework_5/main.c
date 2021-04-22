#include <stdio.h>   
#include <stdlib.h>  
#include <unistd.h>  
#include "header_file.h"

#define ERROR_MINA_ENCONTRADA 1
#define ERROR_ESPACIO_YA_DESCUBIERTO 2
#define NINGUNO 3


#define COLUMNS 10              //definimos la cantidad de columnas para el tablero
#define ROWS 10                 //definimos la cantidad de filas para el tablero
#define ESPACIO_SIN_DESCUBRIR '.'
#define ESPACIO_DESCUBIERTO ' '
#define MINA '*'
#define CANTIDAD_MINAS 5

int main() {
    printf("---MINESWEEPER---\n");
    printf("there are %d mines\n",CANTIDAD_MINAS);
  char tablero[ROWS][COLUMNS];
  int deberiaMostrarMinas = 0;
  srand(getpid());
  iniciarTablero(tablero);
  colocarMinasAleatoriamente(tablero);
  while (1) {
    imprimirTablero(tablero, deberiaMostrarMinas);
    if (deberiaMostrarMinas) {
      break;
    }
    char columna;
    int fila;
    printf("Enter row and column number: ");
    scanf(" %c", &columna);
    scanf("%d", &fila);
            printf("\n");
    int status = abrirCasilla(columna, fila, tablero);
    if (noHayCasillasSinAbrir(tablero)) {
      printf("You've won\n");
      deberiaMostrarMinas = 1;
    } else if (status == ERROR_ESPACIO_YA_DESCUBIERTO) {
      printf("You have already opened this box\n");
    } else if (status == ERROR_MINA_ENCONTRADA) {
      printf("You've lost\n");
      printf("Try again\n");
      deberiaMostrarMinas = 1;
    }
  }
  return 0;
}
