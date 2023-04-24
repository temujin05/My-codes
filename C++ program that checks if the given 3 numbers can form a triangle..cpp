#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"Please, input 3 three numbers to check if it can form a triangle: ";
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && c+b>a) {
		cout<<"yes, this can form a triangle";
	} else {
		cout<<"no, this cannot form a triangle";
	}
	return 0;
}
