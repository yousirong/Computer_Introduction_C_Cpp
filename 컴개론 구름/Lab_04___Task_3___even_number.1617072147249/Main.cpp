#include <iostream>
using namespace std;
int main(void) {
	int input;
	cin>> input;
	if(input<=0){
	cout<<"your input is less than or equal to 0";	
	}else{
	for(int i=1; i <=input; i++){
		if(i%2==1)    // if i is odd num - > continue
			continue;
		cout<< i <<" ";  //Only even numbers remain in the output 
		// <---------The continue statement jumps to here
	}
	}
	return 0;
}