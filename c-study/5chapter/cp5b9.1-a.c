/*
 * 将标准输入复制到标准输出，将所有大写字母转换成小写字母。注意，它依赖于
 * 这个事实：如果参数并非大写字母，tolower函数将不修改它的参数，直接返回它
 * 的值。
 */
#include <stdio.h>
#include <ctype.h>

int
main( void )
{
	int ch;

	while( (ch = getchar()) != EOF)
	{
		if( ch >= 'A' && ch <= 'Z' )
			ch += 'a' - 'A';
		putchar( tolower( ch ) );
	}
}
