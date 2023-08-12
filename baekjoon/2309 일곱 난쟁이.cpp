#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[9], t1, t2, s=0;
	for(int i=0; i<9; ++i) {
		scanf("%d",&a[i]);
		s+=a[i];
	}
	sort(a+0, a+9);
	for(int i=0; i<8&&s; ++i) {
		for(int j=i+1; j<9&&s; ++j) {
			if(s-a[j]-a[i]==100) {
				for(int k=0; k<9; ++k) {
					if(k!=i&&k!=j) {
						printf("%d\n",a[k]);
					}
				}
				return 0;
			}
		}
	}
	
}
