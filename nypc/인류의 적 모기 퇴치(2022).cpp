#include<iostream>
#include<vector>
using namespace std;
int main() {
	int s, m, max=0, a;
	scanf("%d%d",&s,&m);
	vector<int> v[s];
	for(int i=0; i<(s*s); ++i) {
		scanf("%d",&a);
		v[i/s].push_back(a);
	}
	for(int j=0; j<s*s; ++j) {	
		int t1=0, t2=0, x=j/s, y=j%s;
		for(int i=1; i<=m; ++i) {
			if(y+i<s) t1+=v[x][y+i];
			if(y-i>-1) t1+=v[x][y-i];
			if(x+i<s) t1+=v[x+i][y];
			if(x-i>-1) t1+=v[x-i][y];
		}
		t1+=v[x][y];
		for(int i=1; i<=m; ++i) {
			if(x+i<s&&y+i<s) t2+=v[x+i][y+i];
			if(x-i>-1&&y-i>-1) t2+=v[x-i][y-i];
			if(x+i<s&&y-i>-1) t2+=v[x+i][y-i];
			if(x-i>-1&&y+i<s) t2+=v[x-i][y+i];
		}
		t2+=v[x][y];
		if(max<t1) max = t1;
		if(max<t2) max = t2;
	}
	printf("%d",max);
}
