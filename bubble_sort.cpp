#include<iostream>
using namespace std;

void bubble_sort(int x[], int length) {
    for (int i = 0; i < length; i++) {
        bool is_swapped = false;
        for (int j = 0; j < length - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                swap(x[j], x[j + 1]);
                is_swapped = true;
            }
        }
        if (!is_swapped) break;
    }
}

void display(int x[], int length) {
    cout << "{";
    for (int i = 0; i < length - 1; i++) cout << x[i] << ", ";
    cout << x[length - 1] << "}";
}

int main(int argc, char const *argv[]) {
    int r;
    cout << "Enter the size of the array required: ";
    cin >> r;

    int arr[r];
    for (int i = 0; i < r; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Entered array: ";
    display(arr, r);
    bubble_sort(arr, r);

    cout << endl << "Sorted array: ";
    display(arr, r);

    return 0;
}
