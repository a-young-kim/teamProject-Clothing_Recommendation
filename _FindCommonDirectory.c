#include "func.h"

void _FindCommonDirectory(RECOM* recom, MEMBER_REC* info, CLOTHES* clothes)
{
	int num = 0;
	char filename[1256];
	memset(clothes, 0, sizeof(clothes));

	sprintf(filename, "%s\\%s\\%s\\top", SortClothes, info->sex, recom->style);
	_ReadcommonFile(filename, recom, clothes, num); num++;

	if (strcmp(recom->style, "sports")!=0&&strcmp(info->sex, "male")!=0)
	{
		sprintf(filename, "%s\\%s\\%s\\dress", SortClothes, info->sex, recom->style); 
		_ReadcommonFile(filename, recom, clothes, num);
	}
	num++;
	
	sprintf(filename, "%s\\%s\\%s\\outer", SortClothes, info->sex, recom->style);	
	_ReadcommonFile(filename, recom, clothes, num); num++;

	sprintf(filename, "%s\\%s\\%s\\bottom", SortClothes, info->sex, recom->style); 
	_ReadcommonFile(filename, recom, clothes, num); num++;

}