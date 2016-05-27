#include <stdio.h>
///#define NULL 0

char *find_char( char const *source, char const *chars )
{
	int s = 0, c = 0;
///;;printf( "%s\n", source + s );
	while( *( source + s ) != '\0' )
	{
		while( *( chars + c ) != '\0' )		
			if( *( chars + c ) == *( source + s ) )
		 		{
				///;;printf( "%s\n", source + s );
					return source + s ; break; }
			else
				c++;
	///;;printf( "%s\n", source + s );
		s++;
		c = 0;
	}
	return NULL;
}
