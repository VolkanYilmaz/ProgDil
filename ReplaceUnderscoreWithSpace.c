#include <stdio.h>
#include <string.h>

struct ReplaceUnderscoreWithSpace
{
char metin[100];
}UnderScore;

int main(void)
{
	
    printf("Metni giriniz: " );
    scanf("%s" , UnderScore.metin);
    printf("\n\n");
    int i;
    int boyut =strlen(UnderScore.metin);
     
    for(i=1 ; i < boyut-1 ; i++)
    {
        
        if(UnderScore.metin[i] == '_')
            UnderScore.metin[i] = ' '; 
       
    }  
    printf("Yeni metin: %s" , UnderScore.metin); 
	return 0;     
}
