#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1. Dada  una estructura ePais cuyos campos son
 id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
 Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados
  del dia y que acumule estos a los que ya tiene el país. La función no devuelve nada.
*/
/*
2. Crear una función que se llame invertirCadena que reciba una cadena de caracteres
 como parámetro  y su responsabilidad es invertir los caracteres de la misma.
  Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
*/

#define TAM 10
typedef struct
{
    int id;
    char nombre[20];
    int  infectados;
    int recuperados;
    int  muertos;
}ePais;


void actualizarRecuperados (ePais vec[], int* recuperados );

char *invertirCadena(char cadena[]);

int main()
{
    char cadena[20]="UTN-FRA";
    ePais recuperados[TAM];

    actualizarRecuperados(recuperados,&recuperados);

    printf(invertirCadena(cadena));
    return 0;
}


void actualizarRecuperados (ePais vec[], int* recuperados ){
    int recu=0;
    if(vec != NULL && recuperados >0){
        recu = *recuperados + recu;
    }
}

char *invertirCadena(char cadena[]){

  int longitud = strlen(cadena);
  char temporal;
  for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
       izquierda++, derecha--) {
    temporal = cadena[izquierda];
    cadena[izquierda] = cadena[derecha];
    cadena[derecha] = temporal;
  }
  return cadena;
}


