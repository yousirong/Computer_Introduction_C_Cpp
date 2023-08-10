#include <iostream>
using namespace std;

void passValue(int value);
void passArray(int prime[5]);

int main() {
	int value = 1;
	cout << "before passValue : " << value << endl;
	passValue(value);
	cout << "after passValue : " << value << endl;
	
	int prime[5] = {2, 3, 5, 7, 11};
	cout << "before passArray : ";
	for(int i=0; i<5;i++){
		cout << prime[i] << " ";
	}
	cout << endl;
	passArray(prime);
	cout << "after passArray : ";
	for(int i = 0; i< 5; i++){
		cout << prime[i] << " ";
	}
	
	return 0;
}

void passValue(int value){
	value = 99;
}

void passArray(int prime[5]){
	prime[0] = 11;
	prime[1] = 7;
	prime[2] = 5;
	prime[3] = 3;
	prime[4] = 2;
}