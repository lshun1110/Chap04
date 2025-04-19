/*
	파일명 : assign09.c
	내용 : 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.
 	작성자 : 이승훈
  	날짜 : 2025.04.18
   	버전 : v 1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void TimeC();

int main()
{
	TimeC();
	return 0;
}

void TimeC()
{
	int second, min, hour;

	printf("재생시간(초)? ");
	scanf("%d", &second);

	hour = second / 3600;
	min = second % 3600 / 60;
	second = second % 3600 % 60;
	
	printf("재생시간은 %d시간 %d분 %d초입니다\n", hour, min, second);
	return;
}
