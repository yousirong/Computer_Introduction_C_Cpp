#include <stdio.h>

void gudan(int i, int j)   //반복for문을 아직 안배웠기 때문에 재귀함수를 구현했습니다. gudan이라는 함수에 int형 i인자와 j인자를 설정했습니다.
{
	if(i <=9)                //만약 i인자가 9이하일때까지
	{
		printf("%d X %d = %d\n",i , j , i*j);  //printf함수로 구구단 출력 첫번째 %d는 i 출력, 두번째 %d는 j 출력, 세번째 %d는 i * j 출력
		//* 별표시는 곱하기의 뜻
		if(j <9)               //만약 j가 9미만이면
			gudan(i, j + 1);     //gudan함수에 i는 그대로 j인자만 1증가
		else	                 //만약 jrk 9가 아닐경우
			return gudan(i+1,1); //gudan함수에 i인자 1증가 j인자에 1대입
		                       //하고 gudan함수 리턴
		                       //원래 구구단에서 9가 끝나면 다음 단으로 
		                       //넘어가기 위함
	}
}
int main(){
		int x = 9;    //9단이므로 임의의 int형 변수x에 9로 초기화
	gudan(x,1);     //첫번째 인자에 x, 두번째 인자에 1을 넣고 gudan이라는 함수실행 
return 0;
}