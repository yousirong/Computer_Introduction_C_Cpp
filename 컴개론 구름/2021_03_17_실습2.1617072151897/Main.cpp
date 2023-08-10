#include <iostream>
using namespace std;
int main(void)
{
	float weight;
	float height;
	float BMI;
	cin>>weight;
	cin>>height;
	BMI = weight / (height*height);
	if(BMI>=40){
		cout<<"morbidly obese";
	}else if(BMI>=35 && BMI<=39.9){
		cout<<"Severely Obese";
	}else if(BMI>=30 && BMI<=34.9){
		cout<<"Obese";
	}else if(BMI>=25 && BMI<=29.9){
		cout<<"Overweight";
	}else if(BMI>=18.5 && BMI<=24.9){
		cout<<"Healthy Weight";
	}else{
		cout<<"Underweight";
	}
	return 0;
}