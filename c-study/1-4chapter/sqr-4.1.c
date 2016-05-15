/*
 *	计算一个数的平方根
 */
#include <stdio.h>
#include <stdlib.h>
int
main()
{
	float new_guess;
	float last_guess;
	float number;

	/*
	 *催促用户输入，读取数据并对它进行检查。
	 */
	printf( "Enter a number: " );
	scanf( "%f", &number );
	if( number < 0 )
	{
		printf( "Cannot compute the square root of a negative number!\n" );
		return EXIT_FAILURE;
	}
	
	/*
	 *计算平方根的近似值，直到他的值不再变化。
	 */
	new_guess = 1;
	do 
	{
		last_guess = new_guess;
		new_guess = ( last_guess + number / last_guess ) / 2;
		printf( "%.15e\n", new_guess );
	}  while ( new_guess != last_guess );

	/*
	 *打印结果
	 */
	printf( "Square root of %g is %g\n", number, new_guess );

	return EXIT_SUCCESS;


	 
} 













