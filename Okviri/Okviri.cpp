#include<stdio.h>

void line1(int);
void line2(int);
void line3(int, char*);

int main()
{
	char allchar[15];
	char* n = allchar;
	int all;
	for (int i = 0; i < 15; i++)
	{
		scanf_s("%c", &allchar[i]);
		int a = allchar[i];
		if (a == 10)
		{
			all = i;
			i = 15;
		}
	}
	line1(all); printf("\n");
	line2(all); printf("\n");
	line3(all, n); printf("\n");
	line2(all); printf("\n");
	line1(all);
	return 0;
}

void line1(int all)
{
	for (int i = 1; i <= all; i++)
	{
		bool t = true;
		for (int j = 1; j < 5 && i % 3 != 0; j++)
		{
			if (i == 1 && t)
			{
				j--;
				t = !t;
			}
			if (j == 2)
			{
				printf("#");
			}
			else
			{
				printf(".");
			}
		}
		for (int j = 1; j < 5 && i % 3 == 0; j++)
		{
			if (i == 1 && t)
			{
				j--;
				t = !t;
			}
			if (j == 2)
			{
				printf("*");
			}
			else
			{
				printf(".");
			}
		}
	}
}

void line2(int all)
{
	for (int i = 1; i <= all; i++)
	{
		bool t = true;
		for (int j = 2; j <= 5 && i % 3 != 0; j++)
		{
			if (i == 1 && t)
			{
				j--;
				t = !t;
			}
			if (j % 2 == 0)
			{
				printf("#");
			}
			else
			{
				printf(".");
			}
		}
		for (int j = 2; j <= 5 && i % 3 == 0; j++)
		{
			if (i == 1 && t)
			{
				j--;
				t = !t;
			}
			if (j % 2 == 0)
			{
				printf("*");
			}
			else
			{
				printf(".");
			}
		}
	}
}

void line3(int all, char* n)
{
	for (int i = 1; i <= all; i++, n++)
	{
		bool t = true;
		for (int j = 2; j <= 5 && i % 3 != 0; j++)
		{
			if (i == 1 && t)
			{
				j--;
				t = !t;
			}
			if (j == 1 || j == 5)
			{
				if ((i + 1) % 3 == 0 && j == 5)
				{
					printf("*");
				}
				else
				{
					printf("#");
				}
			}
			else if (j == 3)
			{
				printf("%c", *n);
			}
			else
			{
				printf(".");
			}
		}
		for (int j = 2; j <= 5 && i % 3 == 0; j++)
		{
			if (i == 1 && t)
			{
				j--;
				t = !t;
			}
			if (j == 1 || j == 5)
			{
				printf("*");
			}
			else if (j == 3)
			{
				printf("%c", *n);
			}
			else
			{
				printf(".");
			}
		}
	}
}