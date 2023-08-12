#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int n, f, s, t;
vector<pair<int, int>> v;
int main() {
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>f>>s;
		v.push_back({s, f});
	}
	sort(v.begin(), v.end());
	s=0;
	for(auto i:v) {
		if (s <= i.second) {
			s = i.first;
			t++;
		}
	}
	cout<<t;
}
