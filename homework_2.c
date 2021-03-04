#include<stdio.h>
#include<math.h>
int main (){

int k;
printf ("introduzca la cantidad de terminos primos que desea saber: ");
scanf("%i", &k);

  int count, i, flag, sr;
  int  b, l, a[1000];
  int n=1;
  count = 1;
  	l=0;
  	
  while(count <= k){
    sr = sqrt(n); 
    flag = 0; 
    for(i=2; i<= sr; i++){
      if(n%i==0){
        flag = 1; 
        break;
      }
   
    }

    if(flag==0){
      printf("%d \n", n);
      	l=0;
 	while (n > 0) {
 		a[l]= n % 2;
 		n /= 2;
 		l++;
	 }
 	for(b = l- 1; b >= 0; b--){
 		printf("%d", a[b]);
 		
	 }
      count++;
    }
    
    n++;
    
  } 
}

