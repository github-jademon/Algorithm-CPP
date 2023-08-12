#include<bits/stdc++.h>
#define MAX 9
using namespace std;

int arr[MAX];
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
	for(int i=0; i<n; ++i) {
		if(a[i]!=a[i-1]) {
			arr[cnt]=a[i];
			solv(cnt+1);
		}
	}
}

int main() {
	cin>>n>>m;
	for(int i=0; i<n; ++i) cin>>a[i];
	sort(a, a+n);
	solv(0);
}
