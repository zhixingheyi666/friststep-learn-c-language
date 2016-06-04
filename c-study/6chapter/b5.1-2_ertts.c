#include <stdio.h>
#include <limits.h>
#include "6.1chapter.h"
#define FALSE 0;
#define TURE 1;


void book_beisu1( int i, char *ertts, int len )
{
	int sub_num = i + ( 2*i + 1 ) ;
	while( sub_num <= len )
	{
		clear_bit( ertts, sub_num );
		sub_num +=  2 * i + 1;
	}
}

int b4_ertts( int range )
{
	int i, j, cnt = 0, len = ( range - 1 ) / 2;
//;;	printf( "len = %d\n ", len );
//;;	printf( "sizeof(char) = %d, CHAR_BIT = %d\n ", sizeof( char ), CHAR_BIT );
//;;	char test_char = 255; printf( "%d\n", test_char );
	char ertts[ ( len + 1 ) / CHAR_BIT ];
//;;	printf( "the length of char is %d\n", ( len + 1 ) / CHAR_BIT );
	for( i = 0; i <= len; i++ )
		set_bit( ertts, i);
/*
;;;	for( i = 0; i <= len; i++ )
	{	
		i % 20 == 0 ? printf( "\n" ) : 0==0 ; 
        	i % 200 == 0 ? printf( "\n\n" ) : 0==0 ;
	       	printf( "%d ", test_bit( ertts, i )); 
      }
;;;   printf( "\n\n" );
*/
       for( i = 1; i <= len ; i++ )
	{
/**/		if( test_bit( ertts, i ) == 1 )
		{	
			book_beisu1( i, ertts, len );
			cnt++;
		}
/**/
//;;		clear_bit( ertts, 2*i );
	}
/*     
;;;	for( i = 0; i <= len; i++ )
	{	
		i % 20 == 0 ? printf( "\n" ) : 0==0 ; 
       	 	i % 200 == 0 ? printf( "\n\n" ) : 0==0 ;
       		printf( "%d ", test_bit( ertts, i )); 
      	}
;;;	printf( "\n\n" );
*/
       
	printf( "2 " );
	for( i = 1, j = 2 ; i <= len ; i++ )
	{
		if( test_bit( ertts, i ) == 1 )	
		{
			printf( "%d  ", 2*i+1 );
			if( j++ % 20 == 0 )
				printf( "\n" );
		}
	}
				printf( "\n" );
	return cnt+1;
 }
