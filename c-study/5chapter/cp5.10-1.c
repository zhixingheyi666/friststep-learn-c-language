#include <stdio.h>
void  printfb( int b )
{
	int i, bit, bit1;
	for(  i = 0, bit = 1; i < 8*sizeof( int ); i++, bit = bit << 1 )
	{
		bit1 = bit & b;
		bit == bit1 ? printf( "1" ) : printf( "0" );
	}
		printf( "\n" );
}

void main( void )
{
	int b;
	for( b = -10; b < 10; ++b )
		printfb( b );
	printfb( -25 );
}
