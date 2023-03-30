#include "func.h"

void _FindUserStyles(CLOTHES* clothes, MEMBER_REC* info, RECOM* recom, CLOTHES* userclothes)
{
	char directname[256];
	int num = 0;
	char filename[1256];
	memset(userclothes, 0, sizeof(userclothes));

	sprintf(directname, "%s\\%s\\%s", User_DIR, info->usrid, recom->style);

	sprintf(filename, "%s\\top\\%s.txt", directname, clothes->top); 
	_ReadUserFile(filename, userclothes, num, clothes->top); num++;

	if (strcmp(recom->style, "sports") != 0 && strcmp(info->sex, "male") != 0)
	{
		sprintf(filename, "%s\\dress\\%s.txt", directname, clothes->dress);//남성은 제외
		_ReadUserFile(filename, userclothes, num, clothes->dress);
	}
	num++;
	

	sprintf(filename, "%s\\outer\\%s.txt", directname, clothes->outer);
	_ReadUserFile(filename, userclothes, num, clothes->outer); num++;

	sprintf(filename, "%s\\bottom\\%s.txt", directname, clothes->bottom);
	_ReadUserFile(filename, userclothes, num, clothes->bottom); num++;
}