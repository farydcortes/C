#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


struct crip 
{
	char letra;
	char codigo[6];
	 
	
};

struct crip codigo [36];  //aqui defino el total de caracteres que se pueden encriptar

void iniciarmorse ();
void iniciarcesar ();
void iniciarbinario ();
char *getcode(char *cadena);

void main ()
{
	int option=0;
	char txt [100];
	printf ("Welcome\n\n");
	
	printf("\n1- Clave morse\n2- Cifrado Cesar\n3- Binario\n"); //en esta parte se seleccionan los modos
	printf("\nWith what method do you want to encrypt?: ");
	scanf("%d", &option);  //pero al llegar aqui se salta directamente a esta parte 
	printf("\noption: %d\n",option);
	
	switch(option){

		case(1):
			iniciarmorse();
			puts("Enter the text to encrypt: "); // a esta
			gets(txt);
		
			puts("\nYour text has been encrypted\n"); //luego se supone que esta te arroja la palabra encriptada, pero por lo mismo que se salta el modo arroja un mugrterote
			printf("%s", getcode(txt));

		case(2):
			iniciarcesar();
			puts("Enter the text to encrypt: "); // a esta
			gets(txt);
		
			puts("\nYour text has been encrypted\n"); //luego se supone que esta te arroja la palabra encriptada, pero por lo mismo que se salta el modo arroja un mugrterote
			printf("%s", getcode(txt));

		case(3):
			iniciarbinario();
			puts("Enter the text to encrypt: "); // a esta
			gets(txt);
		
			puts("\nYour text has been encrypted\n"); //luego se supone que esta te arroja la palabra encriptada, pero por lo mismo que se salta el modo arroja un mugrterote
			printf("%s", getcode(txt));

		default:
			printf("error, lol");

	}
	
}


char *getcode(char *cadena)
{

	char *crip;
	crip = (char*) malloc(1024);
	strcpy(crip,"");
	
	int indcad;
	int indcod;
	
	
	int cuentacodigo = 0;
	
	for (indcad = 0; indcad<strlen(cadena); indcad++) //este es el bucle de sustitucion de la letra a los caracteres encriptados
	{
		
		for (indcod = 0; indcod<37; indcod++)
		{
			
			if(toupper(cadena[indcad]) == codigo[indcod].letra)
			{
				
				strcat(crip,codigo[indcod].codigo);
				strcat(crip, " ");
				
				cuentacodigo++;
				
				break;
			}
		}
	}
	
	if (cuentacodigo == strlen(cadena))  return (crip);
	
	else return ("Error");
	
}

void iniciarmorse ()  // y bueno aqui estan todos los caracteres con su forma encriptada ya para sustituir dependiendo de que modo se escoja unu
{
	codigo[0].letra= 'A';
	strcpy(codigo[0].codigo,"._");
	
	codigo[1].letra= 'B';
	strcpy(codigo[1].codigo,"_...");
	
	codigo[2].letra= 'C';
	strcpy(codigo[2].codigo,"_._.");
	
	codigo[3].letra= 'D';
	strcpy(codigo[3].codigo,"_..");
	
	codigo[4].letra= 'E';
	strcpy(codigo[4].codigo,".");
	
	codigo[5].letra= 'F';
	strcpy(codigo[5].codigo,".._.");
	
	codigo[6].letra= 'G';
	strcpy(codigo[6].codigo,"__.");
	
	codigo[7].letra= 'H';
	strcpy(codigo[7].codigo,"....");
	
	codigo[8].letra= 'I';
	strcpy(codigo[8].codigo,"..");
	
	codigo[9].letra= 'J';
	strcpy(codigo[9].codigo,".___");
	
	codigo[10].letra= 'K';
	strcpy(codigo[10].codigo,"_._");
	
	codigo[11].letra= 'L';
	strcpy(codigo[11].codigo,"._..");
	
	codigo[12].letra= 'M';
	strcpy(codigo[12].codigo,"__");
	
	codigo[13].letra= 'N';
	strcpy(codigo[13].codigo,"_.");
	
	codigo[14].letra= 'O';
	strcpy(codigo[14].codigo,"___");
	
	codigo[15].letra= 'P';
	strcpy(codigo[15].codigo,".__.");
	
	codigo[16].letra= 'Q';
	strcpy(codigo[16].codigo," __._");
	
	codigo[17].letra= 'R';
	strcpy(codigo[17].codigo,"._.");
	
	codigo[18].letra= 'S';
	strcpy(codigo[18].codigo,"...");
	
	codigo[19].letra= 'T';
	strcpy(codigo[19].codigo,"_");
	
	codigo[20].letra= 'U';
	strcpy(codigo[20].codigo,".._");
	
	codigo[21].letra= 'V';
	strcpy(codigo[21].codigo,"..._");
	
	codigo[22].letra='W';
	strcpy(codigo[22].codigo,".__");
	
	codigo[23].letra= 'X';
	strcpy(codigo[23].codigo,"_.._");
	
	codigo[24].letra= 'Y';
	strcpy(codigo[24].codigo," _.__");
	
	codigo[25].letra= 'Z';
	strcpy(codigo[25].codigo," __..");
	
	codigo[26].letra= '1';
	strcpy(codigo[26].codigo,".____");
	
	codigo[27].letra= '2';
	strcpy(codigo[27].codigo,"..___");
	
	codigo[28].letra= '3';
	strcpy(codigo[28].codigo,"...__");
	
	codigo[29].letra= '4';
	strcpy(codigo[29].codigo," ...._");
	
	codigo[30].letra= '5';
	strcpy(codigo[30].codigo,".....");
	
	codigo[31].letra= '6';
	strcpy(codigo[31].codigo,"_....");
	
	codigo[32].letra= '7';
	strcpy(codigo[32].codigo,"__...");
	
	codigo[33].letra= '8';
	strcpy(codigo[33].codigo,"___..");
	
	codigo[34].letra= '9';
	strcpy(codigo[34].codigo,"____.");
	
	codigo[35].letra= '0';
	strcpy(codigo[35].codigo,"_____");
	
	codigo[36].letra= ' ';
	strcpy(codigo[36].codigo,"/");
	
	return;

}

void iniciarcesar()
{
	codigo[0].letra= 'A';
	strcpy(codigo[0].codigo,"D");
	
	codigo[1].letra= 'B';
	strcpy(codigo[1].codigo,"E");
	
	codigo[2].letra= 'C';
	strcpy(codigo[2].codigo,"F");
	
	codigo[3].letra= 'D';
	strcpy(codigo[3].codigo,"G");
	
	codigo[4].letra= 'E';
	strcpy(codigo[4].codigo,"H");
	
	codigo[5].letra= 'F';
	strcpy(codigo[5].codigo,"I");
	
	codigo[6].letra= 'G';
	strcpy(codigo[6].codigo,"J");
	
	codigo[7].letra= 'H';
	strcpy(codigo[7].codigo,"K");
	
	codigo[8].letra= 'I';
	strcpy(codigo[8].codigo,"L");
	
	codigo[9].letra= 'J';
	strcpy(codigo[9].codigo,"M");
	
	codigo[10].letra= 'K';
	strcpy(codigo[10].codigo,"N");
	
	codigo[11].letra= 'L';
	strcpy(codigo[11].codigo,"C");
	
	codigo[12].letra= 'M';
	strcpy(codigo[12].codigo,"O");
	
	codigo[13].letra= 'N';
	strcpy(codigo[13].codigo,"P");
	
	codigo[14].letra= 'O';
	strcpy(codigo[14].codigo,"Q");
	
	codigo[15].letra= 'P';
	strcpy(codigo[15].codigo,"R");
	
	codigo[16].letra= 'Q';
	strcpy(codigo[16].codigo,"S");
	
	codigo[17].letra= 'R';
	strcpy(codigo[17].codigo,"T");
	
	codigo[18].letra= 'S';
	strcpy(codigo[18].codigo,"U");
	
	codigo[19].letra= 'T';
	strcpy(codigo[19].codigo,"V");
	
	codigo[20].letra= 'U';
	strcpy(codigo[20].codigo,"W");
	
	codigo[21].letra= 'V';
	strcpy(codigo[21].codigo,"X");
	
	codigo[22].letra='W';
	strcpy(codigo[22].codigo,"Y");
	
	codigo[23].letra= 'X';
	strcpy(codigo[23].codigo,"Z");
	
	codigo[24].letra= 'Y';
	strcpy(codigo[24].codigo,"A");
	
	codigo[25].letra= 'Z';
	strcpy(codigo[25].codigo,"B");
	
	codigo[26].letra= '1';
	strcpy(codigo[26].codigo,"4");
	
	codigo[27].letra= '2';
	strcpy(codigo[27].codigo,"5");
	
	codigo[28].letra= '3';
	strcpy(codigo[28].codigo,"6");
	
	codigo[29].letra= '4';
	strcpy(codigo[29].codigo,"7");
	
	codigo[30].letra= '5';
	strcpy(codigo[30].codigo,"8");
	
	codigo[31].letra= '6';
	strcpy(codigo[31].codigo,"9");
	
	codigo[32].letra= '7';
	strcpy(codigo[32].codigo,"0");
	
	codigo[33].letra= '8';
	strcpy(codigo[33].codigo,"1");
	
	codigo[34].letra= '9';
	strcpy(codigo[34].codigo,"2");
	
	codigo[35].letra= '0';
	strcpy(codigo[35].codigo,"3");
	
	codigo[36].letra= ' ';
	strcpy(codigo[36].codigo,"/");
	
	return;

}

void iniciarbinario()
{
	codigo[0].letra= 'A';
	strcpy(codigo[0].codigo,"01000001");
	
	codigo[1].letra= 'B';
	strcpy(codigo[1].codigo,"01000010");
	
	codigo[2].letra= 'C';
	strcpy(codigo[2].codigo,"01000011");
	
	codigo[3].letra= 'D';
	strcpy(codigo[3].codigo,"01000100");
	
	codigo[4].letra= 'E';
	strcpy(codigo[4].codigo,"01000101");
	
	codigo[5].letra= 'F';
	strcpy(codigo[5].codigo,"01000110");
	
	codigo[6].letra= 'G';
	strcpy(codigo[6].codigo,"01000111");
	
	codigo[7].letra= 'H';
	strcpy(codigo[7].codigo,"01001000");
	
	codigo[8].letra= 'I';
	strcpy(codigo[8].codigo,"01001001");
	
	codigo[9].letra= 'J';
	strcpy(codigo[9].codigo,"01001010");
	
	codigo[10].letra= 'K';
	strcpy(codigo[10].codigo,"01001011");
	
	codigo[11].letra= 'L';
	strcpy(codigo[11].codigo,"01001100");
	
	codigo[12].letra= 'M';
	strcpy(codigo[12].codigo,"01001101");
	
	codigo[13].letra= 'N';
	strcpy(codigo[13].codigo,"01001110");
	
	codigo[14].letra= 'O';
	strcpy(codigo[14].codigo,"01001111");
	
	codigo[15].letra= 'P';
	strcpy(codigo[15].codigo,"01010000");
	
	codigo[16].letra= 'Q';
	strcpy(codigo[16].codigo,"01010001");
	
	codigo[17].letra= 'R';
	strcpy(codigo[17].codigo,"01010010");
	
	codigo[18].letra= 'S';
	strcpy(codigo[18].codigo,"01010011");
	
	codigo[19].letra= 'T';
	strcpy(codigo[19].codigo,"01010100");
	
	codigo[20].letra= 'U';
	strcpy(codigo[20].codigo,"01010101");
	
	codigo[21].letra= 'V';
	strcpy(codigo[21].codigo,"01010110");
	
	codigo[22].letra='W';
	strcpy(codigo[22].codigo,"01010111");
	
	codigo[23].letra= 'X';
	strcpy(codigo[23].codigo,"01011000");
	
	codigo[24].letra= 'Y';
	strcpy(codigo[24].codigo,"01011001");
	
	codigo[25].letra= 'Z';
	strcpy(codigo[25].codigo,"01011010");
	
	codigo[26].letra= '1';
	strcpy(codigo[26].codigo,"4");
	
	codigo[27].letra= '2';
	strcpy(codigo[27].codigo,"5");
	
	codigo[28].letra= '3';
	strcpy(codigo[28].codigo,"6");
	
	codigo[29].letra= '4';
	strcpy(codigo[29].codigo,"7");
	
	codigo[30].letra= '5';
	strcpy(codigo[30].codigo,"8");
	
	codigo[31].letra= '6';
	strcpy(codigo[31].codigo,"9");
	
	codigo[32].letra= '7';
	strcpy(codigo[32].codigo,"0");
	
	codigo[33].letra= '8';
	strcpy(codigo[33].codigo,"1");
	
	codigo[34].letra= '9';
	strcpy(codigo[34].codigo,"2");
	
	codigo[35].letra= '0';
	strcpy(codigo[35].codigo,"3");
	
	codigo[36].letra= ' ';
	strcpy(codigo[36].codigo,"/");
	
	
	return;

}


