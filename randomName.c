#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define size 10
struct Random{
	char language;
	int  adet;
	char secenek;
}RandomName;
int main(void){
	
	bool checkWord();
	char word_list[size][100];
	
	char isim[size][100] ={"kedi","insan","deniz","masa","dolap","bilgisayar",
			"kapi","pencere","hafta","gece"	};
	
	char sifat[size][100]= {"iyi","guzel","hizli","yavas","yakisikli","mert",
			"cimri","kel","masmavi"};
		
	char name[size][100] = {"baby","child","man","main","house","sea","car",
			"computer","pencil","pen"};
			
	char adjectives[size][100] = {"good","beatiful","long","small","nice",
			"micke","bad","slow","green","blue"};
	
	//char str[10];
	//str = "eng";		
	scanf("%s", RandomName.language);
	 

	if(RandomName.language == 'eng' ){
		 //int name_boyut = strlen(name) ;
		 //int adjective_boyut = strlen(adjectives);
		int i=0;		
		while( i < RandomName.adet ){
			srand(time(NULL));
			int index_name = rand()%10;
			int index_adjectives = rand()%10;
			
			char kelime [50];
			strcpy (kelime, adjectives[index_adjectives]);
			strcat(kelime,  name[index_name]);
			
			//char s1[100] = adjectives[index_adjectives];
			//char s2[100] =  name[index_name];
			//char kelime = strcat( s1,s2);
			printf("\n");
			
			
			bool kelime2 = checkWord(kelime) ;
			
			if(kelime2){
				word_list.append(kelime);
				i++;
				printf(kelime);
			}
			
		}
	}
		
	else{
		//int isim_boyut = strlen(isim);
		//int sifat_boyut = strlen(sifat);
		
		int j=0;
		while(j < RandomName.adet){
			
			int index_isim = rand()%10;
			int index_sifat = rand()%10;
			char kelime3 [50];
			strcpy (kelime3, sifat[index_sifat]);
			strcat(kelime3,  isim[index_isim]);
			
			printf("\n");
			
			if(checkWord(kelime)){
				word_list.append(kelime2);
				j++;
				printf(kelime);
			}
		}
	}
	return 0;
}
		
		bool checkWord( char kelime){
			
			int i=0;
			
			for(i;i<strlen(word_list);i++){
				if(strcmp(word_list[i] , kelime)== 0)
					return false ;
				
				else
					return true;
			}
			
		}
	

	
