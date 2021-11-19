#include <iostream>
using namespace std;

void InsertSort(int *array,int n){
	for(int i=1;i<n;++i){
		int temp = array[i];
		int j=i-1;
		while(j>=0&&array[j]>temp){
			array[j+1]=array[j];
			--j;
		}
		array[j+1]=temp;
	}
}

int main(){
	int array[10]={10,9,8,7,6,5,4,3,2,1};
	InsertSort(array,10);
	for(int i=0;i<10;++i){
		cout<<array[i]<<endl;
	}
	return 0 ;
}


