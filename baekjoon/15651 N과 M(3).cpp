#include<bits/stdc++.h>
#define MAX 9
using namespace std;

int arr[MAX];
int n, m;

void solv(int cnt) {
	if(cnt==m) {
		for(int i=0; i<m; ++i) {
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	for(int i=1; i<=n; ++i) {
		arr[cnt]=i;
		solv(cnt+1);
	}
}

int main() {
	cin>>n>>m;
	solv(0);
}
