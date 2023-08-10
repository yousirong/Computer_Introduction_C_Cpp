#include <iostream>
#include <cmath>
#define PI 3.141592
using namespace std;
int trigonometric(int x){  //called funciton
	double a = sin(x * PI / 180); //a = sin(x)
	double b = cos(x * PI / 180); //b = cos(x)
	double c = tan(x * PI / 180); //c = tan(x)
	cout<< a <<"\n"<< b <<"\n"<< c <<endl;  //Double a, b, c output
	return 0;
}
int main() {
	int x;
	cin>>x; //input x
	trigonometric(x);  //calling trigonometric function
	return 0;
}

