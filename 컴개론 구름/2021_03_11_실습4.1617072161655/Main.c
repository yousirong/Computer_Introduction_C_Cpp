#include<stdio.h>

int main()
{
	int SY = 24;//SY라는 이름의 int 형의 변수 선언과 동시에 24로 초기화
	int SH = 25;//SH라는 이름의 int 형의 변수 선언과 동시에 25로 초기화
	float X;
	X= (float)SY / SH;//새로운 변수를 만들어, SY를 SH로 나눈 값을 저장한다.
	//(이때 나눈값의, 소숫점 둘째자리까지 정확하게 저장할 수 있도록 한다.)

	printf("%.2f\n", X+1);//저장된 값에서 1을 더해 숫자만 출력한다.

	return 0;  //main함수에 0반환하고 프로그램 종료
}