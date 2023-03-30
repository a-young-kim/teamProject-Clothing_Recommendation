#include "func.h"

void Make_User_Direct_Sport(char* directname)
{
    int nResult;
    char directname_1[256];
    //
    sprintf(directname_1, "%s\\top", directname); //상의
    nResult = _mkdir(directname_1);
    if (nResult == -1)
    {
        printf(" 오류가 발생했습니다. 다시 회원가입을 해주세요");
        //오류발생시
    }
  
    //
    sprintf(directname_1, "%s\\bottom", directname); // 하의
    nResult = _mkdir(directname_1);
    if (nResult == -1)
    {
        printf(" 오류가 발생했습니다. 다시 회원가입을 해주세요");
        //오류발생시
    }
   
    //
    sprintf(directname_1, "%s\\outer", directname); // 아우터
    nResult = _mkdir(directname_1);
    if (nResult == -1)
    {
        printf(" 오류가 발생했습니다. 다시 회원가입을 해주세요");
        //오류발생시
    }
   
}