/*
	파일명 : assign15.c
	내용 : 현찰 매입 시 환율 프로그램을 작성하라.
 	작성자 : 이승훈
  	날짜 : 2025.04.18
   	버전 : v 1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#define MRate 1.75
#include<stdio.h>

void ExchangeRate();
double ExchangeRateCalCulate(double a, double b);

int main()
{
	ExchangeRate();
	return 0;
}

void ExchangeRate()
{
	double a, b, c;
	double result;
	// a 매매 기준율 b 환전우대율
	printf("원/달러 매매기준률? ");
	scanf("%lf", &a);
	printf("환전우대율(0~100%)? ");
	scanf("%lf", &b);

	result = ExchangeRateCalCulate(a, b);
	printf("달러 살 때 환율은 %lf입니다\n", result);
	printf("구입할 달러(USD)? ");
	scanf(" %lf", &c );

	printf("USD %.2lf 살 때 ==> KRW %.2lf ", c, c * (1.0 + result)); 
	return;
}

double ExchangeRateCalCulate(double a, double b)
{
	return a + ((a * (1.0 / 100.0))* MRate * (1 - (b * (1.0 / 100.0))));
}
