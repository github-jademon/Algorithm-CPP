#include<iostream>
#include<queue>
#include<cstring>
#define MAX 50
using namespace std;

int t,m,n,k,x,y;
bool map[MAX][MAX];
int bx[4]={0,1,0,-1};
int by[4]={-1,0,1,0};
int cnt=0;


void bfs(int x,int y) {
	queue<pair<int,int>> q;
	q.push({x,y});
	map[x][y]=false;
	cnt++;
	
	while(!q.empty()) {
		int qx = q.front().first;
		int qy = q.front().second;
		q.pop();
		for(int i=0; i<4; i++){
			int xx = qx+bx[i];
			int yy = qy+by[i];
			if(xx>=0&&yy>=0&&xx<m&&yy<n&&map[xx][yy]){
				map[xx][yy]=false;
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
			map[x][y]=1;
		}
		for(int j=0; j<n; j++) {
			for(int z=0; z<m; z++) {
				if(map[z][j]) bfs(z,j);
			}
		}
		cout<<cnt<<endl;
		cnt=0;
		memset(map,0,sizeof(map));
	}
	
}
