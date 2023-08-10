#include <iostream>
#define SIZE 100
using namespace std;
int main() {
	int grade[SIZE];
	int sum = 0;
	int average;
	int STUDENTS;
	cin >>STUDENTS;

	for (int i = 0; i < STUDENTS; i++) { 	
		cin >> grade[i];   // It prints out each time a student's grade is generated while running the for loop.
	}
	for (int i = 0; i < STUDENTS; i++) {
		 sum += grade[i]; 
	}
	average = sum / STUDENTS;

	// cout은 건들지말고 코드를 작성하세요.
	cout << "학생들의 성적 평균은 " << average << "점 입니다." << endl;
	return 0;
}