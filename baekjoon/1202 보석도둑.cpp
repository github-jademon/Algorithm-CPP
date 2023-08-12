#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int k;
	cin>>n>>k;
	vector<pair<int, int>> jw(n);
	vector<long long> b(k);
	priority_queue<int> pq;
	for(int i=0; i<n; i++) {
		cin>>jw[i].first>>jw[i].second;
	}
	for(int i=0; i<k; i++) {
		cin>>b[i];
	}
	sort(jw.begin(),jw.end());
	sort(b.begin(),b.end());
	long long s=0;
	int j=0;
	for(int i=0; i<k; i++) {
		while(j<n && jw[j].first <= b[i]) {
			pq.push(jw[j++].second);
		}
		if(pq.size()) {
			s+=pq.top();
			pq.pop();
		}
	}
	cout<<s;
}
