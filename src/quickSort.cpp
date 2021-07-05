#include "head.h"

void quickSort(vector<int>&v, int L, int R){
	int less = L - 1;
	int more = R + 1;

	if(L < R){
		//将最后一个元素作为样本值，与其他位置元素进行比较
		int tmp = v[R];
		while(L < more){
			if(v[L] < tmp){
				swap(v[++less], v[L++]);
			}
			else if(v[L] > tmp){
				swap(v[L], v[--more]);
			}
			else{
				++L;
			}
		}

		quickSort(v, 0, less);
		quickSort(v, more, R);
	}
}
