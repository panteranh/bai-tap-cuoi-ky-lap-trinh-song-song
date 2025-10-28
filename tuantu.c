#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSortAscending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void insertionSortDescending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int N;
    printf("Nhap so luong phan tu N: ");
    scanf("%d", &N);

    int arr[N];
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }

    printf("\nMang ban dau: ");
    printArray(arr, N);

    insertionSortAscending(arr, N);
    printf("\nMang sap xep tang dan: ");
    printArray(arr, N);

    insertionSortDescending(arr, N);
    printf("\nMang sap xep giam dan: ");
    printArray(arr, N);

    return 0;
}
