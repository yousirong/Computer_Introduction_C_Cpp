#include <iostream>
using namespace std;

// 함수 선언
void print_binary(int x);

// main문은 건들지 마세요
int main() {
	int n;
	cin >> n;
	print_binary(n);
	return 0;
}
// 함수 정의 - cout 여기서 하세요
void print_binary(int x){
	if (x == 0 || x == 1)   //Binary output function outputs only 0 and 1
	{
		cout << x;   
		return;
	}
	print_binary(x/2);   //Continue dividing by 2
	cout << x % 2;
}
