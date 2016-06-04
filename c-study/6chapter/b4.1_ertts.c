#include <stdio.h>
#define FALSE 0;
#define TURE 1;


void book_beisu1( int i, char *head_ertts, int len )
{
	int j;
	for( j = 1; i + ( 2 * i + 1 ) * j <= len ; j++ )
	{
		head_ertts +=  2 * i + 1;
		*head_ertts = FALSE;
	}
}

int b4_ertts( int range )
{
	int i, j, cnt = 0, len = ( range - 1 ) / 2;
	char ertts[ len + 1 ];
	for( i = 0; i <= len; i++ )
		*( ertts + i ) = TURE;
	for( i = 1; i <= len ; i++ )
	{
		if( *( ertts + i ) == 1	)
		{	
			book_beisu1( i, ertts + i, len );
			cnt++;
		}
	}
	for( i = 1, j = 1 ; i <= len ; i++ )
	{
		if( *( ertts + i ) == 1 )	
		{
			printf( "%d  ", 2*i+1 );
			if( j++ % 10 == 0 )
				printf( "\n" );
		}
	}
				printf( "\n" );
	return cnt;
 }
