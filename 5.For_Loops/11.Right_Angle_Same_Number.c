
#pragma warning(disable:4996)

#include<stdio.h>
int asterisk();
int main()
{

	asterisk();

	getch();
	return 0;
}
int asterisk()
{
	int row;
	int i = 0;
	int j = 0;

	printf("Enter number of rows: ");
	scanf("%d", &row);
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", i);
		}
		printf("\n");

	}
}