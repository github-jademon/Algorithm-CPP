#include<bits/stdc++.h>
using namespace std;
int n, a, v[10000], m, s=10000;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>a;
		v[a-1]++;
		if(m<a) m=a;
		if(s>a) s=a;
	}
	
	
	for(int i=s-1; i<m; i++) {
		if(v[i]) {
			for(;v[i];v[i]--){
				printf("%d\n",i+1);
			}
		}
	}
}
