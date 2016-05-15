#include <limits.h>
#include "bitarray.h"

/*
 *位数组内部实现函数
 *
 */


unsigned  char_num( unsigned bit_number )
{
	return bit_number/CHAR_BIT;
}

unsigned  charbit_num( unsigned bit_number )
{
	return bit_number%CHAR_BIT;
}

void set_bit( char bit_array[], unsigned bit_number )
{
	bit_array[ char_num( bit_number ) ] |= 1 << charbit_num( bit_number ) ;
}

void clear_bit( char bit_array[],unsigned bit_number )
{
	bit_array[ char_num( bit_number ) ] &= ~( 1 << charbit_num( bit_number ) );
}

void assign_bit( char bit_array[], unsigned bit_number, int value )
{
	if( value != 0 )
		set_bit( bit_array, bit_number );  //可不可以 set_bit( bit_number ), return;
	else
		clear_bit( bit_array, bit_number );

}

int test_bit( char bit_array[], unsigned bit_number )
{
	return  bit_array[ char_num( bit_number ) ] & 1 << charbit_num( bit_number ) != 0;
}

