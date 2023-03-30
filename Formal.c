#include "func.h"

void Formal(MEMBER_REC* info, char* directname)
{
    char outside[256];
    int num;
    int op;
    int count = 0;

    while (true)
    {
        system("cls");
        printf("|￣￣￣￣￣￣￣|\n");
        printf("|    FORMAL    l\n");
        printf("|＿＿＿＿＿＿＿|\n");
        printf("˛ε♡з¸||\n");
        printf("  (OㅅO)  ||\n");
        printf("   /   ===づ\n");
        printf("···············\n");
        printf("포멀 스타일의 옷장을 열어볼까요 ? \n");
        printf("옷의 종류를 골라주세요 !\n\n");
        printf("°1 상의 \n");
        printf("°2 하의\n");
        printf("°3 아우터\n");
        printf("°4 원피스\n\n");
        printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s("%d", &op); 

        switch (op)
        {
        case 1:
        {
            strcpy(outside, "top");
            system("cls");
            printf("···············\n");
            printf("ε포멀 상의з\n");
            printf("상의 목록은 다음과 같아요 !\n\n");
            printf("°1 무지 반팔티\n");
            printf("°2 무지 긴팔티\n");
            printf("°3 얇은 니트\n");
            printf("°4 두꺼운 니트\n");
            printf("°5 (여)블라우스\n");
            printf("°6 정장 셔츠\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s("%d", &num); 

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\xhfshirt.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\xlgshirt.txt", info->usrid, outside);
                return;
            }
            case 3:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\thknit.txt", info->usrid, outside);
                return;
            }
            case 4:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\paknit.txt", info->usrid, outside);
                return;
            }
            case 5:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\blouse.txt", info->usrid, outside);
                return;
            }
            case 6:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\formshirts.txt", info->usrid, outside);
                return;
            }
            default: break;//생각해보기
            }
            break;
        }
        case 2:
        {
            strcpy(outside, "bottom");
            system("cls");
            printf("···············\n");
            printf("ε포멀 하의з\n");
            printf("하의 목록은 다음과 같아요 !\n");
            printf("°1 슬렉스\n");
            printf("°2 정장 반바지\n");
            printf("°3 정장 긴바지\n");
            printf("°4 (여)정장치마\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s("%d", &num); 

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\slacks.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\formshpants.txt", info->usrid, outside);
                return;
            }
            case 3:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\formlgpants.txt", info->usrid, outside);
                return;
            }
            case 4:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\formskirt.txt", info->usrid, outside);
                return;
            }
            default: break;
            }
        }
        case 3:
        {
            strcpy(outside, "outer");
            system("cls");
            printf("···············\n");
            printf("ε포멀 아우터з\n");
            printf("아우터 목록은 다음과 같아요 !\n\n");
            printf("°1 겨울 코트\n");
            printf("°2 가을 코트\n");
            printf("°3 블레이저\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s("%d", &num); 

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\wincoat.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\fallcoat.txt", info->usrid, outside);
                return;
            }
            case 3:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\blazer.txt", info->usrid, outside);
                return;
            }
            default: break;
            }
        }
        case 4:
        {
            strcpy(outside, "dress");
            system("cls");
            printf("···············\n");
            printf("ε포멀 원피스з\n");
            printf("원피스 목록은 다음과 같아요 !\n");
            printf("°1 반팔 정장 원피스\n");
            printf("°2 긴팔 정장 원피스\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s("%d", &num); 

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\shformdress.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\formal\\%s\\lgformdress.txt", info->usrid, outside);
                return;
            }
            default: break;
            }
        }
        }
    }

}