#include "crip.h"
#include "bin.h"

void main ()
{
	int option=0;
	char txt [100];
	printf ("Welcome\n\n");
	
	printf("\n1- Clave morse\n2- Cifrado Cesar\n3- Cifrado cesar inverso\n"); //en esta parte se seleccionan los modos
	printf("\nWith what method do you want to encrypt?: ");
	scanf("%d", &option);  //pero al llegar aqui se salta directamente a esta parte 
	
	while (option == 1){
		
		iniciarmorse();
		printf("\nEnter the text to encrypt: ");
		gets(txt);
		
		printf("\nYour text has been encrypted\n");
		printf("%s", getcode(txt));
	}
	while (option == 2){
		
		iniciarcesar();
		puts("\nEnter the text to encrypt: ");
		gets(txt);
		
		puts("\nYour text has been encrypted\n");
		printf("%s", getcode(txt));
	}
/*	while (option == 3){
		
	iniciarrevmorse();
	puts("\nEnter the text to encrypt: ");
	gets(txt);
		
	puts("\nYour text has been encrypted\n");
	printf("%s", getcode(txt));
	}
	*/
	
	while (option == 3){
		
	iniciarrevcesar();
	puts("\nEnter the text to encrypt: ");
	gets(txt);
		
	puts("\nYour text has been encrypted\n");
	printf("%s", getcode(txt));
	
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
	
	else return ("Error, invalid character");
	
}







