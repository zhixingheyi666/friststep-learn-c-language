//#include "self.h"
#include <stdio.h>
int main( void )
{
	float f = 1.2;
	long  i = 5, **  pi, *ph, *pf;
	int   k = 1021, m1 = 1021 , m2;
	printf( "m1 = %d \n", m1 );
	printf( "k = %d \n", k );
//	printf( "++k++ = %d \n", ++k++ );
	printf( "k = %d \n", k );
//	printf( "++(m1++) = %d \n", ++(m1++) );
	printf( "m1 = %d \n", m1 );
	pf = &f;
	pi = &ph;
	ph = &pi;
	//printf( "pfi = %p\n", pf );
	//*pf++ = 10;
//	printf( "pf++ = %p\n", pf );
	printf( "pf = %p\n", &f );
	printf( "pi = &ph, pi = %p\n", pi );
	printf( "&ph = %p\n", &ph );
	printf( "ph = &pi, ph = %p\n", ph );
	printf( "&pi = %p\n", &pi );
	printf( "*pi 的 Rvalue 应该是变量ph存储的内容，即pi的地址：\n" );
	printf( "*pi = %p\n", *pi );
	printf( "**pi 的 Rvalue 应该是变量pi存储的内容，即ph的地址：\n" );
	printf( "**pi = %p\n", **pi );
	printf( "*ph + 1 = %p\n", *ph + 1 );	// 尽管ph里面存储的是一个长整形指针的指针pi的地址，*ph的类型仍然是长整形。间接引用的结果总是根据变量的声明来确定的。
	printf( "*pi + 1 = %p\n", *pi + 1 );
	printf( "++*(*pi)++ = %p\n",  ++*(*pi)++ );
	printf( "++*( (*pi)++ ) = %p\n",  ++*( (*pi)++ ) );
}
