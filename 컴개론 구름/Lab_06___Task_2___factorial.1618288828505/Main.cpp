#include <iostream>
using namespace std;

double factorial(int num);

// 메인 문은 건들지 마세요
int main() {
	int num;
	cin >> num;
	cout << num << "! 값 = " << factorial(num) << endl;
	return 0;
}

double factorial(int num)
{
    if (num <= 1) return 1;   //exit condition
 
    return num * factorial(num - 1);  // call recursive function
}

/*
factorial(5) = 5 * factorial(4);
factorial(5) = 5 * 4 * factorial(3);
factorial(5) = 5 * 4 * 3 * factorial(2);
factorial(5) = 5 * 4 * 3 * 2 * factorial(1);
*/