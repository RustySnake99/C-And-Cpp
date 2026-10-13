#include<stdio.h>

void display(int x[], int length) {
    printf("{");
    for (int i = 0; i < length - 1; i++) printf("%d, ", x[i]);
    printf("%d}", x[length - 1]);
}

void selection_sort(int x[], int length) {
    for (int i = 0; i < length; i++) {
        int min_index = i;
        for (int j = i + 1; j < length; j++) {
            if (x[j] < x[min_index]) min_index = j;
        }
        int temp = x[i];
        x[i] = x[min_index];
        x[min_index] = temp;
    }
}

int main(int argc, char const *argv[]) {
    int r;
    printf("Enter the number of elements required: ");
    scanf("%d", &r);

    int arr[r];
    for (int i = 0; i < r; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Entered array:\n");
    display(arr, r);
    selection_sort(arr, r);
    printf("\nSorted Array:\n");
    display(arr, r);

    return 0;
}
