#include<bits/stdc++.h>
#define MAX 9
using namespace std;

int arr[MAX];
int v[MAX];
int n, m;
int a[10000];

void solv(int cnt) {
	if(cnt==m) {
		for(int i=0; i<m; ++i) {
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	int c=0;
	for(int i=cnt; i<n; ++i) {
		if(!v[i]&&a[i]!=c) {
			arr[cnt]=a[i];
			v[i]=true;
			c = a[i];
			solv(cnt+1);
			v[i]=false;
		}
	}
}

int main() {
	cin>>n>>m;
	for(int i=0; i<n; ++i) cin>>a[i];
	sort(a, a+n);
	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
	solv(0);
}
