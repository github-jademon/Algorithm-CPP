#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#define MAXN 1001
using namespace std;

int e[MAXN+1][MAXN+1], n, n2;

typedef struct{
	int y;
	int x;
}grid;


queue<grid> q;

void floodfill() {
	grid adj[4]={{-1,0},{1,0},{0,-1},{0,1}}, next, now;
	int i;
	int c=0;
	
	while(!q.empty()) {
		now = q.front();
		q.pop();
		for(i=0; i<4; i++) {
			next.x = now.x+adj[i].x;
			next.y = now.y+adj[i].y;
			if(!(next.x>=1&&next.x<=n2&&next.y>=1&&next.y<=n)) continue;
			if(!e[next.y][next.x]) {
				q.push(next);
				e[next.y][next.x]=e[now.y][now.x]+1;
			} 
		}
	}
}

int main() {
	int i,j,cnt=0;
	grid g;
	int max=-1;
	cin>>n2>>n;
	for(i=1; i<=n; i++) {
		for(j=1; j<=n2; j++) {
			cin>>e[i][j];
			if(e[i][j]==1) {
				g.y=i;
				g.x=j;
				q.push(g);
			}
		}
	}
	floodfill();
	
	for(i=1; i<=n; i++) {
		for(j=1; j<=n2; j++) {
//			cout<<e[i][j]<<" ";
			if(e[i][j]==0) {
				cnt=1;
			}
			if(e[i][j]>max) max=e[i][j];
		}
//		cout<<"\n";
	}
	
	if(max==1) cnt=2;
	if(cnt==1) cout<<-1;
	else if(cnt==2) cout<<0;
	else cout<<max-1;
}
