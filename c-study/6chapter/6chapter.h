#include <stdio.h>

char *find_char( char const *source, char const *chars );
int del_substr( char *str, char const *substr );
char *find1_char( char *str, char const *want );
int del1_substr( char *str, char const *substr );
int lenstring( char *str );
void reverse_string( char *string );
void book_beisu( int unit, int *head_errts, int range );
unsigned long  b4_ertts( unsigned long range );
void book_beisu1( unsigned long unit,char *head_errts, unsigned long len );
unsigned long  b6_ertts( unsigned long range, unsigned long jiange );
/*********************
 *bit_array 头文件
 * ******************************/


void set_bit( char bit_array[], unsigned long bit_number );

void clear_bit( char bit_array[], unsigned long bit_number );

void assign_bit ( char bit_array[], unsigned long bit_number, int value);

int test_bit ( char bit_array[], unsigned long bit_number );


