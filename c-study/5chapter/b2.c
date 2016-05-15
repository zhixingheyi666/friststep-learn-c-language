/*
 *非字母字符不变，字母修改为距其13个位置的字母
 *
 */
#include <stdio.h>
int main( void )
{
	int ch;
	while( ( ch=getchar() )!=EOF )
	{
		if( ch >='A' && ch <= 'Z' )
			if( ( ch += 13 ) > 'Z' )
				ch -= 26;
		/*
		 *答案是通过取余数来实现的，ch += 13; ch %= 26;
		 *
		 * */
		if( ch >= 'a' && ch <= 'z' )
			if( ( ch += 13 ) > 'z' )
				ch -= 26;
		putchar( ch );
	}
}
