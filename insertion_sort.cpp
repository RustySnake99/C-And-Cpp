#include<iostream>
using namespace std;

void display(int x[], int length) {
    cout << "{";
    for (int i = 0; i < length - 1; i++) {
        cout << x[i] << ", ";
    }
    cout << x[length - 1] << "}";
}

void insertion_sort(int x[], int length) {
    for (int i = 1; i < length; i++) {
        int key = x[i];
        int j = i - 1;

        while (j >= 0 && x[j] > key) {
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = key;
    }
}

int main(int argc, char const *argv[]) {
    int r;
    cout << "Enter the number of elements required: ";
    cin >> r;

    int arr[r];
    for (int i = 0; i < r; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Entered array: ";
    display(arr, r);
    insertion_sort(arr, r);
    cout << endl << "Sorted array: ";
    display(arr, r);

    return 0;
}
