#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
long long a, b, c, d, e;
char s;
int main() {
	cin>>a;
	for(int i=0; i<500; i++) {
		if(a == 1) break;
		if(a%2 == 0) a/=2;
		else a = a*3+1;
		b++;
	}
	cout<<b;
}
