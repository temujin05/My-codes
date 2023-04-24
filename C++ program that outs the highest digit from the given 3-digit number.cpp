#include <iostream>
using namespace std;
int main() {
	int m,a,b,c;
	cout<<"Please, input 3-digit number";
	cin>>m;
	a=m/100;
	b=m/10%10;
	c=m%10;
	if(a>b && a>c) {
		cout<<"the highest digit is "<<a<<endl;
	}
	if(b>a && b>c) {
		cout<<"the highest digit is "<<b<<endl;
	}
	if(c>a && c>b) {
		cout<<"the highest digit is "<<c<<endl;
	}
	return 0;
}
