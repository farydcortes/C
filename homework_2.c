#include<stdio.h>
#include<math.h>
int main (){

int k;
printf ("introduzca la cantidad de terminos primos que desea saber: ");
scanf("%i", &k);

  int count, i, flag, sqr;
  int n=1;
  count = 1;
  	
  while(count <= k){
    sqr = sqrt(n); 
    flag = 0; 
    for(i=2; i<= sqr; i++){
      if(n%i==0){
        flag = 1; 
        break;
      }
   
    }

    if(flag==0){
      printf("%d \n", n);      
      count++;
    }
    
    n++;
    
  } 
}

