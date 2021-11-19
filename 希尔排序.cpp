#include <iostream>
using namespace std;
#include <cmath>
void ShellSort(int *array,int n){
	int interval = floor(n/2);
	while(interval >= 1){
		for(int i = interval;i<n;++i){
			int temp = array[i];
			int j = i;
			while(j-interval>=0&&array[j-interval]>temp){
				array[j] = array[j-interval];
				j -= interval;
			}
			array[j] = temp;
		}
		interval = floor(interval/2);
	}
}

int main(){
	int array[10]={10,9,8,7,6,5,4,3,2,1};
	ShellSort(array,10);
	for(int i=0;i<10;++i){
		cout<<array[i]<<endl;
	}
	return 0 ;
}


