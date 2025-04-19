/*
	파일명 : assign02.c
	내용 : 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램을 작성하시오.
 	작성자 : 이승훈
  	날짜 : 2025.04.18
   	버전 : v 1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
void Ftem();
double Calculate(double t);

int main()
{
	Ftem();
}

void Ftem()
{
	double c, t;
	
	printf("Č­žž żÂľľ? ");
	scanf("%lf", &t);
	
	c = Calculate(t);
	printf("%.2lf F = %.2lf C",t,c);
}

double Calculate(double t)
{
	return (t - 32) * (5.0 / 9.0);
}
