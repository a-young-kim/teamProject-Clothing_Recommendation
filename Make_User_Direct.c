#include "func.h"

void Make_User_Direct(char* directname)
{
    int nResult;
    char directname_1[256];

    sprintf(directname_1, "%s\\sports", directname);
    nResult = _mkdir(directname_1);
    if (nResult == -1)
    {
        printf(" > 오류가 발생했습니다. 다시 회원가입을 해주세요 <\n");
        //오류발생시
    }
    else
    {
        Make_User_Direct_Sport(directname_1);
    }
    sprintf(directname_1, "%s\\formal", directname);
    nResult = _mkdir(directname_1);
    if (nResult == -1)
    {
        printf(" > 오류가 발생했습니다. 다시 회원가입을 해주세요 <\n");
        //오류발생시
    }
    else
    {
        Make_User_Direct_Formal(directname_1);
    }

    sprintf(directname_1, "%s\\casual", directname);
    nResult = _mkdir(directname_1);
    if (nResult == -1)
    {
        printf(" > 오류가 발생했습니다. 다시 회원가입을 해주세요 <\n");
        //오류발생시
    }
    else
    {
        Make_User_Direct_Causal(directname_1);
    }
}