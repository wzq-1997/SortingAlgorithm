#include "heapSort.h"

//大根堆：完全二叉树且根系节点的元素大于任意叶子节点的元素
//根节点索引和左右叶子节点索引的关系：root(x),left(2 * x + 1), right(2 * x + 2);
//
//插入一个元素，将其调整为大根堆
void heapInsert(vector<int>&v, int index){
	while(v[index] > v[(index - 1) / 2]){
		swap(v[index], v[(index - 1) / 2]);
		index = (index - 1) / 2;
	}
}

//当一个元素发生变化时，将其调整为大根堆
//index为当前元素索引，size为大根堆的元素个数
void heapify(vector<int>&v, int index, int size){
	int left = 2 * index + 1;
	while(left < size){
		//定义largeIndex记录最大值下标
		//若右孩子节点下标未越界，且右孩子节点值大于左孩子节点值，则最大值下标为右孩子节点下标，否则最大值下标为左孩子节点下标
		int largeIndex = left + 1 < size && v[left] < v[left + 1] ? left + 1 : left;

		//更新最大节点下标
		largeIndex = v[largeIndex] < v[index] ? index : largeIndex;

		//若largeIndex == index 不需要交换，结束循环
		if(largeIndex == index){
			break;
		}

		//交换largeIndex和index节点的值
		swap(v[largeIndex], v[index]);

		//将index指向largeIndex，重新给left赋值
		index = largeIndex;
		left = 2 * index + 1;
	}
}

//堆排
//堆排思想：将要排序的数组变为大根堆，然后交换堆顶和最后一个元素，并将heapsize-1，将剩下的元素调整为大根堆结构后，继续将堆顶元素与最后一个元素交换。如此不断重复，最终将会实现数组的升序排序。
void heaoSort(vector<int>&v){
	if(v.empty() || v.size() < 2){
		return;
	}

	//将数组构造成为大根堆结构
	for(int i = 0; i < v.size(); ++i){
		heapInsert(v, i);
	}

	//堆排
	int size = v.size();
	swap(v[0], v[--size]);
	while(size > 0){
		heapify(v, 0, size);
		swap(v[0], v[--size]);
	}
}
