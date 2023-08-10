#include <iostream>
using namespace std;
int main()
{
	int sum, number, UpperLimit;
	sum = 0;
	number = 1;

	cin >> UpperLimit;

	while (number <= UpperLimit)
	{
		if (number % 2 == 1) // 홀수이면
		{
			sum = sum + number;	 // sum = 0 에 현재 넘버 1을 더함
			number = number + 2; // 1+2 =3 홀수 또 while문에 들어감 upperlimit까지 계속 계산
		}
	}
	cout << sum;
}