#include <iostream>
using namespace std;
typedef unsigned long long ull;

float func01(float n){
	float sum=1;
	for(float i=1;i<=n;++i){
		sum*=i;
	}
	return sum;
}

float func02(float n){
	if(n==1)	return n;
	else	return n*func02(n-1);
}

int main(){
	float n;
	cin>>n;
	cout<<"�ݹ飺"<<func02(n)<<endl; 
	cout<<"�ǵݹ飺"<<func01(n)<<endl; 
	return 0 ;
}


