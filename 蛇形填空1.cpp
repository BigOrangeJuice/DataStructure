#include <iostream>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int dx[]={-1,0,1,0};
	int dy[]={0,1,0,-1};
	int g[110][110]={0};
	int x=0,y=0,d=1;
	for(int i=1;i<=m*n;++i){
		g[x][y]=i;
		int a=x+dx[d];
		int b=y+dy[d];
		if(a<0||a>=m||b<0||b>=n||g[a][b]){
			d=(d+1)%4;
			a=x+dx[d];
			b=y+dy[d];
		}
		x=a;
		y=b;
	} 
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			cout<<g[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0 ;
}


