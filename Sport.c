#include "func.h"
#define arr_MAXSIZE 1024

void Sport(MEMBER_REC* info, char* directname)
{
    int op;
    char outside[256];
    char sports = 0;
    int num; // 세부 사항 번호
    char clo[arr_MAXSIZE] = { 0 }; // 입력받을 문자열 배열
    int cu = 0; // 사용자 의사 여부 확인 

    while (true)
    {
        system("cls");
        printf("|￣￣￣￣￣￣￣|\n");
        printf("|    SPORTS    l\n");
        printf("|＿＿＿＿＿＿＿|\n");
        printf("˛ε♡з¸||\n");
        printf("  (OㅅO)  ||\n");
        printf("   /   ===づ\n");
        printf("···············\n");
        printf("스포츠 스타일의 옷장을 열어볼까요 ? \n");
        printf("옷의 종류를 골라주세요 !\n\n");
        printf("°1 상의 \n");
        printf("°2 하의\n");
        printf("°3 아우터\n\n");

        printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b");  scanf_s("%d", &op); 
        switch (op)
        {
        case 1:
        {
            strcpy(outside, "top");
            system("cls");
            printf("···············\n");
            printf("ε스포츠 상의з\n");
            printf("상의 목록은 다음과 같아요 !\n\n");
            printf("°1 기능성 반팔\n");
            printf("°2 기능성 긴팔\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s(" %d", &num); 

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\sports\\%s\\funcshrt.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\sports\\%s\\functlng.txt", info->usrid, outside);
                return;
            }
            default: printf("°Д°> 잘못된 선택입니다 . 다시 시도해주세요 ! <\n"); break;//생각해보기
            }
            break;
        }
        case 2:
        {
            strcpy(outside, "bottom");
            system("cls");
            printf("···············\n");
            printf("ε스포츠 하의з\n");
            printf("하의 목록은 다음과 같아요 !\n\n");
            printf("°1 트레이닝 숏팬츠\n");
            printf("°2 트레이닝 롱팬츠\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s(" %d", &num); 

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\sports\\%s\\tshrtpnt.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\sports\\%s\\tlngpnt.txt", info->usrid, outside);
                return;
            }
            default:printf("°Д°> 잘못된 선택입니다 . 다시 시도해주세요 ! <\n"); break;//생각해보기
            }
            break;
        }
        case 3:
        {
            strcpy(outside, "outer");
            system("cls");
            printf("···············\n");
            printf("ε스포츠 아우터з\n");
            printf("아우터 목록은 다음과 같아요 !\n\n");
            printf("°1 바람막이\n");
            printf("°2 트레이닝 자켓\n\n");

            printf("메뉴를 선택해주세요 ♪._.·°[   ]\b\b\b"); scanf_s(" %d", &num); 

            switch (num)
            {
            case 1:
            {
                sprintf(directname, "D:\\Project\\%s\\sports\\%s\\windbk.txt", info->usrid, outside);
                return;
            }
            case 2:
            {
                sprintf(directname, "D:\\Project\\%s\\sports\\%s\\trjckt.txt", info->usrid, outside);
                return;
            }
            default:printf("°Д°> 잘못된 선택입니다 . 다시 시도해주세요 ! <\n"); break;//생각해보기
            }
            break;
        }
        default:printf("°Д°> 잘못된 선택입니다 . 다시 시도해주세요 ! <\n");  break;//아직 생각못함
        }
    }

}