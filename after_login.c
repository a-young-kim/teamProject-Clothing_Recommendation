#include "func.h"

void after_login(MEMBER_REC* info)
{
    int len;
    len = strlen(info->usrid);
    info->usrid[len - 1] = 0;
    while (true)
    {
        char ch;
        system("cls");
        //회원 지칭-
        printf("···············\n");
        printf("'*.°¸♥ %s님 반갑습니다 ♥¸°.*'\n", info->usrid);
        printf("···············\n");

        printf("°A 옷 저장 \n");
        printf("°B 옷 추천 \n");
        printf("°C 옷 삭제\n");
        printf("°D 회원 탈퇴 \n");
        printf("°E 종료\n\n");
        printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); // 사용자에게 메뉴 선택 받기

        ch = toupper(getchar());//대소문자 구분 없앰
        while (getchar() != '\n');//빈칸이 있으면 없애줌
        printf("\n");

        switch (ch)
        {
        case 'A': _saveclothes(info);  break; // 옷 저장
        case 'B': _recommend(info); break; // 옷 추천
        case 'C': _remove_clothes(info); break;//특정 옷을 선택하는 프로그램을 함수를 하나 만들어서 두개로 사용
        case 'D': remove_member(info); return;//
        case 'E':
            printf("···············\n");
            printf("프로그램을 종료합니다 ! ~ BYE ♡\n");
            printf("···············\n"); return;
        default:  printf("°Д°> 잘못된 선택입니다 . 다시 시도해주세요 ! <\n"); break;
        }
    }
}