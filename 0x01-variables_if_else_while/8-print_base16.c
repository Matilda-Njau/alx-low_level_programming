#include <stdio.h>

int main()
{
	int Base16Num;
	char alphabet;
	for(Base16Num=0; Base16Num<10; Base16Num++)
	{
		putchar((Base16Num%10) + '0');
	}
	for(alphabet='a'; alphabet<='f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return(0);
}
