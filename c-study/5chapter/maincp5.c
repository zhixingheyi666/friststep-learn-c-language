#include "b5_store_bit_field.h"
#include "printfb_int.c"

int main( void )
{
	puts( "请输入序号选择函数：\n");
	printf( "1，向整数指定位写入预设值\n\
2，操作位数组\n\
3，以二进制形式打印一个整数\n");

	int xuanxiang = 0;
	scanf( "%d", &xuanxiang );
	switch( xuanxiang )
	{
		case 1:
			printf( "请按如下格式和顺序输入参数：\
\"original_value, value_to_store, starting_bit, ending_bit\"\n"); 
			int original_value, value_to_store ;
			unsigned starting_bit, ending_bit;
			scanf( "%x,%x,%u,%u", &original_value, &value_to_store, &starting_bit, &ending_bit );
			printf( "The bits of original_value is : %x\nvalue_to_store is : %x\nstarting_bit=%u, ending_bit=%d\n", original_value , value_to_store, starting_bit, ending_bit );
			printfb_int( original_value );
			printfb_int( value_to_store );
			original_value = store_bit_field( original_value, value_to_store, starting_bit, ending_bit);	
			printfb_int( original_value );
			printf( "The result is : %x\n", original_value );
		break;
		case 3:
			printf( "请按如下格式和顺序输入参数：\
\"value_printed_or_start, number_printed\"\n"); 
			int value_printed_or_start, number_printed;
			scanf( "%d,%d", &value_printed_or_start, &number_printed );
			printf( "%d\n", number_printed );printf( "%d\n",value_printed_or_start );
			while( number_printed-- > 0)
			//for( number_printed = 10 ; number_printed > 0; number_printed -= 1 )
				printfb_int( value_printed_or_start++ );
				//int i = -1, j = 1 << 31;
				//printfb_int( j );printfb_int( i );
				//i >>= 1, j= j >> 1;
				//printf( "i=%d, j=%d\n", i >> 100, j >> 32);
	}
}
