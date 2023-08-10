#include <iostream>
using namespace std;

double factorial(int n){
	int m=1;     // the factorial starts at 1 and ends with N
	for(int i =1; i <= n; ++i)   // It starts at 1 and increases by 1 until n.
	{
		m = m * i;     // m=1 =>  m * m+1 * m+2 .....2 * 1 
	}
	return m;
}
int combination(int n, int r){
	int result;
	result = factorial(n) / ((factorial(n-r))*factorial(r)); // nCr formula
	return result; 
}
int main() {
	int a;  // a = n value
	int b;  // b = r value
	cin >> a >> b;   // input n value and r value
	// 출력 부분은 건들지말고 진행하세요
	cout << "C(" << a << ", " << b << ") is " << combination(a,b) << endl;
	return 0;
}