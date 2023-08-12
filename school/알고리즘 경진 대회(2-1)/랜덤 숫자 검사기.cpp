#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int a, b, c, d, e;
char s;
int main() {
	cin>>a;
	for(int i=0; i<a; i++) {
		cin>>b;
		b%2==1?c++:d++;
	}
	if(c-d<2&&c-d>-2) {
		cout<<"Good";
	} else {
		cout<<"Not Good";
	}
}
