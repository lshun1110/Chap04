/*
	파일명 : assign17.c
	내용 : 32비트 크기의 데이터에는 0~31번의 비트가 존재한다 n번째 비트만 1인값을 구해서 16진수와 10진수로 출력하는 프로그램을 작성하시오.(n은 7,15,23,31)
 	작성자 : 이승훈
  	날짜 : 2025.04.18
   	버전 : v 1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Data();

int main()
{
	Data();
	return 0;
}

void Data()
{
	unsigned int x = 1;

	x = x << 7;
	printf("7번 비트만 1인 값: %08x %d\n", x, x);
	x = x << 8;
	printf("15번 비트만 1인 값: %08x %d\n", x, x);
	x = x << 8;
	printf("23번 비트만 1인 값: %08x %d\n", x, x);
	x = x << 8;
	printf("31번 비트만 1인 값: %08x %d", x, x);
	return;
}
