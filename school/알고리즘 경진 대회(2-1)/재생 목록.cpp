#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int a, b=100, c, d, e;
char s[100][100];
map<char, int> m;
int main() {
	cin>>a;
	for(int i=0; i<a; i++) {
		scanf("%s", s[i]);
	}
	for(int i=a-1; i>=0; i--) {
		cout<<s[i]<<'\n';
	}
}
