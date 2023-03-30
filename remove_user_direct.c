#include "func.h"
void direct_remove(char* directname)
{
	struct _finddata_t finddata;//파일 찾기
	long handle;
	int result = 1;
	char filename[256];
	int num;

	sprintf(filename, "%s\\*.txt", directname);
	handle = _findfirst(filename, &finddata);

	if (handle == -1)//파일이 존재하지 않을 때
	{
		result = -1;
		num = 1;
	}

	while (result != -1)
	{
		remove(finddata.name);
		result = _findnext(handle, &finddata);
	}
	num=_rmdir(directname);
	if (num == 0)
	{
		return;
	}
	else
	{
		printf("오류");
	}
}

int remove_user_direct(char* directname, MEMBER_REC* info)
{
	int result ;
	char filename[256];
	char* clothes[3] = { "casual", "sports", "formal" };

	for (int i = 0; i < 3; i++)
	{
		sprintf(filename, "%s\\%s\\top", directname, clothes[i]); direct_remove(filename);
		sprintf(filename, "%s\\%s\\outer", directname, clothes[i]); direct_remove(filename);
		sprintf(filename, "%s\\%s\\bottom", directname, clothes[i]); direct_remove(filename);
		if (strcmp("sports", clothes[i]) != 0)
		{
			sprintf(filename, "%s\\%s\\dress", directname, clothes[i]); direct_remove(filename);
		}
		sprintf(filename, "%s\\%s", directname, clothes[i]); _rmdir(filename);
	}
	result= _rmdir(directname);
	return result;
}