#include <limits.h>

/*
 *位数组内部实现函数
 *
 */


int  char_num( int bit_number )
{
	return bit_number/CHAR_BIT;
}

int  charbit_num( int bit_number )
{
	return bit_number%CHAR_BIT;
}

void set_bit( char bit_array[], int bit_number )
{
	bit_array[ char_num( bit_number ) ] |= 1 << charbit_num( bit_number ) ;
}

void clear_bit( char bit_array[],int bit_number )
{
	bit_array[ char_num( bit_number ) ] &= ~( 1 << charbit_num( bit_number ) );
}

void assign_bit( char bit_array[], int bit_number, int value )
{
	if( value != 0 )
		set_bit( bit_array, bit_number );  //可不可以 set_bit( bit_number ), return;
	else
		clear_bit( bit_array, bit_number );

}

int test_bit( char bit_array[], int bit_number )
{
	return  ( bit_array[ char_num( bit_number ) ] & 1 << charbit_num( bit_number ) ) != 0;
}

