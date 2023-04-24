#include <iostream>
using namespace std;
int main() {
	int a,b,c,d,sum,m;
	cout<<"Please, input your 4-digit number to check if it's divisible by the sum of the digits': ";
	cin>>m;
	a=m/1000;
	b=m/100%10;
	c=m/10%10;
	d=m%10;
	sum=a+b+c+d;
	if(m%sum==0) {
		cout<<"yes";
	} else {
		cout<<"no";
	}
	return 0;
}
