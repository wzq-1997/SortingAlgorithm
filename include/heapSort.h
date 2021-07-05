#pragma once
#include "head.h"

//插入一个元素将其调整为大根堆
void heapInsert(vector<int>&v, int index);

//当其中一个元素发生变化后，将其重新调整为大根堆
void heapify(vector<int>&v, int index, int size);

//堆排序
void heapSort(vector<int>&v);

