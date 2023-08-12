#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define MAXN 100
using namespace std;

int n, m, e[MAXN+2][MAXN+2], chez, t;

typedef struct {
	int x;
	int y;
}grid;

queue<grid> q;
grid dr[4]={{-1,0},{1,0},{0,-1},{0,1}};

void floodfill() {
	grid now, next;
	now.x = 1;
	now.y = 1;
	q.push(now);
	while(!q.empty()) {
		now=q.front();
		q.pop();
		for(int i=0; i<4; i++) {
			next.x=now.x+dr[i].x;
			next.y=now.y+dr[i].y;
			if(next.x>=1&&next.x<=m&&next.y>=1&&next.y<=n&&(e[next.y][next.x]==0||e[next.y][next.x]==t+1)) {
				e[next.y][next.x]=t;
				q.push(next);
			}
		}
	}
}

void fun(int y,int x) {
	int cnt=0;
	for(int i=0; i<4; i++) {
		if(e[y+dr[i].y][x+dr[i].x]==t) cnt++;
	}
	if(cnt>1) {
		e[y][x]=0;
		chez--;
	} 
}

int main() {
	grid g;
	cin>>n>>m;s
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>e[i][j];
			if(e[i][j]==1) chez++;
		}
	}
	
	while(chez>0) {
		t--;
		floodfill();
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				if(e[i][j]==1){
					fun(i,j);
				}
			}
		}
	}
	
	cout<<t*-1;
	
}
