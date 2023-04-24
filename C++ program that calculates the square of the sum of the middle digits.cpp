#include <iostream>
using namespace std;
int main() {
	int a,b,c,d,m;
	int answer;
	cout<<"Please, input your number: ";
	cin>>m;
	a=m/1000;
	b=m/100%10;
	c=m/10%10;
	d=m%10;
	answer=(b+c)*(b+c);
	cout<<answer;
	return 0;
}
