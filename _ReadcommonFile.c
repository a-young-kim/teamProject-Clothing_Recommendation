#include "func.h"

void _ReadcommonFile(char* directname, RECOM* recom, CLOTHES* clothes, int kind)
{
    char buffer[256];
    struct _finddata_t finddata;//파일 찾기
    long handle;
    int result = 1;
    char filename[256];
    char closet[32][256] = { 0 };
    int i = 0;
    int num = 0;

    sprintf(filename, "%s\\*.txt", directname);//
    handle = _findfirst(filename, &finddata);

    if (handle == -1)//파일이 존재하지 않을 때
    {
        printf("°Д° >파일이 존재하지 않습니다 !<\n"); return;
    }
    while (result != -1)//끝까지 반복하면
    {
        char* cut = strchr(finddata.name, '~');
        char* dot = strchr(finddata.name, '.');
        char temp_1[256] = { 0 };
        char temp_2[256] = { 0 };

        if (cut != NULL)
        {
            strncpy(temp_1, finddata.name, cut - finddata.name);
            cut++;
            strncpy(temp_2, cut, dot - cut);
        }

        if (atoi(temp_1) <= recom->temp && atoi(temp_2) >= recom->temp)
        {
            sprintf(filename, "%s\\%s", directname, finddata.name);
            FILE* fp = fopen(filename, "r");
            while (fgets(buffer, sizeof(buffer), fp) != 0)//받을 때
            {
                int len;
                len = strlen(buffer);
                if (buffer[len - 1] == '\n')
                {
                    buffer[len - 1] = 0;
                }
                strcpy(&closet[i][256], buffer);
                i++;
            }
            fclose(fp);
        }
        result = _findnext(handle, &finddata);
    }
    srand((unsigned int)time(NULL));
    if (i != 0)
    {
        num = (rand() % i);
        if (kind == 0)
        {
            strncpy(clothes->top, &closet[num][256], sizeof(clothes->top));
        }

        else if (kind == 1)
        {
            strncpy(clothes->dress, &closet[num][256], sizeof(clothes->dress));
        }

        else if (kind == 2)
        {
            strncpy(clothes->outer, &closet[num][256], sizeof(clothes->outer));
        }

        else if (kind == 3)
        {
            strncpy(clothes->bottom, &closet[num][256], sizeof(clothes->bottom));
        }
    }

    else
    {
        if (kind == 2)
        {
            strcpy(clothes->outer, "°ㅅ °つ 별도의 아우터는 필요하지 않아요");
        }
    }
}