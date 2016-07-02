//求m和n的最大公约数，辗转相除法。

int gcd( int m, int n )
{
	if( m <= 0 || n <= 0 )
		return 0;
	if( m % n == 0 )
		return n;
	m = m % n;
	return gcd( n, m );
}
