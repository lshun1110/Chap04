/*
	파일명 : assign01.c
	내용 : 질량과 속력을 실수로 입력받아 운동에너지를 구하는 프로그램을 작성하시오.
 	작성자 : 이승훈
  	날짜 : 2025.04.18
   	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int assignment0401();
double getMotionEnergy(double weight, double velocity);

int main()
{
	int r = assignment0401();
	return r;
}

int assignment0401()
{
	double weight = 0.0;
	double velocity = 0.0;
	
	printf("Áú·®? ");
	scanf("%lf", &weight);
	printf("¼Óµµ? ", &velocity);
	scanf("%lf", &velocity);
	
	printf("%.2lf J", getMotionEnergy(weight, velocity));

	return 0;
}

double getMotionEnergy(double weight, double velocity)
{
	return 1.0/2.0 * weight * pow(velocity,2);
}
