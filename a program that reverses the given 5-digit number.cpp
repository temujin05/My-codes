#include <iostream>
using namespace std;
int main () {
	int a,b,c,d,e,m;
	int answer;
	cin>>m;
	a=m/10000;
	b=m/1000%10;
	c=m/100%10;
	d=m/10%10;
	e=m%10;
	answer=e*10000+d*1000+c*100+b*10+a;
	cout<<answer;
	return 0;
}
