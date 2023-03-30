#include "func.h"

void Make_Clothes_File(char* filename)
{
    char clo[256] = { 0 }; // 입력받을 문자열 배열
    int cu = 0; // 사용자 의사 여부 확인 
    int i = 1;
    wchar_t* str;

    system("cls");

    setlocale(LC_ALL, "ko-KR");

    printf("\n···············\n");
    printf("'*ω'*) 저장하고 싶은 옷의 특징을 입력하세요 \n");
    printf("예) 블랙 나이키 반팔 : ");
    getchar();
    gets_s(clo, sizeof(clo));  // 옷 특징 입력 받기 
    printf("···············\n");
    printf("ε %s з을/를 옷장 안에 저장할까요 ? 맞다면 1 , 그렇지 않으면 0을 눌러주세요 : ", clo);
    scanf_s("%d", &cu); while (getchar() != '\n');

    if (cu == 1)
    {
        FILE* fp = fopen(filename, "a, ccs=UTF-8");
        if (fp == NULL)
        {
            printf("\n°Д° >옷장 속 파일이 열리지 않습니다 다시 시도해주세요 !<\n");
            exit(1);
        }
        str=ConverCtoWC(clo);
        fputws(str, fp);
        fputwc('\n', fp);
        fclose(fp); // 파일 닫기
        free(str);
        printf("\n···············\n");
        printf("°u °つ %s 을 /를 옷장 안에 성공적으로 저장했습니다 !\n", clo);
        printf("···············\n");

    }

    else if (cu == 1)
    {
        printf("\n···············\n");
        printf("♪ 입력을 취소합니다 \n");
        printf("···············\n");

        return;//생각해보기
    }
}