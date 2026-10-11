#include<stdio.h>

void display(int x[], int length) {
    printf("{");
    for (int i = 0; i < length - 1; i++) {
        printf("%d, ", x[i]);
    }
    printf("%d}", x[length - 1]);
}

void insertion_sort(int x[], int length) {
    for (int i = 0; i < length; i++) {
        int key =  x[i], j = i - 1;
        while (j >= 0 && x[j] > key) {
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = key;
    }
}

int main(int argc, char const *argv[]) {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Entered array: ");
    display(arr, size);
    insertion_sort(arr, size);

    printf("\nSorted array: ");
    display(arr, size);

    return 0;
}
