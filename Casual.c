#include "func.h"

void Casual(MEMBER_REC* info, char* directname)
{
    char outside[256];
    int num;
    int op;
    int count = 0;

    while (true)
    {
        system("cls");

        printf("|￣￣￣￣￣￣￣|\n");
        printf("|    CASUAL    l\n");
        printf("|＿＿＿＿＿＿＿|\n");
        printf("˛ε♡з¸||\n");
        printf("  (OㅅO)  ||\n");
        printf("   /   ===づ\n");
        printf("···············\n");
        printf("캐쥬얼 스타일의 옷장을 열어볼까요 ? \n");
        printf("옷의 종류를 골라주세요 !\n\n");
        printf("°1 상의 \n");
        printf("°2 아우터\n");
        printf("°3 원피스\n");
        printf("°4 하의\n\n");
        printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s("%d", &op); //while (getchar() != '\n');


        switch (op)
        {
        case 1:
        {
            strcpy(outside, "top");
            system("cls");
            printf("···············\n");
            printf("ε캐쥬얼 상의з\n");
            printf("상의 목록은 다음과 같아요 !\n\n");
            printf("°1 긴팔 티셔츠\n");
            printf("°2 기모 맨투맨\n");
            printf("°3 맨투맨\n");
            printf("°4 기모 후드\n");
            printf("°5 후드\n");
            printf("°6 얇은 니트\n");
            printf("°7 니트\n");
            printf("°8 블라우스\n");
            printf("°9 얇은 셔츠\n");
            printf("°10 셔츠\n");
            printf("°11 조끼\n");
            printf("°12 반팔 티셔츠\n");
            printf("°13 민소매\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s("%d", &num); //while (getchar() != '\n');

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\lgshirt.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\padman.txt", info->usrid, outside);
                return;
            }
            case 3:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\man.txt", info->usrid, outside);
                return;
            }
            case 4:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\padhood.txt", info->usrid, outside);
                return;
            }
            case 5:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\hood.txt", info->usrid, outside);
                return;
            }
            case 6:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\thknit.txt", info->usrid, outside);
                return;
            }
            case 7:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\knit.txt", info->usrid, outside);
                return;
            }
            case 8:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\blouse.txt", info->usrid, outside);
                return;
            }
            case 9:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\thshirt.txt", info->usrid, outside);
                return;
            }
            case 10:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\shirt.txt", info->usrid, outside);
                return;
            }
            case 11:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\vest.txt", info->usrid, outside);
                return;
            }
            case 12:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\hfshirt.txt", info->usrid, outside);
                return;
            }
            case 13:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\sleeve.txt", info->usrid, outside);
                return;
            }
            default: break;
            }
            break;
        }
        case 2:
        {
            strcpy(outside, "outer");
            system("cls");
            printf("···············\n");
            printf("ε캐쥬얼 아우터з\n");
            printf("아우터 목록은 다음과 같아요 !\n\n");
            printf("°1 얇은 가디건\n");
            printf("°2 두꺼운 가디건\n");
            printf("°3 얇은 자켓\n");
            printf("°4 두꺼운 자켓\n");
            printf("°5 점퍼\n");
            printf("°6 바람막이\n");
            printf("°7 야상\n");
            printf("°8 코트\n");
            printf("°9 숏 패딩\n");
            printf("°10 롱 패딩\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s("%d", &num); 

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\thga.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\paga.txt", info->usrid, outside);
                return;
            }
            case 3:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\thjacket.txt", info->usrid, outside);
                return;
            }
            case 4:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\pajacket.txt", info->usrid, outside);
                return;
            }
            case 5:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\jumpe.txt", info->usrid, outside);
                return;
            }
            case 6:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\wdbreak.txt", info->usrid, outside);
                return;
            }
            case 7:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\yasang.txt", info->usrid, outside);
                return;
            }
            case 8:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\coat.txt", info->usrid, outside);
                return;
            }
            case 9:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\shpad.txt", info->usrid, outside);
                return;
            }
            case 10:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\lgpad.txt", info->usrid, outside);
                return;
            }

            default: break;
            }
            break;
        }
        case 3:
        {
            strcpy(outside, "dress");
            system("cls");
            printf("···············\n");
            printf("ε캐쥬얼 원피스з\n");
            printf("원피스 목록은 다음과 같아요 !\n");
            printf("°1 미니 원피스\n");
            printf("°2 롱 원피스\n");
            printf("°3 긴 투피스\n");
            printf("°4 짧은 투피스\n");
            printf("°5 긴바지 점프수트\n");
            printf("°6 짧은 점프수트\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s("%d", &num); //while (getchar() != '\n');

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\midress.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\lgdress.txt", info->usrid, outside);
                return;
            }
            case 3:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\lgtpiece.txt", info->usrid, outside);
                return;
            }
            case 4:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\shtpiece.txt", info->usrid, outside);
                return;
            }
            case 5:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\lgjump.txt", info->usrid, outside);
                return;
            }
            case 6:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\shjump.txt", info->usrid, outside);
                return;
            }
            default: break;
            }
            break;
        }
        case 4:
        {
            strcpy(outside, "bottom");
            system("cls");
            printf("···············\n");
            printf("ε캐쥬얼 하의з\n");
            printf("하의 목록은 다음과 같아요 !\n");
            printf("°1 숏팬츠\n");
            printf("°2 롱팬츠\n");
            printf("°3 청바지\n");
            printf("°4 슬랙스\n");
            printf("°5 기모 바지\n");
            printf("°6 미니 스커트\n");
            printf("°7 미디 스커트\n");
            printf("°8 롱 스커트\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s("%d", &num); //while (getchar() != '\n');

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\shpants.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\lgpants.txt", info->usrid, outside);
                return;
            }
            case 3:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\jeans.txt", info->usrid, outside);
                return;
            }
            case 4:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\slacks.txt", info->usrid, outside);
                return;
            }
            case 5:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\padpants.txt", info->usrid, outside);
                return;
            }
            case 6:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\miskirt.txt", info->usrid, outside);
                return;
            }
            case 7:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\mdskirt.txt", info->usrid, outside);
                return;
            }
            case 8:
            {
                sprintf(directname, "D:\\Project\\%s\\casual\\%s\\lgskirt.txt", info->usrid, outside);
                return;
            }

            default: break;
            }
            break;
        }
        }
    }
}
