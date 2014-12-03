#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{	
    int i;
    int first = 0;
    char *p = argv[1];
    int last = strlen(p)-1;
    
    while( p[first] == '_')
	{
    	first++;
    }
    
    while( p[last] == '_')
	{
    	last--;
    }
     
    for(i=first; i<last; i++)
    {  
        if( p[i] == '_' )
            p[i] = ' ';    
    }  
    printf( " %s \n" , p); 
	return 0;     
}
