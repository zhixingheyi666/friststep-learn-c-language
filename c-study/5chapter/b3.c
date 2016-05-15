#include <stdio.h>

void  printfb( unsigned int value )
{
	unsigned int i, bit=1, bit1;
	bit = bit << 8*sizeof( unsigned int ) - 1;
	//printf( "bit=%d\n", bit );
	for(  i = 0; i < 8*sizeof( unsigned int ) ; i++, bit = bit >> 1 )
	{
		bit1 = bit & value;
		bit == bit1 ? printf( "1" ) : printf( "0" );
		 ( i + 1 )%4 ? :printf( " " );// 每隔四个位，输出一个空格，方便阅读
	}
		printf( "\n" );
}
unsigned int reverse_bits( unsigned int value)
{
	unsigned int length, bit_dect = 1, bit_w = 1, value_r = 0;
	length= sizeof( value )*8;
	bit_dect <<= length - 1;
	while( length-- > 0 )
	{
		if( value & bit_dect )
			value_r |= bit_w;
	//	printfb( value_r );
		bit_dect >>= 1;
		bit_w <<= 1;
	}
	return value_r;
}


int main( void )
{
	unsigned int value, tt=1;
	puts( "Please input an unsigned int unmber:" );
	scanf( "%d", &value );
	printf("The arignal:\n");
	printfb( value );
	value = reverse_bits( value );
	printf( "The reverse_bit:\n" );
	//printf( "The reverse_bit:%d\n", 8*sizeof(unsigned int ) );
	printfb( value );
	// tt <<= 8*sizeof( unsigned int ) - 1;
	// printfb( tt );



}
