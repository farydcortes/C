#include <stdio.h>
#include <string.h> // strstr
#include <stdlib.h> // malloc & free
#include <ctype.h> // isspace & tolower
#include "treefile.h"

node* insert(char* u, char* p, node* pos, int d) {
  node* temp;
  if (pos == NULL) {
    pos = (node*)malloc(sizeof(node));
    pos->user = u;
    pos->password = p;
    pos->depth = d;
    printf ("Se ha registrado al usuario <%s> con la contraseña <%s>\n\n", u, p);
  } else {
    if (strcmp(pos->user, u) == 0) {
      if (pos->password!=NULL){
      printf("Este usuario ya estaba registrado\n\n");
      }
      else{
          pos->password = p;
          printf ("Se ha registrado al usuario <%s> con la contraseña <%s>\n\n", u, p);
      }
    } else if (strcmp(pos->user, u)>0) { // value is smaller     si pos->value > value
      /*printf("Registro algo menor\n\n");*/
      temp = insert(u, p, pos->leftChild, d + 1);
      if (pos->leftChild == NULL) {
	pos->leftChild = temp;
      }
    } else if (strcmp(pos->user, u)<0){
      temp = insert(u, p, pos->rightChild, d + 1); // value is larger
      /*printf("Registro algo mayor\n\n");*/
      if (pos->rightChild == NULL) {
	pos->rightChild = temp;
      }
    }
  }
  return pos;
}

void alpha(node* position) {
  if (position != NULL) {
    alpha(position->leftChild);
    if (position->password!=NULL){
    printf("%s ", position->user);
    }
    alpha(position->rightChild);
  }
}

void delete(node* position, char* u, char* p, int* n){
    if (position != NULL) {
        
        delete (position->leftChild, u, p, n);
        delete (position->rightChild, u, p, n);
        if (strcmp(position->user, u) == 0&&strcmp(position->password, p) == 0){
            position->password=NULL;
            printf("Usuario %s eliminado\n\n", u);
            *n = 1;
        }
        
    }
}

int main() {
  extern char linea[];
  node* n = NULL;
  node* tree = NULL; 
  int i;
  int l = 0;
  char* u;
  char* p;
  int indicador=0;
  int contadorespacios =0; 
  int j;
  printf("¡Welcome!\n");
  printf("action commands:\n");
  printf("add- Enter a new user\n");
  printf("del- Remove a user\n");
  printf("view- Shows users alphabetically ordered\n\n");
  printf("notes:\n*To use the add and del commands it is necessary to enter the username followed by the password\n");
  printf("example: add Carlos 123\n");
  printf("*You can use both uppercase and lowercase letters to differentiate users\n");
  printf("*Before giving enter verify that the data is correct\n\n");
  while ((l = saca()) == 0) {
      contadorespacios=0;
    for (j=0; j<MAX; j++){
        if (linea[j]==' '||linea[j]=='\t'){
            contadorespacios++;
        }
    }
    if (strstr(linea, "del") != NULL&&strlen(linea)>=7&&contadorespacios==2) { // if we found  "del" we need to delete
      get(linea, password, user);
      u = (char*)malloc(sizeof(int*) * strlen(user));
      p = (char*)malloc(sizeof(int*) * strlen(password));
      for (i=0; i<strlen(user);i++){
          u[i]=user[i];
      }
      for (i=0; i<strlen(password);i++){
          p[i]=password[i];
      }
      /// De este modo es igual usar p o password 
      indicador=0;
      delete(tree, u, p, &indicador);
      if (indicador==0){
          printf("No se elimino\n\n");
      }

      indicador=0;
      contadorespacios=0;
    }
    
    else if (strstr(linea, "add") != NULL&&strlen(linea)>=7&&contadorespacios==2) { // if we found  "add" we need to add
      get(linea, password, user);
      u = (char*)malloc(sizeof(int*) * strlen(user));
      p = (char*)malloc(sizeof(int*) * strlen(password));
      for (i=0; i<strlen(user);i++){
          u[i]=user[i];
      }
      for (i=0; i<strlen(password);i++){
          p[i]=password[i];
      }
      /*
      printf ("%s %s end\n", password, user);
      printf ("%s %s end\n", p, u);*/
      /// De este modo es igual usar p o password 
      if (strlen(password)>0&&strlen(user)>0){
      n = insert(u,p, tree, 0); /// En este momento se crea el registro
	  if (tree == NULL) {
	    tree = n; // this is the root
	    }
	   contadorespacios=0;
      }
      else if (strlen(password)<=0||strlen(user)<=0){
          printf ("Checa tu entrada\n\n");
      }
      }// aqui termina el add 
      
    else if (strstr(linea, "view") != NULL&&strlen(linea)==4) { // if we found  "show" we need to show
      alpha(tree);
      printf("\n\n");
      contadorespacios=0;
    }
    else{
        printf("Checa tu entrada\n\n");
        contadorespacios=0;
    }
    
    
  }
  /// Here
  return 0;
}

int saca() { // Function that give us the line, modification of a SATU ELISA SCHAEFFER  code Longest2.c nocomment.c
          
  extern char linea[];
  int c, i = 0;

  for (; i < MAX - 1 && (c = getchar()) != EOF && c != '\n';) {

        linea[i++] = c;

  }
  linea[i] = '\0'; // caracter end of string
  return c == EOF;
}

void get (char l[MAX],char p[MAX],char u[MAX]){
    int a = 4, b = 0, c=0;
    while (l[a]!=' '&&l[a]!='\t'){
        u[b]=l[a];
        b++;
        a++;
    }
    u[b]='\0';
    int longitud = strlen(u);
    a++;
    while (l[a]!=' '&&l[a]!='\t'&&l[a]!='\0'){
       p[c]=l[a];
       c++;
       a++;
    }
    p[c]='\0';
    int longitud2 = strlen(p);

}
