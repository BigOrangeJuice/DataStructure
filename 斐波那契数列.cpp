#include <iostream>
using namespace std;
typedef long long ll;

float func01(float n){
	if(n==1||n==2)	return 1;
	float n1=1,n2=1;
	for(float i=3;i<=n;++i){
		n1=n1+n2;
		n2=n1-n2;
	}
	return n1;
}

float func02(float n){
	if(n==1||n==2)	return 1;
	else return func02(n-1)+func02(n-2);
}

int main(){
	float n;
	cin>>n;
	//cout<<"�ݹ飺"<<func02(n)<<endl; 
	cout<<"�ǵݹ飺"<<func01(n)<<endl; 
	return 0 ;
}


