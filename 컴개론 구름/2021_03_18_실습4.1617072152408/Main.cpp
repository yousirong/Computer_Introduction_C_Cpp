#include <iostream>
using namespace std;

int main(void)
{
	int num;
	int height=0;
	int hailstone;
	cin>>num;
	hailstone = num;
	while(num>1){
	if(num%2==1)
	{
		num = num*3 + 1;
		height++;
	}else{
		num = num / 2;
		height++;
	}
	}
	
	if(num == 1){
		cout<<"height : "<<height<<"\n";
		cout<<hailstone<<" is hailstone"<<endl;
	}else{
		cout<<endl;
	}
	return 0;
		
}