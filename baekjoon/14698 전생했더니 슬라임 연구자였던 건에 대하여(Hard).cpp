#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main() {
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	int t,n;
	long long f,s;
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	cin>>t;
	for(int i=0; i<t; i++) {
		cin>>n;
		for(int j=0; j<n; j++) {
			cin>>f;
			pq.push(f);
		}
		long long p=1;
		while(pq.size()>1) {
			f=pq.top();pq.pop();
			s=pq.top();pq.pop();
			p=p*(f*s%mod)%mod;
			pq.push(f*s);
		}
		if(n==1) cout<<1<<"\n";
		else cout<<p<<"\n";
		pq.pop();
	}
}
