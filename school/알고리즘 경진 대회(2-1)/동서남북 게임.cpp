#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int a, c, d, e;
char s, b;
map<char, int> m;
int main() {
	cin>>a;
	for(int i=0; i<a; i++) {
		cin>>s;
		if(s=='L') {
			c += 270;
		} else if(s=='R') {
			c += 90;
		} else if(s=='B') {
			c +=180;
		}
	}
	if(c%360==0) {
		b='N';
	} else if(c%360==90) {
		b='E';
	} else if(c%360==180) {
		b='S';
	} else if(c%360==270) {
		b='W';
	}
	cout<<b;
}
