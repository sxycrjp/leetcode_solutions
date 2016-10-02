#include<iostream>
using namespace std;

int partition(int a[], int start, int end) {
	int i = start, j = end - 1;
	int pivot = a[i];
	while(i < j) {
		while(i < j && a[j] >= povit)
			--j;
		a[i] = a[j];
		while(i < j && a[i] <= povit) 
			++i;
		a[j] = a[i];
	}
	a[i] = povit;
	return i;
}

void quickSort(int a[], int start, int end) {
	if(start < end - 1) {
		int povitPos = partition(a, start, end);
		quickSort(a, start, povitPos);
		quickSort(a, povitPos + 1, end);
	}
	return;
}

int main() {
	int a[10] = {1,3,5,7,9,8,6,4,2,0};
	quickSort(a, 0, 10);
	for(int i = 0; i < 10; ++i)
		cout << a[i] << ", ";
	cout << endl;
	return 0;
}