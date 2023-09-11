#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("text1234.txt", "r");
	if(fp == NULL)
	{
		return 1;
	}
	const size_t size_Y = 10;
	const size_t size_X = 5;
	char text[size_Y][size_X] = {};

	for(int y = 0; y < size_Y; y++)
	{
		for(int x = 0; x < size_X; x++)
		{
			text[y][x] = fgetc(fp);
		}
	}

	fclose(fp);

	for(int y = 0; y < size_Y; y++)
	{
		printf("\n%d - ", y);
		for(int x = 0; x < size_X; x++)
		{
			printf("%c", text[y][x]);
		}
	}

	return 0;
}
