#include <iostream>
#include <numeric>
using namespace std;
int main() {
	int a,b,i;
	cout<<"Please, input two numbers: ";
	cin>>a>>b;
	int c=gcd(a,b); 
	if (a>=b) {
	    for(i=1; i<=b; i++) {
	        if(b%i==0) {
	            if(a%i==0) {
	                c=i;
	            }
	        }
	    }
	} else {
	    for(i=1; i<=a; i++) {
	        if(a%i==0) {
	            if(b%i==0) {
	                c=i;
	            }
	        }
	    }
	}
	cout<<"The highest common factor is "<<c<<endl;
	return 0;
}
	
