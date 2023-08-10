#include <iostream>
using namespace std;
#define PI 3.141592     // define name PI is 180/n

double circleArea(double radius);
int main() {
	double rad1 , rad2;
	cin >> rad1 >> rad2;     // user input two circles rad
	cout << circleArea(rad1) - circleArea(rad2) << endl;
	return 0;
}

double circleArea(double radius){  // circleArea function is that calculates the area of a circle
	 double area_circle;
   area_circle = PI * radius * radius;    // r * r * PI = circle area

   return area_circle; //return area
}