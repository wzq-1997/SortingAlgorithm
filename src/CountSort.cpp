#include "CountSort.h"

void CountSort(vector<int>&v){
	//计算原数组的长度，用于创建临时数组
	int size = v.size();

	//创建临时数组tmp，用于记录每个数出现的次数
	vector<int>tmp(size + 1);

	for(int i = 0; i < size; ++i){
		++tmp[v[i]];
	}

	//定义变量j用于记录v的索引
	int j = 0;
	for (int i = 0; i < size + 1; ++i){
		int num = tmp[i];
		while(num > 0){
			v[j++] = i;
			--num;
		}
	}
}

