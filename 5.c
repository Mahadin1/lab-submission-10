#include <stdio.h>

void bubbleSort(int arr[], int size) {
    if (size == 1) return;
    
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubbleSort(arr, size - 1);
}

int main() {
    int size;
    printf("array size :");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i < size;i++){
    	printf("element %d :",i+1);
    	scanf("%d",&arr[i]);
	}
    bubbleSort(arr, size);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
