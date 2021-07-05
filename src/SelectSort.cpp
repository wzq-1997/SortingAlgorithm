#include "SelectSort.h"

void SelectSort(vector<int>&v){
	if(v.empty() || v.size() < 2){
		return;
	}

	//寻找最小的数与i位置的数进行交换
	for(iny i = 0; i < v.size(); ++i){
		int minIndex = i;
		for(int j = i + 1; j < v.size(); ++j){
			minIndex = v[j] < v[minIndex] ? j : minIndex;
		}
		swap(minIndex, i);
	}
}
