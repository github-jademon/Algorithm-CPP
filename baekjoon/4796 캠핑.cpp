#include<iostream>
#include<map>
using namespace std;
int n, k, s, c, i;
map<int, int, greater<int>> m;
int main() {
	for(cin>>n;i<n;i++) {
		cin>>k;
		m[k]++;
	}
	for(auto i:m) {
		c += i.second;
		s=s>i.first*c?s:i.first*c;
	}
	cout<<s;
}
