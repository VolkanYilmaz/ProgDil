#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define size 50

	char isim[][20] ={"kedi","insan","deniz","masa","dolap","bilgisayar",
			"kapi","pencere","hafta","gece"	};
	
	char sifat[][20]= {"iyi","guzel","hizli","yavas","yakisikli","mert",
			"cimri","kel","masmavi"};
		
	char name[][20] = {"baby","child","man","main","house","sea","car",
			"computer","pencil","pen"};
			
	char adjectives[][20] = {"good","beatiful","long","small","nice",
			"micke","bad","slow","green","blue"};

 int CheckWord(char* kelime);
 void NewTrWord(char* tr );
 void NewEngWord(char* eng );
 
 char WordList[size]={};
 int main(int argc, char* argv[]){
	char *language = argv[1];
	int repeat = argc;
	
	char kelime[size];
	
	if(strcmp(language, "eng") ==0){
		 
		int i=0;		
		while( i < repeat )
		{
			srand(time(NULL));
			
			
			printf("\n");

			int state = CheckWord(kelime);
				if(state == 0)
					continue;
				else{
					NewTrWord(kelime);
					strcat(WordList,kelime);
					puts(kelime);
				}
			i++;
		}
	}
		
	else{
	
		int j=0;
		while(j < repeat)
		{
			srand(time(NULL));
			printf("\n");
			
			int state = CheckWord(kelime);
				if(state == 0)
					continue;
				else{
					NewEngWord(kelime);
					strcat(WordList,kelime);	
					puts(kelime);
				}
			j++;	
		}
	}
	
}
	int CheckWord(char* kelime)
	{
		int k=0;
		for( k ; k < size ; k++)
		{
			if(strcmp(WordList,kelime)==0)
				return 0;
			else
				return 1;
	    }
	}	

		
	void NewTrWord(char* tr ){
		tr[0]=0;
		strcat(tr,sifat[(rand()%sizeof(sifat))]);
		strcat(tr,isim[rand()%sizeof(isim)]);
		return;
	}
	
	void NewEngWord(char* eng ){
		eng[0]=0;
		strcat(eng,adjectives[(rand()%sizeof(adjectives))]);
		strcat(eng,isim[rand()%sizeof(name)]);
		return;
	}	
			
	
	

	
