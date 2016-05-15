#include <stdio.h>
void main( void )
{	int a = 10, b = -25, c = 0, d = 3, e = 20, h = 0xFFFFF;
//	if( a >= 1 && a <=10 )
		b = b / 2;
		b = b / 2;
		b = b / 2;
//		h = h >> 3;
		int so = sizeof b;
		int intt = sizeof( int );
		printf( "In range,b=%d\n",b );
		printf( "In range,h=%d\n",h );
		printf( "Out of range,sizeof=%d,sizeof(int)=%d\n", so, intt );
}
