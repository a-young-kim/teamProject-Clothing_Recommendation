#include "func.h"

void Remove_Clothes_File(char* filename)
{
    int i = 0;
    int real;
    wchar_t buffer[256] = { 0 };
    char a[256] = { 0 };
    wchar_t* w = { 0 };
    char* c;
    int num = 0;
    char closet[32][256] = { 0 };
    

    system("cls");
    setlocale(LC_ALL, "ko-KR");

    printf("···············\n");
    printf("♪ 옷을 지우고 싶다면 1, 아니라면 0 을 입력해주세요 : "); scanf_s("%d", &real);


    if (real == 1)
    {
        //sprintf(filename, "%s.txt", directname);

        FILE* fp = fopen(filename, "a+, ccs=UTF-8");
        if (fp == NULL)
        {
            printf("°Д°> 옷장 속 파일이 열리지 않습니다 ! <\n");
            exit(1);
        }

        while (fgetws(buffer, sizeof(buffer), fp) != 0)//받을 때
        {
            c = ConvertWCtoC(buffer);
            printf("%d:%s", i + 1, c);//파일에 한줄 밖에 없다.
            strcpy(&closet[i][256], c);
            free(c);
            i++;
        }
        fclose(fp);
        printf("···············\n");
        printf("♪ 지우고 싶은 옷의 번호를 입력해주세요  : "); scanf_s("%d", &num);

        fp = fopen(filename, "wt, ccs=UTF-8");
        for (int j = 0; j < i; j++)
        {
            if (j != num - 1)
            {
                w = ConverCtoWC(&closet[j][256]);
                fputws(w, fp);
                free(w);
            }
        }   
        fclose(fp);
        printf("지우는데 성공");
        system("pause");         
    }

    else if (num == 1)
    {
        return;
    }
}