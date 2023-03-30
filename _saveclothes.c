#include "func.h"

void _saveclothes(MEMBER_REC* info)
{
    char ch;
    char directname[256];

    system("cls");
    printf(" ˛ε♡з¸\n");
    printf("  (.0ㅅ0.)♡\n");
    printf("┏--∪ - ∪━━━━━┓\n");
    printf("♡ * 옷 저장 * .。\n");
    printf("┗ - ━━━━━━━┛\n");
    printf("···············\n");
    printf("'*ω'*) 저장하고 싶은 옷의 스타일을 선택하세요 !\n");
    printf("···············\n");
    printf("     °A 캐주얼\n     °B 포멀\n     °C 스포츠 : [   ]\b\b\b");

    ch = toupper(getchar());//대소문자 구분 없앰
    while (getchar() != '\n');//빈칸이 있으면 없애줌
    printf("\n");

    switch (ch)
    {
    case 'A':Casual(info, directname); Make_Clothes_File(directname); break;
    case 'B':Formal(info, directname);  Make_Clothes_File(directname); break;
    case 'C':Sport(info, directname); Make_Clothes_File(directname); break;
    default:
        printf("°Д°> 잘못된 선택입니다 . 다시 시도해주세요 ! <\n");
    }
    system("pause");
}