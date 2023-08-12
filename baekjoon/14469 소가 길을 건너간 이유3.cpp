#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<pair<int, int>> v(n);
	for(int i=0; i<n; i++) {
		cin>>v[i].first>>v[i].second;
	}
	sort(v.begin(), v.end());
	int time=0;
	for(int i=0; i<n; i++) {
		if(time<v[i].first) time=v[i].first;
		time+=v[i].second;
	}
	cout<<time;
}
