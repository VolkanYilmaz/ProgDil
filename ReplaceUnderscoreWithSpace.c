#include <stdio.h>
#include <string.h>

struct ReplaceUnderscoreWithSpace
{
char metin[1000];
}UnderScore;

int main(void)
{
	
    
    scanf( "%s" , UnderScore.metin );
    printf( "\n\n" );
    int i;
    int first = 0;
    int last = strlen(UnderScore.metin)-1;
    
    while( UnderScore.metin[first] == '_' ){
    	first++;
    }
    
    while( UnderScore.metin[last] == '_' ){
    	last--;
    }
     
    for( i=first ; i < last ; i++ )
    {
        
        if( UnderScore.metin[i] == '_' )
            UnderScore.metin[i] = ' '; 
       
    }  
    printf( " %s" , UnderScore.metin ); 
	return 0;     
}
