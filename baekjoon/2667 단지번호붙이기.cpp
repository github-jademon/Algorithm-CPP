#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#define MAXN 100
using namespace std;

int visited[MAXN+1][MAXN+1];
int e[MAXN+1][MAXN+1], n;

typedef struct{
	int y;
	int x;
}grid;

int floodfill(grid now) {
	grid adj[4]={{-1,0},{1,0},{0,-1},{0,1}},next;
	int i;
	int c=0;
	grid u;
	queue<grid> q;
	q.push(now);
	visited[now.y][now.x]=1; 
	while(!q.empty()) {
		now = q.front();
		q.pop();
		c++;
		for(i=0; i<4; i++) {
			next.x = now.x+adj[i].x;
			next.y = now.y+adj[i].y;
			if(!(next.x>=1&&next.x<=n&&next.y>=1&&next.y<=n)) continue;
			if(visited[next.y][next.x]) continue;
			if(e[next.y][next.x]==0) continue;
			q.push(next);
			visited[next.y][next.x]=1;
		}
	}
	return c;
}

int main() {
	int i,j,m,a,b;
	grid g;
	vector<int> v;
	cin>>n;
	for(i=1;i<=n; i++) {
		for(j=1; j<=n; j++) {
			scanf("%1d",&a);
			e[i][j]=a;
		}
	}
	
	for(i=1;i<=n; i++) {
		for(j=1; j<=n; j++) {
			if(visited[i][j]==0&&e[i][j]==1) {
				g.y=i;g.x=j;
				v.push_back(floodfill(g));
			}
		}
	}
	
	sort(v.begin(),v.end());
	cout<<v.size()<<"\n";
	for(auto p:v) {
		cout<<p<<"\n";
	}
}
