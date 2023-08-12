#include<iostream>
#include<queue>
#include<cstring>
#define MAX 50
using namespace std;

int t,m,n,k,x,y;
int a[MAX][MAX];
int v[MAX][MAX];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};
int cnt=0;


void bfs(int x,int y) {
	queue<pair<int,int>> q;
	q.push({x,y});
	v[x][y]=++cnt;
	
	while(!q.empty()) {
		int qx = q.front().first;
		int qy = q.front().second;
		q.pop();
		for(int i=0; i<4; i++){
			int xx = qx+dx[i];
			int yy = qy+dy[i];
			if(xx>=0&&yy>=0&&xx<m&&yy<n&&!v[xx][yy]&&a[xx][yy]){
				v[xx][yy]=cnt;
				q.push({xx,yy});
			}
		}
	}
	
}

int main() {
	cin>>t;
	for(int i=0; i<t; i++) {
		cin>>m>>n>>k;
		for(int j=0; j<k; j++) {
			cin>>x>>y;
			a[x][y]=1;
		}
		for(int j=0; j<n; j++) {
			for(int z=0; z<m; z++) {
				if(a[z][j]&&!v[z][j]) bfs(z,j);
			}
		}
		cout<<cnt<<endl;
		cnt=0;
		memset(v,0,sizeof(a));
		memset(a,0,sizeof(a));
	}
	
}
