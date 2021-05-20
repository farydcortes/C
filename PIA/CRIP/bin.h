#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//here are all the characters with their encrypted form already to replace depending on which mode is chosen

void iniciarcesar()
{
	codigo[0].letra= 'A';
	strcpy(codigo[0].codigo,"H");
	
	codigo[1].letra= 'B';
	strcpy(codigo[1].codigo,"I");
	
	codigo[2].letra= 'C';
	strcpy(codigo[2].codigo,"J");
	
	codigo[3].letra= 'D';
	strcpy(codigo[3].codigo,"K");
	
	codigo[4].letra= 'E';
	strcpy(codigo[4].codigo,"L");
	
	codigo[5].letra= 'F';
	strcpy(codigo[5].codigo,"M");
	
	codigo[6].letra= 'G';
	strcpy(codigo[6].codigo,"N");
	
	codigo[7].letra= 'H';
	strcpy(codigo[7].codigo,"O");
	
	codigo[8].letra= 'I';
	strcpy(codigo[8].codigo,"P");
	
	codigo[9].letra= 'J';
	strcpy(codigo[9].codigo,"Q");
	
	codigo[10].letra= 'K';
	strcpy(codigo[10].codigo,"R");
	
	codigo[11].letra= 'L';
	strcpy(codigo[11].codigo,"S");
	
	codigo[12].letra= 'M';
	strcpy(codigo[12].codigo,"T");
	
	codigo[13].letra= 'N';
	strcpy(codigo[13].codigo,"U");
	
	codigo[14].letra= 'O';
	strcpy(codigo[14].codigo,"V");
	
	codigo[15].letra= 'P';
	strcpy(codigo[15].codigo,"W");
	
	codigo[16].letra= 'Q';
	strcpy(codigo[16].codigo,"X");
	
	codigo[17].letra= 'R';
	strcpy(codigo[17].codigo,"Y");
	
	codigo[18].letra= 'S';
	strcpy(codigo[18].codigo,"Z");
	
	codigo[19].letra= 'T';
	strcpy(codigo[19].codigo,"A");
	
	codigo[20].letra= 'U';
	strcpy(codigo[20].codigo,"B");
	
	codigo[21].letra= 'V';
	strcpy(codigo[21].codigo,"C");
	
	codigo[22].letra='W';
	strcpy(codigo[22].codigo,"D");
	
	codigo[23].letra= 'X';
	strcpy(codigo[23].codigo,"E");
	
	codigo[24].letra= 'Y';
	strcpy(codigo[24].codigo,"F");
	
	codigo[25].letra= 'Z';
	strcpy(codigo[25].codigo,"G");
	
	codigo[26].letra= '1';
	strcpy(codigo[26].codigo,"7");
	
	codigo[27].letra= '2';
	strcpy(codigo[27].codigo,"8");
	
	codigo[28].letra= '3';
	strcpy(codigo[28].codigo,"9");
	
	codigo[29].letra= '4';
	strcpy(codigo[29].codigo,"0");
	
	codigo[30].letra= '5';
	strcpy(codigo[30].codigo,"1");
	
	codigo[31].letra= '6';
	strcpy(codigo[31].codigo,"2");
	
	codigo[32].letra= '7';
	strcpy(codigo[32].codigo,"3");
	
	codigo[33].letra= '8';
	strcpy(codigo[33].codigo,"4");
	
	codigo[34].letra= '9';
	strcpy(codigo[34].codigo,"5");
	
	codigo[35].letra= '0';
	strcpy(codigo[35].codigo,"6");
	
	codigo[36].letra= ' ';
	strcpy(codigo[36].codigo,"/");
	

}

void iniciarmorse () 
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
	
}

void iniciarrevcesar(){
	codigo[0].letra= 'H';
	strcpy(codigo[0].codigo,"A");
	
	codigo[1].letra= 'I';
	strcpy(codigo[1].codigo,"B");
	
	codigo[2].letra= 'J';
	strcpy(codigo[2].codigo,"C");
	
	codigo[3].letra= 'K';
	strcpy(codigo[3].codigo,"D");
	
	codigo[4].letra= 'L';
	strcpy(codigo[4].codigo,"E");
	
	codigo[5].letra= 'M';
	strcpy(codigo[5].codigo,"F");
	
	codigo[6].letra= 'N';
	strcpy(codigo[6].codigo,"G");
	
	codigo[7].letra= 'O';
	strcpy(codigo[7].codigo,"H");
	
	codigo[8].letra= 'P';
	strcpy(codigo[8].codigo,"I");
	
	codigo[9].letra= 'Q';
	strcpy(codigo[9].codigo,"J");
	
	codigo[10].letra= 'R';
	strcpy(codigo[10].codigo,"K");
	
	codigo[11].letra= 'S';
	strcpy(codigo[11].codigo,"L");
	
	codigo[12].letra= 'T';
	strcpy(codigo[12].codigo,"M");
	
	codigo[13].letra= 'U';
	strcpy(codigo[13].codigo,"N");
	
	codigo[14].letra= 'V';
	strcpy(codigo[14].codigo,"O");
	
	codigo[15].letra= 'W';
	strcpy(codigo[15].codigo,"P");
	
	codigo[16].letra= 'X';
	strcpy(codigo[16].codigo,"Q");
	
	codigo[17].letra= 'Y';
	strcpy(codigo[17].codigo,"R");
	
	codigo[18].letra= 'Z';
	strcpy(codigo[18].codigo,"S");
	
	codigo[19].letra= 'A';
	strcpy(codigo[19].codigo,"T");
	
	codigo[20].letra= 'B';
	strcpy(codigo[20].codigo,"U");
	
	codigo[21].letra= 'C';
	strcpy(codigo[21].codigo,"V");
	
	codigo[22].letra='D';
	strcpy(codigo[22].codigo,"W");
	
	codigo[23].letra= 'E';
	strcpy(codigo[23].codigo,"X");
	
	codigo[24].letra= 'F';
	strcpy(codigo[24].codigo,"Y");
	
	codigo[25].letra= 'G';
	strcpy(codigo[25].codigo,"Z");
	
	codigo[26].letra= '7';
	strcpy(codigo[26].codigo,"1");
	
	codigo[27].letra= '8';
	strcpy(codigo[27].codigo,"2");
	
	codigo[28].letra= '9';
	strcpy(codigo[28].codigo,"3");
	
	codigo[29].letra= '0';
	strcpy(codigo[29].codigo,"4");
	
	codigo[30].letra= '1';
	strcpy(codigo[30].codigo,"5");
	
	codigo[31].letra= '2';
	strcpy(codigo[31].codigo,"6");
	
	codigo[32].letra= '3';
	strcpy(codigo[32].codigo,"7");
	
	codigo[33].letra= '4';
	strcpy(codigo[33].codigo,"8");
	
	codigo[34].letra= '5';
	strcpy(codigo[34].codigo,"9");
	
	codigo[35].letra= '6';
	strcpy(codigo[35].codigo,"0");
	
	codigo[36].letra= ' ';
	strcpy(codigo[36].codigo,"/");
	
}
 void iniciaralphabet () 
{
	codigo[0].letra= 'A';
	strcpy(codigo[0].codigo,"ALPHA");
	
	codigo[1].letra= 'B';
	strcpy(codigo[1].codigo,"BRAVO");
	
	codigo[2].letra= 'C';
	strcpy(codigo[2].codigo,"CHARLIE");
	
	codigo[3].letra= 'D';
	strcpy(codigo[3].codigo,"DELTA");
	
	codigo[4].letra= 'E';
	strcpy(codigo[4].codigo,"ECHO");
	
	codigo[5].letra= 'F';
	strcpy(codigo[5].codigo,"FOXTROT");
	
	codigo[6].letra= 'G';
	strcpy(codigo[6].codigo,"GOLF");
	
	codigo[7].letra= 'H';
	strcpy(codigo[7].codigo,"HOTEL");
	
	codigo[8].letra= 'I';
	strcpy(codigo[8].codigo,"INDIA");
	
	codigo[9].letra= 'J';
	strcpy(codigo[9].codigo,"JULIET");
	
	codigo[10].letra= 'K';
	strcpy(codigo[10].codigo,"KILO");
	
	codigo[11].letra= 'L';
	strcpy(codigo[11].codigo,"LIMA");
	
	codigo[12].letra= 'M';
	strcpy(codigo[12].codigo,"MIKE");
	
	codigo[13].letra= 'N';
	strcpy(codigo[13].codigo,"NOVEMBER");
	
	codigo[14].letra= 'O';
	strcpy(codigo[14].codigo,"OSCAR");
	
	codigo[15].letra= 'P';
	strcpy(codigo[15].codigo,"PAPA");
	
	codigo[16].letra= 'Q';
	strcpy(codigo[16].codigo,"QUEBEC");
	
	codigo[17].letra= 'R';
	strcpy(codigo[17].codigo,"ROMEO");
	
	codigo[18].letra= 'S';
	strcpy(codigo[18].codigo,"SIFRRA");
	
	codigo[19].letra= 'T';
	strcpy(codigo[19].codigo,"TANGO");
	
	codigo[20].letra= 'U';
	strcpy(codigo[20].codigo,"UNIFORM");
	
	codigo[21].letra= 'V';
	strcpy(codigo[21].codigo,"VICTOR");
	
	codigo[22].letra='W';
	strcpy(codigo[22].codigo,"WHISKEY");
	
	codigo[23].letra= 'X';
	strcpy(codigo[23].codigo,"X-RAY");
	
	codigo[24].letra= 'Y';
	strcpy(codigo[24].codigo,"YANKEE");
	
	codigo[25].letra= 'Z';
	strcpy(codigo[25].codigo,"ZULU");
	
	codigo[26].letra= '1';
	strcpy(codigo[26].codigo,"1");
	
	codigo[27].letra= '2';
	strcpy(codigo[27].codigo,"2");
	
	codigo[28].letra= '3';
	strcpy(codigo[28].codigo,"3");
	
	codigo[29].letra= '4';
	strcpy(codigo[29].codigo,"");
	
	codigo[30].letra= '5';
	strcpy(codigo[30].codigo,"5");
	
	codigo[31].letra= '6';
	strcpy(codigo[31].codigo,"6");
	
	codigo[32].letra= '7';
	strcpy(codigo[32].codigo,"7");
	
	codigo[33].letra= '8';
	strcpy(codigo[33].codigo,"8");
	
	codigo[34].letra= '9';
	strcpy(codigo[34].codigo,"9");
	
	codigo[35].letra= '0';
	strcpy(codigo[35].codigo,"0");
	
	codigo[36].letra= ' ';
	strcpy(codigo[36].codigo,"/");
	

}

/* void iniciararevlphabet () 
{
	codigo[0].letra= 'ALPHA';
	strcpy(codigo[0].codigo,"A");
	
	codigo[1].letra= 'BRAVO';
	strcpy(codigo[1].codigo,"B");
	
	codigo[2].letra= 'CHARLIE';
	strcpy(codigo[2].codigo,"C");
	
	codigo[3].letra= 'DELTA';
	strcpy(codigo[3].codigo,"D");
	
	codigo[4].letra= 'ECHO';
	strcpy(codigo[4].codigo,"E");
	
	codigo[5].letra= 'FOXTROT';
	strcpy(codigo[5].codigo,"F");
	
	codigo[6].letra= 'GOLF';
	strcpy(codigo[6].codigo,"G");
	
	codigo[7].letra= 'HOTEL';
	strcpy(codigo[7].codigo,"H");
	
	codigo[8].letra= 'INDIA';
	strcpy(codigo[8].codigo,"I");
	
	codigo[9].letra= 'JULIET';
	strcpy(codigo[9].codigo,"J");
	
	codigo[10].letra= 'KILO';
	strcpy(codigo[10].codigo,"K");
	
	codigo[11].letra= 'LIMA';
	strcpy(codigo[11].codigo,"L");
	
	codigo[12].letra= 'MIKE';
	strcpy(codigo[12].codigo,"M");
	
	codigo[13].letra= 'NOVEMBER';
	strcpy(codigo[13].codigo,"N");
	
	codigo[14].letra= 'OSCAR';
	strcpy(codigo[14].codigo,"O");
	
	codigo[15].letra= 'PAPA';
	strcpy(codigo[15].codigo,"P");
	
	codigo[16].letra= 'QUEBEC';
	strcpy(codigo[16].codigo,"Q");
	
	codigo[17].letra= 'ROMEO';
	strcpy(codigo[17].codigo,"R");
	
	codigo[18].letra= 'SIFRRA';
	strcpy(codigo[18].codigo,"S");
	
	codigo[19].letra= 'TANGO';
	strcpy(codigo[19].codigo,"T");
	
	codigo[20].letra= 'UNIFORM';
	strcpy(codigo[20].codigo,"U");
	
	codigo[21].letra= 'VICTOR';
	strcpy(codigo[21].codigo,"V");
	
	codigo[22].letra='WHISKEY';
	strcpy(codigo[22].codigo,"W");
	
	codigo[23].letra= 'X-RAY';
	strcpy(codigo[23].codigo,"X");
	
	codigo[24].letra= 'YANKEE';
	strcpy(codigo[24].codigo,"Y");
	
	codigo[25].letra= 'ZULU';
	strcpy(codigo[25].codigo,"Z");
	
	codigo[26].letra= '1';
	strcpy(codigo[26].codigo,"1");
	
	codigo[27].letra= '2';
	strcpy(codigo[27].codigo,"2");
	
	codigo[28].letra= '3';
	strcpy(codigo[28].codigo,"3");
	
	codigo[29].letra= '4';
	strcpy(codigo[29].codigo,"");
	
	codigo[30].letra= '5';
	strcpy(codigo[30].codigo,"5");
	
	codigo[31].letra= '6';
	strcpy(codigo[31].codigo,"6");
	
	codigo[32].letra= '7';
	strcpy(codigo[32].codigo,"7");
	
	codigo[33].letra= '8';
	strcpy(codigo[33].codigo,"8");
	
	codigo[34].letra= '9';
	strcpy(codigo[34].codigo,"9");
	
	codigo[35].letra= '0';
	strcpy(codigo[35].codigo,"0");
	
	codigo[36].letra= ' ';
	strcpy(codigo[36].codigo,"/");
	

}
*/
