/*
For the program to work correctly in GDB online, 
I recommend using the .txt files appended to the repository 
(when doing so add an enter at the end of the last line)
* don't forget to use the same names for the files C: *

*/

/* 
If you use the program in a different compiler (example, dev c ++)
 it is not necessary to attach the notes, 
 since these will be generated with the data that you enter nwn
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "lth.h"

int main()
{
    header();
    int i;
    int j;
    int pintemporal;
    matrix = (int**)malloc(sizeof(int*) * USUARIOS);
    for (i = 0; i < USUARIOS; i ++){
            matrix[i] = (int*)malloc(sizeof(int) * 6);
            for (j=0; j<6; j++){
            matrix[i][j]=-1;
            }
    }
    int salir=0;
    int opcion=0;
    while(salir==0){
        int limite;
        limite=count();
        printf("\nWelcome ^.^");
        printf("\nThere are %d registered workers\n", limite);
        printf("please verify your input before hitting enter:)\n");
        printf("\nEnter\n1-To register an entry\n2-To register a departure\n3-To register a new user\n4-To close the program\n");
        scanf("%d", &opcion);
        if (opcion==1){
            
        printf("Enter your pin\n");
        scanf("%d", &pintemporal);
        
        if (pintemporal<=0){
            printf("Unvalid entry\n");
        }
        
            else if (pintemporal<=limite){
                if (matrix[pintemporal-1][1]==-1){ 
                    entradaosalida(pintemporal, 0);
                }
                else{
                    printf("This user already had a previously registered entry\n");
                }
            }
            else{
                printf("There are %d users you cannot use that pin\n", limite);
            }
        }
        else if (opcion==2){
            
        printf("Enter your pin\n");
        scanf("%d", &pintemporal);
        
        if (pintemporal<=0){
            printf("Unvalid entry\n");
        }
        
            else if (pintemporal<=limite){
                if (matrix[pintemporal-1][1]!=-1){ 
                    entradaosalida(pintemporal, 1);
                }
                else{
                    printf("To register an exit, it is necessary to have a previously registered entry\n");
                }
            }
            else{
                printf("There are %d registered workers, you can't use that pin\n", limite);
            }
        }
        else if (opcion==3){
            registrar();
        }
        else if (opcion==4){
            int flag=0;
            for (i=0; i<MAX; i++){
                if(matrix[i][0]*matrix[i][1]*matrix[i][2]>0&&matrix[i][3]*matrix[i][4]*matrix[i][5]<0){
                    flag=-1; 
                    printf("Warning!: user with pin %d registers an input but not an exit\n\n", i+1);
                }
            }
            if (flag==0){
            horario();
            printf("Have a nice day C:\n");
            salir=1;
            }
        }
        else{
            printf("Option not available\n\n");
        }
    }
   
    return 0;
}

int count(){
    FILE* sistema = fopen("system.txt", "r");
    char c;
    int count=0;
    while ((c = fgetc(sistema)) != EOF) {
    if (c == '\n') {
      count++; // veamos cuantos sean registrado hasta ahora
    }
    }
    
    return count;
}

void registrar(){
    int pin;
    pin=count()+1;
    char user[MAX];
    int domingo;
    int lunes;
    int martes;
    int miercoles;
    int jueves;
    int viernes;
    int sabado;
    int hora;
    int min;
    int trabajo;
    printf("Your corresponding pin will be: <%d>\n", pin);
    registrados++;
    printf("What will be the name for the new user?\n");
    scanf("%s", user);
    
     do{
        printf("\nWrite your work schedule\nwhere 1 is that you will work that day and 0 is that you will not.\nexample: 1 1 0 1 1 0 0\n");
        printf("At least there must be 1 working day\n");
        printf("You must enter 7 digits\n");
        printf("Sun Mon Tue Wed Thu Fri Sat\n");
        scanf("%d %d %d %d %d %d %d", &domingo, &lunes, &martes, &miercoles, &jueves, &viernes, &sabado);
    } while(domingo+lunes+martes+miercoles+jueves+viernes+sabado==0||domingo!=0&&domingo!=1||lunes!=0&&lunes!=1||martes!=0&&martes!=1||miercoles!=0&&miercoles!=1||jueves!=0&&jueves!=1||viernes!=0&&viernes!=1||sabado!=0&&sabado!=1);
    
    do {
        printf("What will your entry time be? (enter the hour with minutes separated by a space)\n");
        printf("Example: 07 00\n");
        scanf("%d %d", &hora, &min);
    } while(hora<0||hora>23||min<0||min>60);
        
    do {
        printf("\nHow many seconds will it work? (0-60)\n");
        scanf("%d", &trabajo);
    }while(trabajo<=0||trabajo>60);
    printf("Successful registration!\n\n");
    
    FILE* escribirsistema = fopen("system.txt", "a");
    fprintf(escribirsistema, "%d %s %d %d %d %d %d %d %d %d %d %d\n",pin, user, domingo, lunes,martes,miercoles,jueves,viernes,sabado, hora, min, trabajo);
    fclose(escribirsistema);
}

void entradaosalida(int pin, int estado){
    int diferencia=0; //la diferencia de segundos es lo que trabajo X usuario//
    time_t tiempoahora;
    time(&tiempoahora);
    struct tm *mitiempo = localtime(&tiempoahora);
    int actualsec=mitiempo->tm_sec;
    int actualmin=mitiempo->tm_min;
    int actualhora=mitiempo->tm_hour;
    int actualyear=mitiempo->tm_year+1900;
    int actualmes=mitiempo->tm_mon+1;
    int actualdia=mitiempo->tm_mday;
    int actualwdia=mitiempo->tm_wday;
    if (estado==0){ 
    FILE* entrada = fopen("entries.txt", "a");
    fprintf(entrada, "%d %d %d/%d/%d %d:%d:%d\n", pin, actualwdia, actualdia, actualmes, actualyear, actualhora, actualmin, actualsec);
    fclose(entrada);
    matrix[pin-1][0]=actualhora;
    matrix[pin-1][1]=actualmin;
    matrix[pin-1][2]=actualsec;
    printf("Registered entry\n");
    }
    if (estado==1){
    FILE* salida = fopen("departuress.txt", "a"); 
    fprintf(salida, "%d %d %d/%d/%d %d:%d:%d\n", pin, actualwdia, actualdia, actualmes, actualyear, actualhora, actualmin, actualsec);
    fclose(salida);
    printf("Registered departure\n");
    matrix[pin-1][3]=actualhora;
    matrix[pin-1][4]=actualmin;
    matrix[pin-1][5]=actualsec;
    FILE* reporte = fopen("report.txt", "a");
    if (totaldesalidas==0){
        fprintf(reporte, "Report created on: "); 
            switch(actualwdia){
                case 0:
                fprintf(reporte, "Sunday");
                break;
                case 1:
                fprintf(reporte, "Monday");
                break;
                case 2:
                fprintf(reporte, "Tuesday");
                break;
                case 3:
                fprintf(reporte, "Wednesday");
                break;
                case 4:
                fprintf(reporte, "Thursday");
                break;
                case 5:
                fprintf(reporte, "Friday");
                break;
                case 6:
                fprintf (reporte, "Saturday");
                break;
            }
        fprintf(reporte, " %d/%d/%d\n", actualdia, actualmes, actualyear);
    } 
    
    diferencia=(matrix[pin-1][3]*3600+matrix[pin-1][4]*60+matrix[pin-1][5])-(matrix[pin-1][0]*3600+matrix[pin-1][1]*60+matrix[pin-1][2]);
    int horapin=matrix[pin-1][0];
    int minpin=matrix[pin-1][1];
    int segundopin=matrix[pin-1][2];                                                                             //El trabajador con el pin <%d> entro a la hora: <%d:%d:%d> el dia: <%d/%d/%d> trabajo %d segundos
    fprintf(reporte, "the user with pin <%d> entered at: <%d:%d:%d> the day: <%d/%d/%d> worked %d seconds\n", pin, horapin, minpin, segundopin, actualdia, actualmes, actualyear, diferencia);
    fclose(reporte);
    matrix[pin-1][0]=-1;
    matrix[pin-1][1]=-1;
    matrix[pin-1][2]=-1;
    matrix[pin-1][3]=-1;
    matrix[pin-1][4]=-1;
    matrix[pin-1][5]=-1;
    
    totaldesalidas=9;
    }
}

void header(){
    time_t tiempoahora;
    time(&tiempoahora);
    struct tm *mitiempo = localtime(&tiempoahora);
    switch(mitiempo->tm_wday){
        case 0:
        printf("Today it is Sunday\n");
        break;
        case 1:
        printf("Today is Monday\n");
        break;
        case 2:
        printf("Today is Tuesday\n");
        break;
        case 3:
        printf("Today is Wednesday\n");
        break;
        case 4:
        printf("Today is Thursday\n");
        break;
        case 5:
        printf("Today is Friday\n");
        break;
        case 6:
        printf ("Today is Saturday\n");
        break;
    }
    printf("Day: %d/%d/%d\n", mitiempo->tm_mday, mitiempo->tm_mon+1, mitiempo->tm_year+1900); 
    printf("Hour: %d:%d\n", mitiempo->tm_hour, mitiempo->tm_min);
    printf("Only a maximum of %d users can be registered\n", USUARIOS);
}

void horario(){
    time_t tiempoahora;
    time(&tiempoahora);
    int pinleido;
    char usuarioleido[MAX];
    int domingohorario;
    int luneshorario;
    int marteshorario;
    int miercoleshorario;
    int jueveshorario;
    int vierneshorario;
    int sabadohorario;
    int horaleida;
    int minutoleido;
    int trabajo;
    int i;
    struct tm *mitiempo = localtime(&tiempoahora);
    FILE* leersistema = fopen("system.txt", "r");
    FILE* escribirhorario = fopen("schedule.txt", "w");
    char c;
    int count;
    while (fscanf(leersistema, "%d %s %d %d %d %d %d %d %d %d %d %d\n", &pinleido, usuarioleido, &domingohorario, &luneshorario, &marteshorario, &miercoleshorario, &jueveshorario, &vierneshorario, &sabadohorario, &horaleida, &minutoleido, &trabajo) == 12) {
    fprintf(escribirhorario, "The user <%s> with the pin <%d> must enter at: %d:%d and must work for <%d segundos> the days:\n", usuarioleido, pinleido,horaleida, minutoleido, trabajo);
    if (domingohorario==1)
    fprintf(escribirhorario, "Sunday ");
    if (luneshorario==1)
    fprintf(escribirhorario, "Monday ");
    if (marteshorario==1)
    fprintf(escribirhorario, "Tuesday ");
    if (miercoleshorario==1)
    fprintf(escribirhorario, "Wednesday ");
    if (jueveshorario==1)
    fprintf(escribirhorario, "Thursday ");
    if (vierneshorario==1)
    fprintf(escribirhorario, "Friday ");
    if (sabadohorario==1)
    fprintf(escribirhorario, "Saturday ");
    
    fprintf(escribirhorario, "\n\n");    
    }
    
    
    fclose(leersistema);
    fclose(escribirhorario);
}

/* This program was made with the help of https://github.com/satuelisa/C/tree/main/Ch6, Brian W. Kernighan, Dennis M. Ritchie 
- The C Programming Language, Second Edition (1988) and with the help of rulgamer07 u.u */ 

