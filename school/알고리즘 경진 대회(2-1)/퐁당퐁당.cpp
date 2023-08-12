#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int a, b, c, d, e;
char s;
int main() {
	cin>>a>>b;
	for(int i=(a%2==1?a:a+1); i<=b; i+=2) {
		cout<<i<<" ";
	}
}
