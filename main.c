#include <stdio.h>



int max(int a, int b) {
    return (a > b) ? a : b;
}


int findMax(int arr[], int start, int end) {
    if (start == end) {
        return arr[start];
    }

    int mid = (start + end) / 2;
    int leftMax = findMax(arr, start, mid);
    int rightMax = findMax(arr, mid + 1, end);

    return max(leftMax, rightMax);
}



int main() {
    int arr[] = {1, 4, 2, 8, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum element in the array is: %d", findMax(arr, 0, size - 1));
    return 0;
}
