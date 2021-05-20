#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct crip 
{
	char letra;
	char codigo[6];
	 
	
};

struct crip codigo [37];  //aqui defino el total de caracteres que se pueden encriptar

void iniciarmorse ();
void iniciarcesar ();
void iniciarrevcesar ();
void iniciarrevmorse ();
char *getcode(char *cadena);


