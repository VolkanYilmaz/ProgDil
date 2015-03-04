#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "RandomName.h"

//Tanımlı sabitler. Karakter dizileri için gerekli.
#define ROW 2
#define COLUMN 15

int main(int argc, char *argv[]){ 
	setlocale(LC_ALL,"turkish");
	int i;                   //sayaç göevindeki değişken
	srand(time(NULL));		 //rasgele fonksiyonunu tamamlayan kod.
	
	const char *adj[ROW][COLUMN]={
		{"sevimlisizlik",
		"iyi",
		"kötü",
		"güzel",
		"çirkin",
		"kırmızı",
		"mavi",
		"siyah",
		"tuzlu",
		"sağlam",
		"çürük",
		"hızlı",
		"etkili",
		"yavaş",
		"akıllı",
		"kurnaz"},
		{"good",
		"bad",
		"beautiful",
		"ugly",
		"red",
		"blue",
		"black",
		"salty",
		"brave",
		"quick",
		"effective",
		"slow",
		"creative",
		"intelligent",
		"shiny"}
	};

	const char *noun[ROW][COLUMN]={
		{"insan",
		"aslan",
		"saat",
		"şeker",
		"pamuk",
		"masa",
		"araba",
		"cetvel",
		"kalem",
		"monitör",
		"piyano",
		"gitar",
		"dünya",
		"güneş",
		"eldiven"},
		{"person",
		"lion",
		"leopard",
		"table",
		"world",
		"clock",
		"sun",
		"arrow",
		"book",
		"machine",
		"eagle",
		"rabbit",
		"terminator",
		"university",
		"bus"}
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

