#include <stdio.h>

int main()
{
	int BaseTenSingleNum;
	for(BaseTenSingleNum='0'; BaseTenSingleNum<='10'; BaseTenSingleNum++)
	{
		putchar((BaseTenSingleNum%10 + '0'));
	}
	putchar("\n");

	return(0);
}
