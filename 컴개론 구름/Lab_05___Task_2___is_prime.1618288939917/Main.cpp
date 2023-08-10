#include <iostream>
using namespace std;
int is_prime(int n){
    int i = 0;
    int count = n / 2;   //Since it is a prime number, you only need to check from 2 to n/2 
    if (n <= 1) //Prime numbers must be natural numbers greater than 1.
    {
        return 0;
    }
                        //Numbers greater than (n/2) cannot be divisors
    for (i = 2; i <= count; i++) //Repeatedly increasing i from 2 to count by 1
    {
        if ((n%i) == 0) //If n is divided by i and the remainder is 0 (i is not a factor of n)
        {
            return 0; //Since it is not a prime number, it returns 0 (i is a factor, so n is not a prime number).
        }
    }
    return 1; //Finally there is no factor between 1 and last, it is a prime number
}
int main() {
	int x;
	cin >> x;
	if(is_prime(x) == 0){  //if is_prime function is return false(0) 
		cout << x << " is not prime";
	}
	else{                 // if is_prime function is return True(1)
		cout << x << " is prime";
}
	return 0;
}