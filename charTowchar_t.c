#include "func.h"

wchar_t* ConverCtoWC(char* str)//ó���� �� ���� �Ҷ��� txt���Ͽ� �׳� �Է��ϱ� ���Ͽ� ����

{
    //wchar_t�� ���� ����

    wchar_t* pStr;

    //��Ƽ ����Ʈ ũ�� ��� ���� ��ȯ

    int strSize = MultiByteToWideChar(CP_ACP, 0, str, -1, 0, 0);

    //wchar_t �޸� �Ҵ�

    pStr = (wchar_t*)malloc(sizeof(wchar_t)* strSize);
    memset(pStr, 0, sizeof(char*));

    //�� ��ȯ

    MultiByteToWideChar(CP_ACP, 0, str, strlen(str) + 1, pStr, strSize);

    return pStr;

}



//��ó: https://pencil1031.tistory.com/73 [Storage.]