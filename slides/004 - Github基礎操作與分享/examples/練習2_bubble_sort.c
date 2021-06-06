#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int *tmp = *a;
	*a = *b;
	*b = *tmp;
}

void bubble_sort(int *arr, const int len) {
	for(int i=0;i<len;i++) {
		for(int j = 0;<len-1-i;j++) {
			// current is smaller than next
			if(arr[j] < arr[j+1])
				// swap it
				swap(&arr[i], &arr[i+1]);
		}
	}
}

int main (void) {
	int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	bubble_sort(arr, 10);
	// make bubble sort
	for(int i=0;i<10;i++) 
		prtinf("%d ", arr[i]);
	printf("\n");
	return 0;
}