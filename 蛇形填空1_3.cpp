#include <iostream>
using namespace std;
#include <string.h>
int a[110][110];

int main(){
	int x,y,n,t=0;
	cin>>n;
	memset(a,0,sizeof(a));
	x=0,y=n-1;
	a[x][y]=t=1;
	while(t<n*n){
		while(x+1<n&&!a[x+1][y])	a[++x][y]=++t;
		while(y-1>=0&&!a[x][y-1])	a[x][--y]=++t;
		while(x-1>=0&&!a[x-1][y])	a[--x][y]=++t;
		while(y+1<n&&!a[x][y+1])	a[x][++y]=++t;
	}
	for(x=0;x<n;++x){
		for(y=0;y<n;++y){
			cout<<a[x][y]<<"	";
		}
		cout<<endl;
	}
	return 0 ;
}


