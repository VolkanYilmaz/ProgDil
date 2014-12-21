#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char isim[][30] ={
	"kedi",
	"insan",
	"deniz",
	"masa",
	"dolap",
	"bilgisayar",
	"kapi",
	"pencere",
	"hafta",
	"gece",
	"gunduz",
	"marti",
	"kazak",
	"sarisin",
	"sahil",
	"merdiven",
	"yorgan",
	"yol",
	"araba",
	"agac",
	"yaprak",
	"dal",
	"adam",
	"konuk",
	"sabah",
	"koca",
	"kadin",
	"sıra",
	"öğrenci",
	"yatak"
};
char sifat[][30]= {
	"iyi",
	"guzel",
	"hizli",
	"yavas",
	"yakisikli",
	"mert",
	"bir",
	"cimri",
	"kel",
	"masmavi",
	"ucan",
	"kaliteli",
	"yarim",
	"bu",
	"şu",
	"kırmızı",
	"pahalı",
	"ilginç",	
	"uzun",
	"kısa",
	"yamuk",
	"ucuz",
	"tuhaf",
	"çirkin",
	"şişman",
	"zayıf",
	"eski",
	"yeni",
	"sivri",
	"nazik"	
};
char name[][30] = {
	"baby",
	"child",
	"man",
	"main",
	"house",
	"sea",
	"car",
	"computer",
	"pencil",
	"pen",
	"doctor",
	"window",
	"line",
	"cat",
	"human",
	"beach",
	"bed",
	"woman",
	"night",
	"morning",
	"tree",
	"door",
	"student",
	"teacher",
	"table",
	"week",
	"day",
	"plane",
	"bag",
	"shoes"
};
char adjective[][30] = {
	"good",
	"beatiful",
	"long",
	"small",
	"nice",
	"kind",
	"new",
	"micke",
	"bad",
	"slow",
	"green",
	"blue",
	"hard",
	"old",
	"slow",
	"fast",
	"interesting",
	"clever",
	"bent",
	"real",
	"sharp",
	"thin",
	"fat",
	"easy",
	"hard",
	"expensive",
	"cheap",
	"ugly",
	"half",
	"red"
};
	
char trgenerator(char *kelime);
char enggenerator(char *kelime);
int check(char *kelime, char list[][30]);

int main(int argc, char *argv[])
{
   	char *language = argv[1];
	int again = atoi(argv[2]);
	char wordlist[30][30];
	char kelime[30];
	srand(time(NULL));
	if(strcmp(language, "eng") == 0)
	{	
		int i=0;
		while(i<again){
			enggenerator(kelime);	
			int state = check(kelime,wordlist);
			if(state == 1)
			{
				puts(kelime);
				strcat(*wordlist,kelime);
			}
			else
				continue;
			i++;
		}
	}
	else{
		int j=0;
		while(j<again)
		{
			trgenerator(kelime);
			int state=check(kelime,wordlist);
			if(state == 1)
			{
				puts(kelime);
				strcat(*wordlist,kelime);
			}
			else
				continue;
			j++;
		}	
	}	
}

char trgenerator(char *kelime)
{	
	kelime[0]=0;
	strcat(kelime, sifat[rand()%30]);
	strcat(kelime, " ");
	strcat(kelime, isim[rand()%30]);
	return *kelime;
}

char enggenerator(char *kelime)
{
	kelime[0]=0;
	strcat(kelime, adjective[rand()%30]);
	strcat(kelime, " ");
	strcat(kelime, name[rand()%30]);
	return *kelime;
}

int check(char *kelime, char list[][30])
{
	int i=0;	
	for(i; i<30; i++)
	{
		int state = strcmp(list[i],kelime);
		if(state == 0)
			return 0;
		else
			return 1;
	}	
}
