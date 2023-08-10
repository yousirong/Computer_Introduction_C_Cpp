#include <iostream>
#include <random>
using namespace std;
int Lotto(int a, int b){  //called function
	for(int i=0;i<7;i++){    // print out 7 numbers
	cout << a + (rand()%(b-a+1))<< " ";  //rand()%(b-a+1) = rand()%99
	}
	return 0;
}
int main() {
	int a =1;   // [1,99]interval
	int b =99;
	Lotto(a,b); //calling Lotto function
	return 0;
}