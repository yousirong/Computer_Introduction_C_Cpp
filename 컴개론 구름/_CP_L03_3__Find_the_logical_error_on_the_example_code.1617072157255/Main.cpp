#include <iostream>
using namespace std;
int main() {
	int sum, number, UpperLimit;
	sum = 0;
	number =1;
	
	cin >> UpperLimit;
	
	while (number <=UpperLimit)
	{
		if(number % 2 ==0)
		{
		sum = sum +number;
		number= number +1;
		}
	}
	cout<<sum;
}

//If I debug the above example in Visual Studio, I can see the status of the terminal executing the while statement, This is called an infinite loop, but since it's not always true, the while statement continues to run and the while statement doesn't exit.