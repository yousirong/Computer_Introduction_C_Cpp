#include <iostream>
using namespace std;
int main(void) {
	// 스위치 문  나머지 31은 default값으로 30일 그리고 28일 총 3개 case 단, break는 3번
	int month;
	int s1 = 28;      // 28 30 31 Set variables differently
	int s2 = 30;
	int s3 = 31;
	cin>>month;       // input month
	switch(month)     // Use month as argument in switch statement
	{
		case 2:
			cout<<"The number of days in "<< month <<" is "<< s1;
			break;
		case 4: case 6: case 9: case 11:                
			cout<<"The number of days in "<< month <<" is "<< s2;
			break;
		default:
			cout<<"The number of days in "<< month <<" is "<< s3;
			break;
	}
	return 0;
}