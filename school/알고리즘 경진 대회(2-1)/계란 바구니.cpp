#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int a, b, c, d, e;
char s;
int main() {
	cin>>a>>b;
	e = a/b;
	d = a%b;
	cout<<(d>1?e+1:e);
}
