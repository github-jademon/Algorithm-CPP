#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin>>n;
	vector<pair<int, int>> p(n+1);
	priority_queue<int> pq;
	for(int i=0; i<n; i++) {
		cin>>p[i].first>>p[i].second;
		if(p[i].first>m) m = p[i].first;
	}
	sort(p.begin(),p.end(), greater<>());
//	for(int i=0; i<n; i++) {
//		cout<<p[i].first<<" "<<p[i].second<<"\n";
//	}
	int s=0;
	int j=0;
	for(int i=m; i>0; i--) {
		while(p[j].first>=i&&j<n) {
			pq.push(p[j++].second);
		}
		if(pq.size()) {
			s+=pq.top();
			printf("%d ",pq.top());
			pq.pop();
		}
	}
	cout<<s;
}
