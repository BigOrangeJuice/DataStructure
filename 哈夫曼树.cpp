#include<iostream>
using namespace std;

#define maxsize 100
typedef struct Node {
	int weight;
	int parent;
	int lchild, rchild;
}Node,*HuffmanTree;

void HuffmanTreeCreate(HuffmanTree HT, int* wet, int n);
void Select(HuffmanTree HT, int n, int& s1, int& s2);
void HuffmanTreeCoding();
void CountWPL();

void HuffmanTreeCreate(HuffmanTree HT,int* wet, int n) {
	int m, s1, s2;
	m = n * 2 - 1;
	HT = new Node[m + 1];
	for (int i = 1; i <= n; ++i) {
		HT[i].parent = HT[i].lchild = HT[i].rchild = 0;
		HT[i].weight = wet[i];
	}
	for (int i = n + 1; i <= m; ++i) {
		HT[i].weight = HT[i].parent = HT[i].lchild = HT[i].rchild = 0;
	}
	for (int i = n + 1; i <= m; ++i) {
		Select(HT, i - 1, s1, s2);
		HT[s1].parent = i;//最小值
		HT[s2].parent = i;//次小值
		HT[i].lchild = s1;
		HT[i].rchild = s2;
		HT[i].weight = HT[s1].weight + HT[s2].weight;
		cout << HT[i].weight << "(" << HT[s1].weight <<" " << HT[s2].weight << ")" << endl;
	}
	cout << endl;
}

void Select(HuffmanTree HT, int n, int& s1, int& s2) {
	//最小值
	int minum;
	for (int i = 1; i <= n; ++i) {
		if (HT[i].parent == 0) {
			minum = i;
			break;
		}
	}
	for (int i = 1; i <= n; ++i) {
		if (HT[i].parent == 0) {
			if (HT[i].weight < HT[minum].weight) {
				minum = i;
			}
		}
	}
	s1 = minum;
	//次小值
	for (int i = 1; i <= n; ++i) {
		if (HT[i].parent == 0 && i != s1) {
			minum = i;
			break;
		}
	}
	for (int i = 1; i <= n; ++i) {
		if (HT[i].parent == 0 && i != s1) {
			if (HT[i].weight < HT[minum].weight) {
				minum = i;
			}
		}
	}
	s2 = minum;
}

int main() {
	HuffmanTree ht;
	int* wet, n, wei;
	cin >> n;
	wet = new int[n + 1];
	for (int i = 1; i <= n; ++i) {
		cin >> wei;
		wet[i] = wei;
	}
	HuffmanTreeCreate(ht, wet, n);
	return 0;
}
