/*
	파일명 : assign16.c
	내용 : rgb 프로그램을 작성하시오. (비트 연산자 사용)
 	작성자 : 이승훈
  	날짜 : 2025.04.18
   	버전 : v 1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void RGB();

int main()
{
	RGB();
	return 0;
}

void RGB()
{
    int red, green, blue;
    int value = 0;
    
    printf("red? ");
    scanf("%d", &red);
    red &= 0xff;

    printf("green? ");
    scanf("%d", &green);
    green &= 0xff;

    printf("blue? ");
    scanf("%d", &blue);
    blue &= 0xff;

    value |= blue << 16;
    value |= green << 8;
    value |= red;

    printf("RGB Æ®·çÄÃ·¯: %06X", value);
    return ;
}
