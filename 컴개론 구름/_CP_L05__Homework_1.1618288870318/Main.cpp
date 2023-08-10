#include <iostream>
using namespace std;

double raiseToPow(double x, int power);   // declared raisToPow function
	
int main() {
	double x;
	int power;   //Received input from the user
	cin >> x >> power;
	cout << raiseToPow(x,power) <<endl;   // call function 
	return 0;
}

double raiseToPow(double x, int power){   // function in two argument
	
    if (power == 0)   // if power is 0, result is always n^0 == 1
        return 1;
    else if (power % 2 == 0)  // if power is even number
        return raiseToPow(x, power / 2) * raiseToPow(x, power / 2);
    else                     // is power is odd number
        return x * raiseToPow(x, power / 2) * raiseToPow(x, power / 2);
}

