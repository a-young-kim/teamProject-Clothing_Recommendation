#include "func.h"

void _ReadUserFile(char* filename, CLOTHES* userclothes, int kind, char* clothes)
{
	wchar_t buffer[1024] = { 0 };
	//char str[256];
	char* c;
	char str[256];
	char closet[32][256] = { 0 };
	int i = 0;
	int num = 0;
	int count = 0;

	setlocale(LC_ALL, "ko-KR");

	FILE* fp = fopen(filename, "r, ccs=UTF-8");
	if (fp == NULL)
	{
		engtokor(clothes);
		sprintf(str, "°Д° >%s가 옷장에 존재하지 않습니다.\n", clothes);
		if (kind == 0)
		{
			strcpy(userclothes->top, str);
		}

		else if (kind == 1)
		{
			strcpy(userclothes->dress, str);
		}

		else if (kind == 2)
		{
			strcpy(userclothes->outer, str);
		}

		else if (kind == 3)
		{
			strcpy(userclothes->bottom, str);
		}
		return;
	}
	while (fgetws(buffer, sizeof(buffer), fp) != 0)//받을 때
	{
		c = ConvertWCtoC(buffer);
		int len;
		len = strlen(c);
		if (c[len - 1] == '\n')
		{
			c[len - 1] = 0;
		}
		strcpy(&closet[i][256], c);
		free(c);
		//printf("%s", str);
		i++;
	}
	fclose(fp);
	srand((unsigned int)time(NULL));
	num = (rand() % i);

	if (kind == 0)
	{
		strcpy(userclothes->top, &closet[num][256]);
	}

	else if (kind == 1)
	{
		strcpy(userclothes->dress, &closet[num][256]);
	}

	else if (kind == 2)
	{
		strcpy(userclothes->outer, &closet[num][256]);
	}

	else if (kind == 3)
	{
		strcpy(userclothes->bottom, &closet[num][256]);
	}
}