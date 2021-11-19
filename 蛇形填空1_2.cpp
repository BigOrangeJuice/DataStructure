#include <iostream>
using namespace std;
const int N=110;
int q[N][N],n,m;

int main(){
	cin>>n>>m;
	int i,j,s=1,x=n,z=1,y=m,k=1;
	while(s<=x&&z<=y){
		for(i=z;i<=y;++i)
			q[s][i]=k++;
		for(i=s+1;i<=x;++i)
			q[i][y]=k++;
		for(i=y-1;i>=z&&s<x;--i)
			q[x][i]=k++;
		for(i=x-1;i>s&&z<y;--i)
			q[i][z]=k++;
		s++,x--,z++,y--;
	}
	for(i=1;i<=n;++i){
		for(j=1;j<=m;++j){
			cout<<q[i][j]<<"	";
		}
		cout<<endl;
	}
	return 0 ;
}


