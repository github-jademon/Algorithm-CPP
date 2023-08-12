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
		e += b*3;
	}
	cout<<e;
}
