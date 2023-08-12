#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long a,k,s=0,t,t1;
	cin>>a>>k;
	long long n[a];
	for (int i=0; i<a; ++i) {
	    cin>>n[i];
	}
	for(int i=0; i<a; ++i) {
		cout<<n[i]<<" ";
	}
	cout<<endl;
	
	for(int i=1; i<a&&s!=-1; ++i) {
		for(int j=i; j>=0&&s!=-1; --j) {
			if(n[j]<n[j-1]) {
				++s;
				if(k==s) {
					t1 = n[j];
					s=-1;
				}
				if(j!=0) {
					int t = n[j];
					n[j] = n[j-1];
					n[j-1] = t;
				}
				cout<<n[j]<<" ";
			}
		}
	}
	cout<<endl;
	for(int i=0; i<a; ++i) {
		cout<<n[i]<<" ";
	}
	if(s==-1) cout<<t1;
	else cout<<-1;
}
