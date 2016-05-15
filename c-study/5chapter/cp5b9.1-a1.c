/*
 * 编写一个输入ASCII字符，输出为相应的ASCII码的函数
 *
 *
 *
 */
#include <stdio.h>
#include <ctype.h>

int
main( void )
{
	int ch;

	while( (ch = getchar()) != EOF)
	{
		printf( "%c----%d----%x\n", ch, ch, ch );
	
	}
}
