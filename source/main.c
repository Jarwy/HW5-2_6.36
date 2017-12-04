#include<stdio.h>
#include<stdlib.h>


int n;
void stringReverse(void);
char string[] = "Hello World!!";

int main(void)
{
	n = sizeof(string)-1;
	printf("Origin:%s\n", string);
	printf("\n");
	printf("Reverse:");

	stringReverse();
	printf("\n");

	system("pause");
	return 0;
}

void stringReverse(void)
{
	printf("%c", string[n]);
	if (n != 0)
	{
		n--;
		stringReverse();
	}
}


