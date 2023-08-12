#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#define MAXN 101
using namespace std;

int e[MAXN+1][MAXN+1][MAXN+1], n, m, f;

typedef struct{
	int y;
	int x;
	int f;
}grid;


queue<grid> q;

void floodfill() {
	grid adj[6]={{0,-1,0},{0,1,0},{0,0,-1},{0,0,1},{-1,0,0},{1,0,0}}, next, now;
	int i;
	int c=0;
	
	while(!q.empty()) {
		now = q.front();
		q.pop();
		for(i=0; i<6; i++) {
			next.x = now.x+adj[i].x;
			next.y = now.y+adj[i].y;
			next.f = now.f+adj[i].f;
			if(!(next.x>=1&&next.x<=m&&next.y>=1&&next.y<=n&&next.f>=1&&next.f<=f)) continue;
			if(e[next.f][next.y][next.x]==0) {
				q.push(next);
				e[next.f][next.y][next.x]=e[now.f][now.y][now.x]+1;
			} 
		}
	}
}

int main() {
	int d,i,j,cnt=0;
	grid g;
	int max=-1;
	cin>>m>>n>>f;
	for(d=1; d<=f; d++) {
		for(i=1; i<=n; i++) {
			for(j=1; j<=m; j++) {
				cin>>e[d][i][j];
				if(e[d][i][j]==1) {
					g.y=i;
					g.x=j;
					g.f=d;
					q.push(g);
				}
			}
		}
	}

	floodfill();
	
	for(d=1; d<=f; d++) {
		for(i=1; i<=n; i++) {
			for(j=1; j<=m; j++) {
//				cout<<e[d][i][j]<<" ";
				if(e[d][i][j]==0) {
					cnt=1;
				}
				if(e[d][i][j]>max) max=e[d][i][j];
			}
//			cout<<max<<" ";
//			cout<<"\n";
		}
	}
	
	if(max==1) cnt=2;
	if(cnt==1) cout<<-1;
	else if(cnt==2) cout<<0;
	else cout<<max-1;
}
