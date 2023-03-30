#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define User_DIR "D:\\Project"
#define LOGIN_DIR "D:\\Project\\login"
#define SortClothes "D:\\Project\\clothes classification"
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//strtok함수가 선언된 헤더 파일
#include <ctype.h>
#include <conio.h>
#include <stdbool.h>
#include <io.h>//findfirst 함수가 포함되어 있는 것
#include <direct.h>		//mkdir
#include <errno.h>		//errno
#include <sys/types.h>
#include <time.h>
#include <locale.h>
#include <wchar.h>

typedef struct MEMBER
{
    char usrid[1024];      // 아이디
    char paswd[1024];     // 비밀번호
    char name[1024];      // 회원 이름
    char sex[1024];         // 성별
    int age;         // 나이
} MEMBER_REC;

typedef struct Recom
{
    int temp;//온도
    char style[64];
}RECOM;

typedef struct Clothes
{
    char bottom[1024];
    char top[1024];
    char outer[1024];
    char dress[1024];
}CLOTHES;

void insert_member(MEMBER_REC* m);
MEMBER_REC login();
int main();
void after_login(MEMBER_REC* info);
void remove_member(MEMBER_REC* info);
void _recommend(MEMBER_REC* info);
void _FindCommonDirectory(RECOM* recom, MEMBER_REC* info, CLOTHES* clothes);
void _FindUserStyles(CLOTHES* clothes, MEMBER_REC* info, RECOM* recom, CLOTHES* userclothes);
void _remove_clothes(MEMBER_REC* info);
void Sport(MEMBER_REC* info, char* directname);
void _saveclothes(MEMBER_REC* info);
void Formal(MEMBER_REC* info, char* directname);
void Casual(MEMBER_REC* info, char* directname);
void Make_Clothes_File(char* directname);
void Remove_Clothes_File(char* directname);
void Make_User_Direct(char* directname);
void Make_User_Direct_Sport(char* directname);
void Make_User_Direct_Formal(char* directname);
void Make_User_Direct_Causal(char* directname);
void _ReadcommonFile(char* filename, RECOM* recom, CLOTHES* clothes, int num);
void _ReadUserFile(char* filename, CLOTHES* userclothes, int num, char* clothes);
char* ConvertWCtoC(wchar_t* str);
int remove_user_direct(char* directname, MEMBER_REC* info);
wchar_t* ConverCtoWC(char* str);
void engtokor(char* str);