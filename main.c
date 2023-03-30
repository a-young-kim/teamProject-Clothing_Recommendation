#include "func.h"

int main()
{
    char ch;//로그인 회원등록 종류중 선택
    MEMBER_REC info;
    MEMBER_REC m;

    while (true)
    {
        //clrscr();      // 화면 지우기
        system("cls");
        printf("l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°l||l°\n\n");
        printf("                  ε* °·._.? 오늘 뭐입지 ?._.·°*з   \n");
        printf("···············\n");
        printf("'*.°¸♡ 반갑습니다 ♡¸°.*'\n");
        printf("···············\n");
        printf("°A 로그인\n");
        printf("°B 회원등록\n");
        printf("°C 종료\n\n");
        printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); // 사용자에게 메뉴 선택 받기


        ch = toupper(getchar());//대소문자 구분 없앰
        while (getchar() != '\n');//빈칸이 있으면 없애줌
        printf("\n");

        switch (ch)
        {
        case 'A': info = login(); after_login(&info); return 0; // 로그인
        case 'B': insert_member(&m); break; // 회원등록
        case 'C':
            printf("···············\n");
            printf("프로그램을 종료합니다 ! ~ BYE ♡\n");
            printf("···············\n");
            return 0;; // 프로그램 종료
        default: printf("°Д°> 잘못된 선택입니다 . 다시 시도해주세요 ! <\n"); system("pause");
        }
    }
    return 0;
}