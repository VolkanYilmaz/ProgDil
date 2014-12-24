//KÃ¼tÃ¼phaneleri Ã§aÄŸrÄ±sÄ±
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Bool veri tÃ¼rÃ¼nÃ¼n gerÃ§eklenmesi
typedef enum{false,true} bool;

//Parametre yapÄ±sÄ±nÄ±n gerÃ§eklenmesi. Bu yapÄ± fonksiyon parametrelerini (dil, tekrar ve hata) tutuyor.
typedef struct Parameter{
	int lang;    
	int repeat;
	int err;
}Parameter;

//clear metodunun prototipi
void clear();

//Main metoddaki parametre yapÄ±sÄ±nÄ±n deÄŸiÅŸkenlerine deÄŸer atamak iÃ§in kullandÄ±ÄŸÄ±mÄ±z metod.
void makeParameter(Parameter *pt,int n,char **str){
	pt->lang=0;
	pt->repeat=1;
	pt->err=0;	
	if(n>1){
		int i;
		for(i=1;i<n;i++){
			char *p=str[i];
			p++;
			if(*p=='t' && *(p+1)=='r')
				pt->lang=0;
			else if(*p=='e' && *(p+1)=='n')
				pt->lang=1;
			else if(*p=='c' && *(p+1)=='l' && *(p+2)=='r'){
				clear();
				pt->repeat=0;
			}
			else if(!isdigit(*p))
				pt->err=1;
			else{
				int r=0;
				while(isdigit(*p)){				
					r=r*10+(int)*p-48;
					p++;
				}
				pt->repeat=r;			
			}
		}
	}

}

//ÃœrettiÄŸimiz ismin daha Ã¶nce Ã¼retilip Ã¼retilmediÄŸini kontrol eden metod
bool control(char *name){
	FILE *fr,*fw;
	fr=fopen("Names","r");
	fw=fopen("Names","a");
	size_t len;
	char *line=NULL;
	char read;
    bool result=true;
	strcat(name,"\n");
	while ((read = getline(&line, &len, fr)) != EOF) {
		if(!strcmp(line,name))
				result=false;
	}
	fprintf(fw,"%s",name);
	fclose(fr);
	fclose(fw);
	return result;
}

//Ä°simlerin arÅŸivlendiÄŸi dosyayÄ± temizleyen metod
void clear(){
	FILE *fp;
	fp=fopen("Names","w");
	fclose(fp);
}

//Komut satÄ±rÄ±nda yanlÄ±ÅŸ girdi durumunda uyaran ve programÄ± sonlandÄ±ran metod.
void error(){
	printf("%s","HatalÄ± fonksiyon Ã§aÄŸrÄ±sÄ±. Program sonlandÄ±rÄ±lÄ±yor.");
}
