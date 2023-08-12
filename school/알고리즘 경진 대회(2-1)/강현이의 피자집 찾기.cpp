#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
long long a, b, c, d, e;
char s[100];
int main() {
	cin>>a>>b>>s;
	for(int i=0;i<100; i++) {
		if(s[i]=='U') {
			b++;
		} else if(s[i]=='D') {
			b--;
		} else if(s[i]=='L') {
			a--;
		} else if(s[i]=='R') {
			a++;
		}
	}
	cout<<a<<" "<<b;
}
