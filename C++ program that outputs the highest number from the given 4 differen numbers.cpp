#include <iostream>
using namespace std;
int main() {
	int a,b,c,d;
	cout<<"Please, input 4 different numbers: ";
	cin>>a>>b>>c>>d;
	if(a>b && a>c && a>d) {
		cout<<"The highest number is: "<<a<<endl;
	}
	if(b>a && b>c && b>d) {
		cout<<"The highest number is: "<<b<<endl;
	}
	if(c>a && c>b && c>d) {
		cout<<"The highest number is: "<<c<<endl;
	}
	if(d>a && d>b && d>c) {
		cout<<"The highest number is: "<<d<<endl;
	}
	return 0;
}
