#include<stdio.h>

int f(int a,long long b){
	for(int i=0;i<a;i++) {
		b*=2;
	}
	return b;
}

int main() {
	int a;
	long long c,b[24]={};
	scanf("%lld",&a);
	for(int i=0;i<a;i++){
		for(int j=23;j>=0;j--) {
			scanf("%1d",&b[j]);
		}
		c=0;
		for(int j=23;j>=0;j--) {
			if(b[j]) c+=f(j,b[j]);
		}
		printf("%d\n",c);
	}
}
