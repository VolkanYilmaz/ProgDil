#include<stdio.h>
#include<stdlib.h>
Struct Random{
	Char language;
	int  adet;
}RandomName;
int main(void){
	
	char word_list[];
	
	char isim [27]={"kedi","insan","deniz","masa","dolap","bilgisayar",
			"kapi","pencere","hafta","gece","gunduz","marti","kazak",
			"sarisin","sahil","merdiven","ahmet","yol","araba","agac",
			"yaprak","dal","adam","konuk","ahmet","koca","kadin"};
	
	char sifat[14]= {"iyi","guzel","hizli","yavas","yakisikli","mert",
			"cimri","kel","masmavi","ucan","kac","yarim","bu","su"};
		
	char name[13] = {"baby","child","man","main","house","sea","car",
			"computer","pencil","pen","doctor","window","line"};
			
	char adjectives[11] = {"good","beatiful","long","small","nice",
			"micke","bad","slow","green","blue","hard"};
	
	char sozluk[]= {"tr" =>(isim,sifat),
					"end" =>(name,adjective)
					};
					
	int isim_boyut = strlen(sozluk[RandomName.language[0]]) ;
	int sifat_boyut = strlen(sozluk[RandomName.language[1]]);
	
	int i=0;
	while( i < RandomName.adet ){
		int index_isim = rand( 0,isim_boyut-1 );
		int index_sifat = rand ( 0,sifat_boyut);
		char kelime = sozluk[RandomName.language[1]][index_sifat] + " " + sozluk[RandomName.language[0][index_isim]] + "\n" ;
		
		char x = checkWord(kelime);
		
		if(x){
			Wordlist.append[kelime];
			i++;
			return kelime;
			
		}
	}
	
	
}

void checkWord(kelime){
	
	if( word_list == kelime ){
		return false;
	}
	else{
		return true;
	}
	
}
