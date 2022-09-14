﻿// 20220914_ktw_test1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
    int num1, num2, num3; //정수 변수 선언
    num1 = num2 = num3 = 0;
    double result = 0.0;

    printf("num1 = %d \n", num1 );  //decimal
    printf("num2 = %d \n num3 = %d \n", num2, num3 );
    
    printf("num1 숫자를 입력하세요.");
    scanf("%d", &num1);  //번지 연산자 &를 사용해야 함
    printf("num2 = %d \n", num1);
    
    printf("num2 숫자를 입력하세요.");
    scanf("%d", &num2);  //번지 연산자 &를 사용해야 함
    
    printf("num2 = %d \n", num2);
    //printf("num3 숫자를 입력하세요.\n");
    
    num3 = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, num3);

    num3 = num1 - num2;
    printf("%d - %d = %d \n", num1, num2, num3);

    num3 = num1 * num2;
    printf("%d * %d = %d \n", num1, num2, num3);

    num3 = (double)num1 / num2;
    printf("%d / %d = %If \n", num1, num2, num3);  //double

    /*
    scanf("%d", &num3);  //번지 연산자 &를 사용해야 함
    printf("num3 = %d \n", num3);
    */

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
