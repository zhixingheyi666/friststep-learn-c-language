#include <stdio.h>

void printfb_int( int value_printed )
{
	int i = 1 << 8 * sizeof( int ) - 2;
	value_printed < 0 ? printf( "1" ): printf( "0" );
	//int i = 1 << 8 * sizeof( int ) - 1;这样写就会发生错误，因为如果把1左移到符号位，i就变成最小的负数，变成负数之后再右移，符号位始终是1
	for( int j = 1; i != 0; i >>= 1)
	{
		//printf( "%d\n", i );
		( i & value_printed ) == 0 ? printf( "0" ) : printf( "1" );
		j++;
		if(j % 4 == 0 )
			printf( " " );
	}
		printf( "\n" );

		//printf( "%d\n", ( i= 1 << 31 ) >> 32 );printf( "%d\n", -1 >> 3);
				

}

