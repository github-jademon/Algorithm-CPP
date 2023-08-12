#include<iostream>
using namespace std;

int main() {
	int n, l, h, a[50], s=0;
	cin>>n>>l>>h;
	for(int i=0; i<n; ++i) {
		cin>>a[i];
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n-i-1; ++j) {
			if(a[j]>a[j+1]) {
				int t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
	}
	
	for(int i=l; i<n-h; ++i) {
		s+=a[i];
	}
	printf("%.15lf",(double)s/(n-l-h));
}
