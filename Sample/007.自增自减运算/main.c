/*
 & "D:\dev\tcc\tcc.exe" -run .\main.c
*/
#include <stdio.h>
int main(void)
{
	int a=5,b,c,i=10;
	b=a++;
	c=++b;

	printf("a = %d, b = %d, c = %d\n",a,b,c);
	printf("i,i++,i++ = %d,%d,%d\n",i,i++,i++);
	printf("++i       = %d\n",++i);
	printf("--i       = %d\n",--i);
	printf("i++       = %d\n",i++);
	printf("i--       = %d\n",i--);
	printf("-i++      = %d\n",-i++);
	printf("-i--      = %d\n",-i--);
	return (0);
}
