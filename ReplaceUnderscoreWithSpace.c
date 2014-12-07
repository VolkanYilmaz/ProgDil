#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{	
    int i;
    int first = 0;
    char *text = argv[1];
    int last = strlen(text)-1;
    
    while( text[first] == '_')
    {
    	first++;
    }
    
    while( text[last] == '_')
    {
    	last--;
    }
     
    for(i=first; i<last; i++)
    {  
        if( text[i] == '_' )
            text[i] = ' ';    
    }  
    printf( " %s \n" , text); 
	return 0;     
}
