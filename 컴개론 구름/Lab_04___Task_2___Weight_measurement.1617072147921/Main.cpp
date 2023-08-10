#include <iostream>
using namespace std;  
// 입력받는 변수 키 몸무게  표준 체중보다 많으면 과체중 적으면 저체중
int main(void) {
	int weight; 
	int height; 
	float Sweight; // Standard weight
	cin>> height >> weight; // input variable weight and height with space
	Sweight = (height - 100) * 0.9;
	// cout<<Sweight;
	if(Sweight == weight){   //Standard weight == weight
		cout<<"Standard";
	}else if(Sweight < weight){    // Standard weight < weight
		cout<<"Overweight";
	}else{                        // Standard weight > weight
		cout<<"Underweight"<<endl;    
	}
	return 0;
}