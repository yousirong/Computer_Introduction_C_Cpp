#include <iostream>
using namespace std;
int main(void) {
	int n;
	int m=1;     // the factorial starts at 1 and ends with N
	cin>>n;
	for(int i =1; i <= n; ++i)   // It starts at 1 and increases by 1 until n.
	{
		m = m * i;     // m=1 =>  m * m+1 * m+2 .....2 * 1 
	}
	cout << m << endl;
	return 0;
}