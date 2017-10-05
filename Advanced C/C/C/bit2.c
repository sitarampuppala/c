#include<stdio.h>
//void dsplayBits(int a);
int main(void)
{
	int a = 7;
	printf("a=%d\t", a);
   //displayBits(a);
	a = a << 2;
	printf("a=%d\t", a);
	a = a << 3;
	printf("a=%d\t", a);
	a = a >> 1;
	printf("a=%d\t", a);
	a = a >> 3;
	printf("a=%d\t", a);
	getch();

	return 0;
}
/*
void displayBits(int a)
{
	int i,mask;
	for (i = 31; i >= 0; i--)
	{
		mask = 1 << i;
		putchar((a & mask) ? '1' : '0');
		if (i % 8 == 0)
			putchar(' ');
	}
	printf("\n");
}
*/