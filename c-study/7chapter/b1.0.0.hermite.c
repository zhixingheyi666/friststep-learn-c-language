#include "7chapter.h"

int hermite( int n, int x)
{
	int her;
	if( n >= 2)	
		her = 2 * x * hermite( n - 1, x) - 2 * ( n - 1 ) * hermite( n -2, x );	
	else if( n == 1 )
		her = 2 * x;
	else
		her = 1;
	return her;
}
