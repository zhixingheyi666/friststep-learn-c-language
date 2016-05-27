#define TURE 1
#define FALSE 0
#define NULL 0
#define NUL '\0'

char * find1_str( char *str, char const *want )
{
	while( *want != NUL )
		if( *want++ != *str++ )
			return NULL;
	return str;
}

int del1_substr( char *str, char const *substr ) 
{
	char *del;
/*	if( str == NULL || substr == NULL )
		return FALSE;
	if( *substr == NUL )
		return TURE;
	if( *str == NUL && *substr != NUL )
		return FALSE;
*/ /*上面这段程序的情况基本不会出现，因为我还没学会使用scanf函数，然后结果为空字符串*/ 

//	while( *str++ != NUL ),这么写，下面还没操作，str就已经指向字符串中下一个字符了
	while( *str != NUL )
	{		
		del = find1_str( str, substr );
		if( del != NULL )
			break;
		str++;
	}
	if( del == NULL )	//段错误可能出现在未赋值和初始化的del，or 指针指向了字符串结尾以外
	//if( *str == NUL )
		return FALSE;
	while( *str++ = *del++ )
		;
	return TURE;
	
}
