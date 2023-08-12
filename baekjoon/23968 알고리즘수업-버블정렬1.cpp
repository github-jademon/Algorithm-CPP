#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long a,k,s=0,t1,t2;
	cin>>a>>k;
	long long n[a];
	for (int i=0; i<a; ++i) {
	    cin>>n[i];
	}
	
	for(int i=0; i<a&&s!=-1; ++i) {
		for(int j=0; j<a-i-1&&s!=-1; ++j) {
			if(n[j]>n[j+1]) {
				++s;
				if(k==s) {
					t1 = n[j];
					t2 = n[j+1];
					s=-1;
				}
				int t = n[j];
				n[j] = n[j+1];
				n[j+1] = t;
			}
		}
	}
	if(s==-1) cout<<(t1<t2?t1:t2)<<" "<<(t1<t2?t2:t1);
	else cout<<-1;
}
