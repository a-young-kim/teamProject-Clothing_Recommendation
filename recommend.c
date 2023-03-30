#include "func.h"

void _recommend(MEMBER_REC* info)
{
    char ch;
    RECOM recom;
    CLOTHES clothes;
    CLOTHES userclothes;

    system("cls");
    printf(" ˛ε♡з¸\n");
    printf("  (.0ㅅ0.)♡\n");
    printf("┏--∪ - ∪━━━━━┓\n");
    printf("♡ * 옷 추천 * .。\n");
    printf("┗ - ━━━━━━━┛\n");
    printf("···············\n");
    printf("♪ 기온을 입력하세요  : "); scanf_s("%d", &recom.temp);
    printf("♪ 추천받고 싶은 옷의 스타일을 선택하세요 \n");
    printf("     °A 캐주얼\n     °B 포멀\n     °C 스포츠 : [   ]\b\b\b"); scanf_s("%c", &ch, sizeof(ch));

    ch = toupper(getchar());//대소문자 구분 없앰
    while (getchar() != '\n');//빈칸이 있으면 없애줌
    printf("···············\n");
    printf("\n");

    switch (ch)
    {
    case 'A': strcpy(recom.style, "casual"); break; // 캐쥬얼
    case 'B': strcpy(recom.style, "formal"); break; // 포멀
    case 'C': strcpy(recom.style, "sports"); break; // 스포츠
    default: printf("°Д°> 잘못된 선택입니다 . 다시 시도해주세요 ! <\n");
    }

    _FindCommonDirectory(&recom, info, &clothes);
    _FindUserStyles(&clothes, info, &recom, &userclothes);

    printf("\n°u °つ 오늘 하루 당신에게 추천하는 옷입니다  ♪'*.° \n\n");
    printf(" %s\n\n %s\n\n %s\n\n", userclothes.top, userclothes.bottom, userclothes.outer);
    if (strcmp("male", info->sex) != 0)
    {
        printf("%s", userclothes.dress);
    }
    system("pause");
}