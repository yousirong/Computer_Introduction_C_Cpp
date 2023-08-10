#include <iostream>
using namespace std;

int main(void)
{
	int x;
	cin >> x;
	
	if(x <= 0)
		cout<< (x^3)-(9*x) + 2 ;
	else 
		cout<<7*x + 2 << endl;
	return 0;
}