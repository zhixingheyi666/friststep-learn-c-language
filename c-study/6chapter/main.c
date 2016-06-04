#include <stdio.h>
#include "6chapter.h"

int main( void )
{
	
	puts( "请输入序号选择函数：\n");
	int xuanxiang = 0;
	scanf( "%d", &xuanxiang );
	char str[100], chars[100], * find_result;
	str[0] = '\0', chars[0] = '\0';
	switch( xuanxiang )
	{
		case 1:

			puts( "Input source:\n");
			scanf( "%s", str );
			puts( "Input chars:\n");
			scanf( "%s", chars );
			find_result = find_char( str, chars );
	///find_result = str + 1;	
			printf( "Source:%s\n", str );
			printf( "Chars:%s\n", chars);
			printf( "Result:%s\n", find_result );
		break;
		case 2:
			puts( "Input str:\n");
			char str[100], substr[100], status = 0; //借此研究一下 main函数中两个str作用域的问题。
			scanf( "%s", str );
			puts( "Input substr:\n");
			scanf( "%s", substr );
			printf( "The str before del:%s\n", str );
			printf( "Substr:%s\n", substr );
	///find_result = str + 1;	
			status = del1_substr( str, substr);
			printf( "The str after del:%s\n", str );
			if( status == 1 )
				puts( "Del success!" );
			else
				puts( "Not found!" );
		break;
		case 3:
			puts( "Input string to reverse:\n");
//			char str[100]; 
			scanf( "%s", str );
			printf( "The str before reversing:%s\n", str );
			reverse_string( str );
			printf( "The str after reversing:%s\n", str );
		break;
		case 4:
			puts( "Input Range:\n");
			unsigned long cnt, range;
			scanf( "%lu", &range);
			printf( "The Range is %lu\n", range );
			cnt = b4_ertts( range );
			printf( "The number of zhishu in %lu is %lu\n", range, cnt );
		break;
		case 6:
			puts( "Input Range:\n");
			unsigned long cnt1, range1, jiange1;
			scanf( "%lu", &range1 );
			puts( "Input jiange:\n" );
			scanf( "%lu", &jiange1);
			printf( "The Range is %lu\n", range1 );
			printf( "The jiange is %lu\n", jiange1 );
			cnt1 = b6_ertts( range1, jiange1 );
			printf( "The number of zhishu in %lu is %lu\n", range1, cnt1 );
		break;
		default :
			puts( "错误的序号！！" );
	}
}

