#include <iostream>
using namespace std;

void swap(int &a,int &b) {
	a=a+b;
	b=a-b;
	a=a-b;
}

void BubbleSort(int *array,int n) {
	for(int i=0; i<n-1; ++i) {
		for(int j=0; j<n-i-1; ++j) {
			if(array[j]>array[j+1]) {
				swap(array[j],array[j+1]);
			}
		}
	}
}

int main() {
	int array[10];
	return 0 ;
}

