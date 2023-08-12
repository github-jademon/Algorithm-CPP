#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int a, d, e;
char s, b;
map<char, int> m;
int main() {
	cin>>a;
	vector<bool> c(a);
	for(int i=2; i<a; i++) {
		if(!c[i]) {
			for(int j=i+i; j<a; j+=i) {
				c[j] = 1;
			}
		}
	}
	for(int i=2; i<a; i++) {
		if(!c[i]&&!c[a-i]) {
			cout<<i<<" "<<a-i;
			d++;
			break;
		}
	}
	if(!d) {
		cout<<-1;
	}
}
