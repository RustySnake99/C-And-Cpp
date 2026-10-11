#include<stdio.h>

int main(int argc, char const *argv[]) {
    int x;
    printf("Enter the number of rows to be displayed: ");
    scanf("%d", &x);

    for (int i = 0; i <= x; ++i) {
        for (int j = 0; j < i; ++j) printf("*\t");
        printf("\n");
    }

    return 0;
}
