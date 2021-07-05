#include "head.h"
#include "BubbleSort.h"
#include "CountSort.h"
#include "heapSort.h"
#include "insertionSort.h"
#include "MergeSort.h"
#include "quickSort.h"
#include "SelectSort.h"

int main(){
	vector<int>flag = {1,2,3,4,5,6,7,8,9};
	vector<int>v = {1,4,7,8,5,2,3,6,9};
	vector<int>tmp = v;

	BubbleSort(tmp);
	if(tmp == flag){
		cout << "BUbbleSort's result is true" << endl;
	}
	else{
		cout << "BUbbleSort's result is false" << endl;
	}

	tmp = v;
	CountSort(tmp);
	if(tmp == flag){
		cout << "CountSort's result is true" << endl;
	}
	else{
		cout << "CountSort's result is false" << endl;
	}

	tmp = v;
	heapSort(tmp);
	if(tmp == flag){
		cout << "heapSort's result is true" << endl;
	}
	else{
		cout << "heapSort's result is false" << endl;
	}

	tmp = v;
	insertionSort(tmp);
	if(tmp == flag){
		cout << "insertionSort's result is true" << endl;
	}
	else{
		cout << "insertionSort's result is false" << endl;
	}

	tmp = v;
	MergeSort(tmp);
	if(tmp == flag){
		cout << "MergeSort's result is true" << endl;
	}
	else{
		cout << "MergeSort's result is false" << endl;
	}

	tmp = v;
	quickSort(tmp);
	if(tmp == flag){
		cout << "quickSort's result is true" << endl;
	}
	else{
		cout << "quickSort's result is false" << endl;
	}

	tmp = v;
	SelectSort(tmp);
	if(tmp == flag){
		cout << "SelectSort's result is true" << endl;
	}
	else{
		cout << "SelectSort's result is false" << endl;
	}
	return 0;
}
