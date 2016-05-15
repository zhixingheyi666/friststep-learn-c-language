#include <stdio.h>
#include <columns.h>
void main( void )
{ 
	int quantity, price, ch ;
	int sf1, sf2, sf3 ;
	char department[MAX_COL];
	sf1 = scanf( " %d ", &quantity );
	//puts( "Please iuput quantity:\n" );        	//还可以加一个输入错误次数控制变量num以及错误次数限制的提示，就像银行输错密码的提示
	//while( ( ch=getchar() )!= EOF && ch != '\n' )
	//	;
	sf2=scanf( " %d ", &price );
	//	puts( "Please iuput price:\n" );  	
	//while( ( ch=getchar() )!= EOF && ch != '\n' )
	//	;
	sf3=scanf( " %s ", department );
	while( ( ch=getchar() )!= EOF && ch != '\n' );
	//	puts( "Please iuput deparment:\n" );  
	printf( "quantity:	%d\nprice:	%d\ndepartment:		%s\n", quantity, price ,department );
	printf( "sf1:%d__sf2:%d__sf3:%d\n", sf1, sf2, sf3 );
}
