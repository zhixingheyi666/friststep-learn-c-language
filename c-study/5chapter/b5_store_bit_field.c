#include <stdio.h>
#include "b5_store_bit_field.h"


int int_mask( unsigned starting_bit,unsigned ending_bit )
{
	int i, value_to_return = 0;
	for( i = 0; i < starting_bit + 1; i++ )
		if( i < starting_bit - ending_bit + 1)
			value_to_return |= 1 << i;
		else
			value_to_return <<= 1;
	printfb_int( value_to_return );
	return value_to_return;
}

int store_bit_field( int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit )
{
	original_value &= ~int_mask( starting_bit, ending_bit );
	value_to_store <<= ending_bit;
	value_to_store &= int_mask( starting_bit, ending_bit );
	return original_value | value_to_store;
}

