#define FALSE 0
#define TURE 1
#define NUL '\0'
#define NULL 0

int lenstring( char *string )
{
	int len = 0;
	while( *string++ != NUL )
		len++;
	return len;
}
void reverse_string( char *string )
{
	char chg;
	int i, mid, len;
	len  = lenstring( string );
	mid = len/2 -1;
	for( i = 0; i <= mid; i++ )
	{
		chg = *( string + i);
		*( string + i ) = *( string + len - 1 - i );
		*( string + len - 1 - i ) = chg;	
	}
}
