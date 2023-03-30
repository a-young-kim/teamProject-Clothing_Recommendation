#include "func.h"
//회원 탈퇴
void remove_member(MEMBER_REC* info)
{
    int nResult;
    int result;
    int real = 2;
    char filename[256] = { 0 };
    char directname[256] = { 0 };

    system("cls");
    printf("···············\n");
    printf("'*.°¸♥ %s님 반갑습니다 ♥¸°.*'\n", info->usrid);
    printf("···············\n");

    printf("탈퇴하시면 저장된 정보가 전부 사라집니다\n");
    printf("그래도 탈퇴하시겠습니까?\n");
    printf("탈퇴를 원한다면 1을, 아니면 0을 입력해주세요 : [    ]\b\b\b"); scanf_s("%d", &real); while (getchar() != '\n');

    //0 입력할때
    if (real == 0)
    {
        Sleep(2000);
        return;
    }

    else if (real == 1)
    {
        sprintf(filename, "%s\\%s.txt", LOGIN_DIR, info->usrid);
        nResult = remove(filename);//로그인 파일 지우기
        sprintf(directname, "D:\\Project\\%s", info->usrid);
        result = remove_user_direct(directname, info);//디렉토리 지우기

        if (nResult == 0 && result == 0)
        {
            printf("···············\n");
            printf("°u °つ 회원 삭제가 정상적으로 처리되었습니다 ! \n");
            printf("···············\n");
            Sleep(1000);

            return;
        }
        else if (nResult == -1)
        {
            printf(" > 과정에서 오류가 발생했습니다 ! <\n");
        }
    }
}