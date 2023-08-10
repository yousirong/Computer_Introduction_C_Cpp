#include <iostream>
#include <stdlib.h>  // #include <random> -> X
#define SIZE 5
using namespace std;

int main() {
	int grade[SIZE];
	for (int i = 0; i < 5; i++) {
		grade[i] = rand() % 101;    // using rand()
		cout << grade[i] << endl;   // It prints out each time a student's grade is generated while running the for loop.
	}
	return 0;
}