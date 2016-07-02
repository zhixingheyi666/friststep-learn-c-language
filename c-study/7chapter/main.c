#include "7chapter.h" 

int main( void ) 
{
	
	puts( "请输入序号选择函数：");
	int xuanxiang = 0;
	scanf( "%d", &xuanxiang );
	switch( xuanxiang )
	{
		case 1:
			puts( "\nFunction to calculate Hn(x),Hermite Polynomials, 厄密多项式");
			puts( "Please input argument 'n' and 'x' :" );
			int n, x, her;
			scanf( "%d%d", &n, &x );
			printf( "n:%d\nx:%d\n", n, x );
			her = hermite( n, x);
			printf( "Hn(x) = %d \n", her );
		break;
		case 2:
			puts( "\nFunction to calculate the greatest common divisor of two integer number m, n." );
			puts( "Please input argument 'm' and 'n' :" );
			int m0, n0, gcd0;
			scanf( "%d%d", &m0, &n0 );
			printf( "m:%d\nn:%d\n", m0, n0 );
			gcd0 = gcd( m0, n0);
			printf( "The Greatest Common Divisor of %d and %d is: %d .\n", m0, n0, gcd0 );
		break;
		case 3:
		break;
		default :
			puts( "错误的序号！！" );
	}
}
