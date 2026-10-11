#include<stdio.h>

void display(int x[], int size) {
    printf("{");
    for (int i = 0; i < size - 1; i++) printf("%d, ", x[i]);
    printf("%d}", x[size - 1]);
}

int main(int argc, char const *argv[]) {
    int r = 0;
    printf("Enter the length of the array required: ");
    scanf("%d", &r);

    int arr[r];

    for (int i = 0; i < r; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Entered array: ");
    display(arr, r);

    return 0;
}
