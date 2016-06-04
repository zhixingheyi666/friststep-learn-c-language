#include <stdio.h>
#include <limits.h>
#include "6chapter.h"
#define FALSE 0;
#define TURE 1;


void book_beisu1( unsigned long i, char *ertts, unsigned long len )
{
	unsigned long sub_num = i + ( 2*i + 1 ) ;
	while( sub_num <= len )
	{
		clear_bit( ertts, sub_num );
		sub_num +=  2 * i + 1;
	}
}

unsigned long b4_ertts( unsigned long range )
{
	unsigned long i, j, cnt = 0, len = ( range - 1 ) / 2;
//;;	printf( "len = %lu\n ", len );
//;;	printf( "sizeof(char) = %d, CHAR_BIT = %d\n ", sizeof( char ), CHAR_BIT );
	for( i = 1,j = 1; i <= 63; i++ )
		j=2*j;
;;	printf( "sizeof( unsigned long ) = %d,MAX unsigned long  = %lu\n ", sizeof( unsigned long ), j );
//;;	char test_char = 255; printf( "%d\n", test_char );
	char ertts[ ( len + 1 ) / CHAR_BIT ];
//;;	printf( "the length of char is %lu\n", ( len + 1 ) / CHAR_BIT );
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
		if( test_bit( ertts, i ) == 1 )
		{	
			book_beisu1( i, ertts, len );
			cnt++;
		}
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
			printf( "%lu  ", 2*i+1 );
			if( j++ % 20 == 0 )
				printf( "\n" );
		}
	}
				printf( "\n" );
	return cnt+1;
 }
