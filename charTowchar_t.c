#include "func.h"

wchar_t* ConverCtoWC(char* str)//처음에 옷 저장 할때는 txt파일에 그냥 입력하기 위하여 생성

{
    //wchar_t형 변수 선언

    wchar_t* pStr;

    //멀티 바이트 크기 계산 길이 반환

    int strSize = MultiByteToWideChar(CP_ACP, 0, str, -1, 0, 0);

    //wchar_t 메모리 할당

    pStr = (wchar_t*)malloc(sizeof(wchar_t)* strSize);
    memset(pStr, 0, sizeof(char*));

    //형 변환

    MultiByteToWideChar(CP_ACP, 0, str, strlen(str) + 1, pStr, strSize);

    return pStr;

}



//출처: https://pencil1031.tistory.com/73 [Storage.]