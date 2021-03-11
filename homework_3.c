/* Having concluded the above activities, 
write a program (of your own) that reads from standard input and reproduces the content in standard output with the following modifications:
 all digits are replaced with a single X (regardless of how many digits there are),
  except for when the number in question is enclosed in one or more sets of parenthesis or quotes of any kind. 
  All punctuation is omitted. Any other input is reproduced as is. The program exists upon encountering an EOF within the input.*/

#include <stdio.h>

int main() {
	
  int c, num = 0, quotes = 0, prts = 0; //se introducen las variables//

  
  while ((c = getchar()) != EOF) {

      switch(c){    //se activa la funcion switch segun sea el caso//
      	
      case '[':
          prts=1;
          putchar(c);
          break;
      case ']':
          prts=0;
          putchar(c);
          break;
      case '(':
          prts=1;
          putchar(c);
          break;
      case ')':
          prts=0;
          putchar(c);
          break;
      case '{':
          prts=1;
          putchar(c);
          break;
      case '}':
          prts=0;
          putchar(c);
          break;
      case '<':
          prts=1;
          putchar(c);
          break;
      case '>':
          prts=0;
          putchar(c);
          break;
      case '\"':
          putchar(c);
          quotes++;
          break;

      default:
        if(c!='.'&&c!=':'&&c!='\?'&&c!='!'&&c!='-'&&c!=';'&&c!='_'){  
            if (prts==1||quotes==1){
            putchar(c);
            }
            else{
                if (quotes==2){
                    quotes=0;
                }
                if (c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0'){
                    num++;
                }else{
                  num=0;
                }
                if (num==1){
                    putchar('X');
                }
                if (num==0){
                    putchar(c);
                }
            }
        }




        }
    }

 system("pause");
    return 0;
  }
  
  
  
  /* este programa se realizo con ayuda de rulgamer07 */
