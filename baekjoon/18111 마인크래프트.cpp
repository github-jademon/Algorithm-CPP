#include<stdio.h>

int a[256][1];

int main(){
	int n,m,b,c,e,d;
	scanf("%d %d %d",&n,&m,&b);
	for(int i=0;i<n*m;i++){
		scanf("%d",&c);
		a[c][1]++;
	}
	d=a[0][1]>a[1][1]?0:1;
	e=a[0][1]>a[1][1]?1:0;
	for(int i=2;i<256;i++){
		if(a[i][1]>a[d][1]){
			e=d;
			d=i;
		} else if(a[i][1]>a[e][1]) e=i;
	}
	if(d>e){
		if(b>=a[e][1]) printf("%d %d",a[e][1],d);
		else printf("%d %d",a[d][1]*2,e);
	}
	else{
		if(a[d][1]>a[e][1]*2) printf("%d %d",a[e][1]*2,d);
		else{
			if(b>=a[d][1]) printf("%d %d",a[d][1],e);
			else printf("%d %d",a[e][1]*2,d);
		}
	}
}
