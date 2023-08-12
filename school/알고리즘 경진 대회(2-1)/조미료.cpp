#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
long long a, b, c, d, e;
map<long long, long long, greater<long long>> m;
int main() {
	cin>>a>>b;
	for(int i=0; i<a; i++) {
		cin>>c>>d;
		m[c]+=d;
	}
	for(auto& i:m) {
		if(b-i.second>0) {
			e+=i.first*i.second;
			b-=i.second;
		} else {
			e+=i.first*b;
			break;
		}
	}
	cout<<e;
}
