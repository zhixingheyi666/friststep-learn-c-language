#include <stdio.h>
#define FALSE 0;
#define TURE 1;


void book_beisu( int unit, int *head_ertts, int range )
{
	int j;
	for( j = 2; unit * j <= range ; j++ )
	{
		head_ertts += unit;
		*head_ertts = FALSE;
	}
}

int b4_ertts( int range )
{
	int i, j, cnt = 0, ertts[ range + 1 ];
	for( i = 0; i <= range; i++ )
		*( ertts + i ) = TURE;
	for( i = 2; i <= range ; i++ )
	{
		if( *( ertts + i ) == 1	)
		{	
			book_beisu( i, ertts + i, range );
			cnt++;
		}
	}
	for( i = 2, j = 1 ; i <= range ; i++ )
	{
		if( *( ertts + i ) == 1 )	
		{
			printf( "%d  ", i );
			if( j++ % 10 == 0 )
				printf( "\n" );
		}
	}
				printf( "\n" );
	return cnt;
 }
