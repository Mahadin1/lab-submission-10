#include <stdio.h>

int linearSearch(int arr[], int size, int target, int index) {
    if (index == size) return -1;
    if (arr[index] == target) return index;
    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int arr[] = {5, 3, 8, 4, 2,54,67};
    int size = 7;
    int target = 9;
    int result = linearSearch(arr, size, target, 0);
    
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    
    return 0;
}
