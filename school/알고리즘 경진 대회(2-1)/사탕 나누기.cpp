#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int a, b, c, d, e;
char s;
int main() {
	cin>>a>>b>>s;
	if(s=='A') {
		e = a+b;
	} else if(s=='S') {
		e = a>b?a-b:b-a;
	} else if(s=='M') {
		e=a*b;
		if(e>50) e=0;
	}
	cout<<e;
}
