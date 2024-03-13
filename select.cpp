#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void select(int arr[], int n) {
    int i, j, k;

    for (i=0;i<n-1;i++) {
        k = i;
        for (j=i+1;j<n;j++) {
            if (arr[j]<arr[k]) {
                k=j;
            }
        }
        swap(&arr[i], &arr[k]);
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print(arr, n);

    select(arr, n);

    printf("Sorted array: ");
    print(arr, n);

    return 0;
}

