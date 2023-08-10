#include <iostream>
using namespace std;
int main() {
	int arr[9][9];

	for (int i = 0; i < 9; i++) {    //Enter a multiplication table in a double array
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i+1) * (j+1);   // 
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << arr[i][j] << "\t";  //Use "/t"
		}
		cout<<"\n";   //When the multiplication table is over, it changes to the next line.
	}
	return 0;
}