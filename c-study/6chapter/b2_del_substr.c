#include <stdio.h>

int del_substr( char *str, char const *substr )
{
	char *cmp_str, *cmp_substr;
	int cnt;// len_substr;
//	cmp_str = str;
//	cmp_substr = substr;
//	for( len_substr = 0; *cmp_substr != '\0'; len_substr++ )
//		;
	if( *substr == '\0' )
		return 1;
	for( cmp_str = str; *cmp_str != '\0'; cmp_str++ )
	{
		for( cnt = 0, cmp_substr = substr ; *cmp_substr == *( cmp_str + cnt ); )
		{
			cmp_substr++, cnt++;
			if( *cmp_substr == '\0' )
			{
			//	for( ; *( cmp_str + cnt ) != '\0'; cnt-- )
				if( *( cmp_str + cnt ) == '\0' )
					*cmp_str = '\0';
				else
					do
					{
						*cmp_str = *( cmp_str + cnt );
						cmp_str++;
					}while(  *( cmp_str + cnt ) != '\0' );
				*cmp_str = '\0';
				return 1;
			}
				
		}
	}
	return 0;
}
