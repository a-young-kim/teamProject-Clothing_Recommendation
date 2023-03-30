#include "func.h"

/* 신규 회원 정보의 입력 */
void insert_member(MEMBER_REC* m)
{
    struct _finddata_t finddata;//파일 찾기
    long handle;
    int result = 1;
    int nResult;
    char directname[256];
    char filename[256];
    int num = 0;
    int len;
    // 회원 가입 함수
    while (true)
    {
        system("cls");
        printf("˛ε♡з¸\n");
        printf(" ∧ ＿ ∧\n");
        printf("( °ㅅ °)   \n");
        printf("/ つ( 회원가입 )\n");
        printf("し - ＼／\n");
        printf("···············\n");
        printf(" '*ω'*) 회원님의 기본 정보를 입력하세요 \n");
        printf(" ε 단, 아이디는 영어와 숫자만 가능합니다 з \n");
        printf("···············\n\n");
        printf("\n> 아이디 : ");   gets_s(m->usrid, sizeof(m->usrid));

        len = strlen(m->usrid);

        for (int i = 0; i < len; i++)
        {
            if (m->usrid[i] & 0x80)//2진수로 변환했을 때 첫글자가 1(true)이면 한글이고 0이면 일반 아스키코드의 값
            {
                num++;
            }
        }

        if (num == 0)
        {
            printf("\n> 성 별(male / female) : ");      gets_s(m->sex, sizeof(m->sex));


            //이름 정하기
            sprintf(filename, "%s\\%s.txt", LOGIN_DIR, m->usrid);//파일 이름 명시
            handle = _findfirst(filename, &finddata);
            //이름 정하기
            if (handle == -1)
            {
                //파일 생성
                FILE* fp = fopen(filename, "w");

                if (fp == NULL)
                {
                    printf("°Д°> 로그인에 실패하셨습니다 ! <\n");
                    system("pause");
                    return;
                }
                //파일 입력, 
                fputs(m->usrid, fp);
                fputc('\n', fp);//띄어쓰기
                fputs(m->sex, fp);

                fclose(fp);

                //디렉토리 만들기
                sprintf(directname, "D:\\Project\\%s", m->usrid);
                nResult = _mkdir(directname);
                if (nResult == -1)
                {
                    printf("···············\n");
                    printf(" > 오류가 발생했습니다. 다시 회원가입을 해주세요 <\n");
                    printf("···············\n");
                    system("pause");
                    remove(filename);
                }
                Make_User_Direct(directname);
            }

            else
            {
                printf("···············\n");
                printf("(°e °,,) 이미 등록되어 있는 아이디입니다 ! \n");
                printf("···············\n");
                Sleep(1000);
            }

            system("pause");
            break;
        }
        else
        {
            printf(" '*ω'*) 회원님의 기본 정보를 입력하세요 \n");
        }
    }
}