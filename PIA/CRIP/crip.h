#include <stdio.h>  //we include the required libraries
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 

struct crip //structure to handle codes
{
	char letra;		//we declare vectors for the code, one for the letters and another for its code
	char codigo[6];
	 
	
};

struct crip codigo [37];  //the total characters that can be encrypted are defined

void iniciarmorse ();		//with these functions we initialize the code, one for each method
void iniciarcesar ();
void iniciarrevcesar ();
void iniciaralphabet();
//void iniciararevlphabet (); test function
char *getcode(char *cadena);  //function to get the code


