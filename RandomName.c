#include <stdio.h>
#include <stdlib.h>
#include "RandomName.h"

//TanÄ±mlÄ± sabitler. Karakter dizileri iÃ§in gerekli.
#define ROW 2
#define COLUMN 15

int main(int argc, char *argv[]){ 
	
	int i;                   //sayaÃ§ gÃ¶revindeki deÄŸiÅŸken
	srand(time(NULL));		 //rasgele fonksiyonunu tamamlayan kod.
	
	char *adj[ROW][COLUMN]={
		{"iyi","kÃ¶tÃ¼","gÃ¼zel","Ã§irkin","kÄ±rmÄ±z","mavi","siyah","tuzlu","saÄŸlam","Ã§Ã¼rÃ¼k","hÄ±zlÄ±","etkili","yavaÅŸ","akÄ±llÄ±","kurnaz"},
		{"good","bad","beautiful","ugly","red","blue","black","salty","brave","quick","effective","slow","creative","intelligent","shiny"}
	};

	char *noun[ROW][COLUMN]={
		{"insan","aslan","saat","ÅŸeker","pamuk","masa","araba","cetvel","kalem","monitÃ¶r","piyano","gitar","dÃ¼nya","gÃ¼neÅŸ","eldiven"},
		{"person","lion","leopard","table","world","clock","sun","arrow","book","machine","eagle","rabbit","terminator","university","bus"}
	};
	
	Parameter parameters;
	Parameter *pt=&parameters;
    makeParameter(pt,argc,argv);
	   
	char ad[100],name[25];
    if(parameters.err){
		error();
		return 0;
	}
	for(i=1;i<=parameters.repeat;i++){
		strcpy(ad,adj[parameters.lang][rand()%15]);
		strcpy(name,noun[parameters.lang][rand()%15]);
		strcat(ad," ");
		strcat(ad,name);
		if(control(ad)){
			printf("%s",ad);
		}
		else{
			i--;
			printf("%stekrarlanamaz->\t ",ad);
		}	
		memset(&ad[0], 0, sizeof(ad));  //ad isimli listeyi temizleyen kod.
	}
	
	
	return 0;
}

