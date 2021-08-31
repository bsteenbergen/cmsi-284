#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[] ) {
    char name[25];
    printf( "Enter your name: " );
    gets( name );
    printf( "\n\n Hello, %s hope you're having a phenomenal day\n\n", name );
    exit( 0 );
    
   }