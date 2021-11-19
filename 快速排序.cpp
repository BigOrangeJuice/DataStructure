#include <iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>
#include <time.h>
int array[100];
int num=20;
int QSort(int *array,int l,int r) {
	if(l<r) {
		int pivot=array[l];
		int x=l,y=r;
		while(x<y) { //挖坑填数【先从后往前，再从前往后】
			while(x<y&&array[y]>=pivot)	y--;
			if(x<y)	array[x]=array[y];
			while(x<y&&array[x]<=pivot)	x++;
			if(x<y)	array[y]=array[x];
		}
		array[x]=pivot;
		QSort(array,l,x-1);
		QSort(array,x+1,r);
	}
}

void Traverse(int *array) {
	for(int i=0; i<num; ++i) {
		cout<<array[i]<<endl;
	}
}

void Init(int *array) {
	srand((unsigned int)time(NULL));
	memset(array,0,sizeof(array));
	for(int i=0; i<num; ++i) {
		array[i] = rand()%50;
	}
}

int main() {
	Init(array);
	Traverse(array);
	cout<<"============================"<<endl;
	QSort(array,0,19);
	Traverse(array);
	return 0 ;
}


