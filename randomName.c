#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Random{
	char language;
	int  adet;
}RandomName;
int main(void){
	
	char *word_list[100];
	
	char *isim [100]={"kedi","insan","deniz","masa","dolap","bilgisayar",
			"kapi","pencere","hafta","gece","gunduz","marti","kazak",
			"sarisin","sahil","merdiven","ahmet","yol","araba","agac",
			"yaprak","dal","adam","konuk","ahmet","koca","kadin"};
	
	char *sifat[100]= {"iyi","guzel","hizli","yavas","yakisikli","mert",
			"cimri","kel","masmavi","ucan","kac","yarim","bu","su"};
		
	char *name[100] = {"baby","child","man","main","house","sea","car",
			"computer","pencil","pen","doctor","window","line"};
			
	char *adjectives[100] = {"good","beatiful","long","small","nice",
			"micke","bad","slow","green","blue","hard"};
			
	scanf("%s", RandomName.language);
	
	
	
	if(RandomName.language == "eng" ){
		 int name_boyut = strlen(name) ;
		 int adjective_boyut = strlen(adjectives);
		int i=0;		
		while( i < RandomName.adet ){
			int index_name = rand(0,name_boyut-1);
			int index_adjectives = rand(0,adjective_boyut-1);
			char kelime = adjectives[index_adjectives] + " " + name[index_name];
			printf("\n");
			
			if(checkWord(kelime)){
				word_list.append(kelime);
				i++;
				printf(kelime);
			}
			
		}
	}
		
	else{
		int isim_boyut = strlen(isim);
		int sifat_boyut = strlen(sifat);
		
		int j=0;
		while(j < RandomName.adet){
			int index_isim = rand(0,isim_boyut);
			int index_boyut = rand(0,sifat_boyut);
			char kelime2 = sifat[index_sifat] + " " + isim[index_isim];
			printf("\n");
			
			if(checkWord(kelime)){
				word_list.append(kelime2);
				j++;
				printf(kelime);
			}
		}
	}
		
		void checkWord( char kelime){
			
			int i=0;
			
			for(i;i<strlen(word_list);i++){
				if(word_list[i] == kelime)
					return false ;
				
				else
					return true;
			}
			
		}
	

	return 0;
}
