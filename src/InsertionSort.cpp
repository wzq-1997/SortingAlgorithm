#include "InsertionSort.h"

void InsertionSort(vector<int>&v){
	if(v.empty() || v.size() < 2){
		return;
	}

	for(int i = 1; i < v.size(); ++i){
		for(int j = i - 1; j >= 0 && v[j] > v[j + 1]; --j){
			swap(v[j], v[j + 1]);
		}
	}
}

