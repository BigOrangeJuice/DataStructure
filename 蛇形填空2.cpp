#include <iostream>
using namespace std;
int a[1000][1000];

void func(int n,int m){
	int i,j;
	if(m>=n/2)	return;
	for(i=m+1;i<=n-m*2;++i){
		a[m+1][i]=a[m+1][i-1]+1;
	}
	for(i=m+2,j=0;i<=n-m*2;++i,++j){
		a[i][n-1-2*m-j]=a[i-1][n-2*m-j]+1;
	}
	for(i=n-1-m*2;i>m+1;--i){
		a[i][m+1]=a[i+1][m+1]+1;
	}
	func(n,m+1);
}

int main(){
	int n,m,i,j;
	a[1][0]=0;
	cin>>m;
	while(m--){
		cin>>n;
		a[1][1]=1;
		func(n,0);
		for(i=1;i<=n;++i){
			cout<<a[i][1]<<"	";
			for(j=2;j<=n+1-i;++j){
				cout<<a[i][j]<<"	"; 
			}
			cout<<endl;
		}
	}
	return 0 ;
}


