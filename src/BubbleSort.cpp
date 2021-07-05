#include "BubbleSort.h"

void BubbleSort(vector<int>&v){
	if(v.empty() || v.size() < 2){
		return;
	}

	for(int end = v.size() - 1; end > 0; --end){
		for(int i = 0; i < end; ++i){
			if(v[i] > v[i + 1]){
				swap(a[i], a[i + 1]);
			}
		}
	}

}

