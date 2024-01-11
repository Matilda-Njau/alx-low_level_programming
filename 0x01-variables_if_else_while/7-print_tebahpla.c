#include <stdio.h>

int main()
{
	char reverse_alphabet;
	for(reverse_alphabet='z'; reverse_alphabet>='a'; reverse_alphabet--);
	{
		putchar(reverse_alphabet);
	}
	putchar('\n');

	return(0);
}
