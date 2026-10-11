#include<stdio.h>
#include<stdbool.h>

void swap(int *x1, int *x2) {
    int temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}

void display(int x[], int length) {
    printf("{");
    for (int i = 0; i < length - 1; i++) {
        printf("%d, ", x[i]);
    }
    printf("%d}", x[length - 1]);
}

void bubble_sort(int x[], int length) {
    for (int i = 0; i < length; i++) {
        bool is_swapped = false;
        for (int j = 0; j < length - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                swap(&x[j], &x[j + 1]);
                is_swapped = true;
            }
        }
        if (!is_swapped) break;
    }
}

int main(int argc, char const *argv[]) {
    int size;
    printf("Enter the size of the array required: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Entered array: ");
    display(arr, size);
    bubble_sort(arr, size);
    
    printf("\nSorted array: ");
    display(arr, size);
    
    return 0;
}
