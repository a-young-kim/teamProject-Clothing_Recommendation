#include "func.h"

char* ConvertWCtoC(wchar_t* str)
{    
    //반환할 char* 변수 선언
    char* pStr;
    int strSize;
     
        //입력받은 wchar_t 변수의 길이를 구함

        strSize = WideCharToMultiByte(CP_ACP, 0, str, -1, NULL, 0, NULL, NULL);

        //char* 메모리 할당

        pStr = (char*)malloc(sizeof(char)* strSize);
        memset(pStr, 0, sizeof(char*));
        
        //형 변환 

        WideCharToMultiByte(CP_ACP, 0, str, -1, pStr, strSize, 0, 0);

     
    return pStr;
}//참고 https://pencil1031.tistory.com/73