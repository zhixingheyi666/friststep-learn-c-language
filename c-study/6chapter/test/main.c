//#include "self.h"
#include <stdio.h>
int main( void )
{
	float f = 1.2;
	long  i = 5, ** pi, *ph, *pf;
	pf = &f;
	pi = &ph;
	ph = &pi;
	//i++ = 8;
	*ph++ = 8;
	pf = &i;
	printf( "pfi = %p\n", pf );
	*pf++ = 10;
	printf( "pf++ = %p\n", pf );
	printf( "i = %d\n", i );
	printf( "pf = %p\n", &f );
	printf( "pi = %p\n", pi );
	printf( "ph = %p\n", &pi );
	printf( "pi = %p\n", *pi );
	printf( "pi = %p\n", **pi );
	printf( "the right value of pi is the address of ph ( &ph ) = %p\n", &ph );
	printf( "*ph + 1 = %p\n", *ph + 1 );	// 尽管ph里面存储的是一个长整形指针的指针pi的地址，*ph的类型仍然是长整形。间接引用的结果总是根据变量的声明来确定的。
	printf( "the right value of ph is the address of pi ( &pi ) = %p\n", &pi );
	printf( "*pi + 1 = %p\n", *pi + 1 );
}






