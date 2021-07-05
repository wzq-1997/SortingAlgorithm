#include "MergeSort.h"

void merge(vector<int>&v, int L, int R, int M){
	vector<int>tmp(R - L + 1);
	int i = 0;
	int p1 = L;
	int p2 = M + 1;

	while(p1 <= M && p2 <= R){
		tmp[i++] = v[p1] > v[p2] ? v[p2++] : v[p1++];
	}

	while(p1 <= M){
		tmp[i++] = v[p1++];
	}

	while(p2 <= R){
		tmp[i++] = v[p2++];
	}

	for(int i = 0; i < tmp.size(); ++i){
		v[L + i] = tmp[i];
	}
}

void mergeSort(vector<int>&v, int L, int R){
	if(v.empty() || v.size() < 2){
		return;
	}

	int mid = (L + (R - L) >> 1);
	mergeSort(v, L, mid);
	mergeSort(v, mid + 1, R);
	merge(v, L, R, mid);
}
