#include "func.h"
#include < io.h >//findfirst를 포함하고 있는 라이브러리 특정한 파일을 찾기 위해서는 필요하다

MEMBER_REC login()
{
    int num;
    MEMBER_REC info;
    memset(&info, 0, sizeof(MEMBER_REC));//구조체 초기화
    char buffer[256];//파일 읽기
    char str[9][256] = { 0 };//buffer 저장
    int line_count = 0;//파일 줄 수 
    struct _finddata_t finddata;//파일 찾기
    long handle;
    int result = 1;
    char id[512];
    char filename[1024];

    while (true)
    {
        //화면 지우기
        system("cls");
        //로그인 입력
        printf("˛ε♡з¸\n");
        printf(" ∧ ＿ ∧\n");
        printf("( °ㅅ °)   \n");
        printf("/ つ( 로그인 )\n");
        printf("し - ＼／\n");
        printf("···············\n");
        printf(" '*ω'*) 아이디를 입력하세요 \n");
        printf("···············\n\n");
        printf("아이디 : ");  scanf_s("%s", id, sizeof(id)); while (getchar() != '\n');

        //파일 찾기
        sprintf(filename, "%s\\%s.txt", LOGIN_DIR, id);//파일 이름 명시
        handle = _findfirst(filename, &finddata);

        if (handle == -1)//파일이 존재하지 않을 때
        {
            printf("\n\n");
            printf("°Д°> 존재하지 않는 아이디입니다 ! <\n\n");
            printf("> 회원가입을 하지 않았다면 회원가입을 해주세요 <\n\n");
            printf("회원가입을 원하시면 1을 아니면 0을 입력해주세요:"); scanf_s("%d", &num);
            if (num == 1)
            {
                insert_member(&info);//회원가입 이동
            }
            
        }
        else
        {
            break;
        }
    }

    while (result != -1)//끝까지 반복하면
    {
        printf("···············\n");
        printf("'*ω'*) 로그인에 성공하였습니다 !\n");
        printf("···············\n");
        //파일 열기
        FILE* fp = fopen(filename, "r");
        //파일 읽기
        while (fgets(buffer, sizeof(buffer), fp) != 0)//받을 때
        {
            strcpy(&str[line_count][256], buffer);//복사
            line_count++;
        }
        //구조체에 정보 담기   
        strcpy(info.usrid, &str[0][256]);
        strcpy(info.sex, &str[1][256]);
        fclose(fp); //파일 닫기
        result = _findnext(handle, &finddata);
    }
    _findclose(handle);
    Sleep(2000);

    return info;
}