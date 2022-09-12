#include  <stdio.h>


int main(void)
{
	int num1 = 3, num2 = 4, num3 = 5, num4 = 2, num5 = 10;
	int result = num1 + num2 * num3 / num4 - num5;
 
	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
	printf("num3: %d \n", num3);
	printf("num4: %d \n", num4);
	printf("num5: %d \n\n", num5);
	printf("%d + %d * %d / %d - %d = %d \n", num1, num2, num3, num4, num5, result);

	return 0;
}

/*

//변수를 이용한 데이터의 저장

int num;
num = 20;
printf("%d \n", num);
*/

/*
//변수의 다양한 선언 및 초기화 방법

int num1, num2;
int num3 =30, num4 =40;

num1 = num2 = 0;

printf("num1: %d, num2: %d \n", num1, num2);
printf("num3: %d, num4: %d \n", num3, num4);

return 0;
*/

/*
//덧셈 프로그램의 완성

int num1 = 3, num2 = 4;
int result1 = num1 + num2;
int result2 = num1 - num2;
int result3 = num1 * num2;
int result4 = num1 / num2;
int result5 = num1 % num2;

//num1 = num2 = 0;

printf("num1: %d, num2: %d \n", num1, num2);
printf("%d + %d = %d \n", num1, num2, result1);
printf("%d - %d = %d \n", num1, num2, result2);
printf("%d * %d = %d \n", num1, num2, result3);
printf("%d / %d = %d(몫) \n", num1, num2, result4);
printf("%d / %d = %d(나머지) \n", num1, num2, result5);

return 0;
*/

/*
//복합 대입 연산자

int num1 = 2, num2 = 4, num3 = 6;

printf("num1: %d, num2: %d, num3: %d \n", num1,  num2,  num3);
num1 += 3;   //  num1 =  num1 + 3;
num2 *= 4;   //  num2 =  num2 * 4;
num3 /= 5;   //  num3 =  num3 / 5;
num3 %= 5;   //  num4 =  num4 % 5;
printf("Result: %d, %d, %d(몫), %d(나머지) \n", num1, num2, num3, num3);
return 0;
*/

/*
//부호의  의미를 갖는 + 연산자와 - 연산자

int num1 = +2, num2 = -4;

num1 = -num1;
printf("num1: %d \n", num1);
num2 = -num2;
printf("num2: %d \n", num2);

return 0;
*/

/*
//증가, 감소 연산자

int num1 = 12, num2 = 12;

printf("num1: %d \n", num1);
printf("num1++: %d \n", num1++);
printf("num1: %d \n", ++num1);
printf("num2: %d \n", num2);
printf("num2--: %d \n", num2--);
printf("num2: %d \n", --num2);
return 0;
*/

/*
//증가, 감소 연산자 추가 예제

int num1 = 10, num2 = (num1--)+2;

printf("num1: %d \n", num1);
printf("num2: %d \n", num2);

return 0;
*/

/*
//연산자의 우선순위와 결합방향

int num1 = 3, num2 = 4, num3 = 5, num4 = 2, num5 = 10;
int result = num1 + num2 * num3 / num4 - num5;

printf("num1: %d \n", num1);
printf("num2: %d \n", num2);
printf("num3: %d \n", num3);
printf("num4: %d \n", num4);
printf("num5: %d \n\n", num5);
printf("%d + %d * %d / %d - %d = %d \n", num1, num2, num3, num4, num5, result);

return 0;
}

*/