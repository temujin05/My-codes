#include <iostream>
using namespace std;
int main() {
	int a,b,c,d,e,f,m;
	int answer;
	cout << "Please input your 5-digit number: ";
	cin>>m;
	a=m/100000;
	b=m/10000%10;
	c=m/1000%10;
	d=m/100%10;
	e=m/10%10;
	f=m%10;
	answer=a+b+c+d+e+f;
	cout<<"The sum of the digits is "<<answer;
	return 0;
}
