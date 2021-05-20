/*
 _________  _________  ___   __  _______  _________  _______
 \   _____\ \   ___  \ \  \  \ \ \   __ \ \___   __\ \   __ \  
  \  \	     \  \__\  \ \  \__\ \ \  \_\ \    \  \    \  \ \ \
   \  \_____  \   _   _\ \__   __\ \   ___\    \  \    \  \_\ \
    \_______\  \__\ \_\     \__\    \__\        \__\    \______\
     ________  _________  ________  _______  ___   __  _______  _________
     \   ____\ \   ___  \ \   ___ \ \   __ \ \  \  \ \ \   ___\ \   ___  \
      \  \  ___ \  \__\  \ \  \__\ \ \  \_\ \ \  \__\ \ \   __\  \  \__\  \
       \  \_\  \ \   _   _\ \   _   \ \   ___\ \   _   \ \  \____ \   _   _\
        \_______\ \__\ \_\   \__\ \__\ \__\     \__\ \__\ \______\ \__\ \_\
       	 				by: Jeremy Faryd Cortes Munoz 1910064 
*/

#include "crip.h" //we call the library that contains the structures
#include "bin.h"  //we call the library that contains the characters

void main ()
{
	int option=0; //Option variable, used to select the method you want to use
	char txt [100]; //this variable helps us to store the text we enter
	
	while (option == 0){
	printf ("Welcome\n\n"); //Welcome message
	printf ("ENCRYPTION METHODS:\n");
	printf("\n1- MORSE CODE\n2- CESAR ENCRYPTION\n3- INVERSE CESAR ENCRYPTION\n4- AERENAUTIC PHONETIC ALPHABET");//method menu 
	printf("\n\nWith what method do you want to encrypt?: ");
	scanf("%d", &option);   //the entered value is collected to select the method
	}
	
	while (option == 1){  //if option = 1, the process for the morse method will be activated
		
		iniciarmorse();
		printf("\nEnter the text to encrypt: "); 
		gets(txt);								//the text entered is collected
		
		printf("\nYour text has been encrypted\n");
		printf("%s", getcode(txt));				//the text entered is displayed already encoded
		
	}
	while (option == 2){ //if option = 2, the process for the cesar method will be activated
		
		iniciarcesar();
		printf("\nEnter the text to encrypt: "); 
		gets(txt);								//the text entered is collected
		
		printf("\nYour text has been encrypted\n");
		printf("%s", getcode(txt));				//the text entered is displayed already encoded
		
	}
	
	while (option == 3){ //if option = 3, the process for the CESAR INVERSE ENCRYPTION will be activated
		
	iniciarrevcesar();
	printf("\nEnter the text to encrypt: "); 
	gets(txt);									//the text entered is collected
		
	printf("\nYour text has been encrypted\n");
	printf("%s", getcode(txt));				//the text entered is displayed already encoded

	}
	while (option == 4){  //if option = 4, the process for the AERENAUTIC PHONETIC ALPHABET method will be activated
		
	iniciaralphabet();
	printf("\nEnter the text to encrypt: ");
	gets(txt);									//the text entered is collected
		
	printf("\nYour text has been encrypted\n");
	printf("%s", getcode(txt));					//the text entered is displayed already encoded

	}
	
	while (option >= 5){  //If you enter a wrong number, it will show "error enter a valid number"
		printf("enter a valid number");
		option=0; 		//we return the value of -option- to its initial value
	}
	
}



char *getcode(char *cadena) //function to get the code
{

	char *crip;  
	crip = (char*) malloc(1024); //memory is enabled
	strcpy(crip,""); //the crip variable is started
	
	int indcad; //variable for the string index
	int indcod; //variable for code index
	
	
	int cuentacodigo = 0; //this variable is used to store the number of encrypted characters
	
	for (indcad = 0; indcad<strlen(cadena); indcad++) //loop for string characters
	{
		
		for (indcod = 0; indcod<37; indcod++) //loop for code characters
		{
			
			if(toupper(cadena[indcad]) == codigo[indcod].letra) //letters captured by the user are changed to uppercase
			{
				
				strcat(crip,codigo[indcod].codigo);//copy previously changed character and store it, adding a space
				strcat(crip, " ");
				
				cuentacodigo++; //we increase the counter
				
				break; //takes us out of the cycle to continue with another character
			}
		}
	}
	
	if (cuentacodigo == strlen(cadena))  return (crip); //if the variable cuentacodigo is equal to cadena the code is returned,
	
	else return ("Error, invalid character");   //otherwise an error message will appear
	
}








