#include<iostream>
using namespace std;

void display(int x[], int length) {
    cout << "{";
    for (int i = 0; i < length - 1; i++) {
        cout << x[i] << ", ";
    }
    cout << x[length - 1] << "}";
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
    cout << "Enter the number of elements required: ";
    cin >> r;

    int arr[r];
    for (int i = 0; i < r; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Entered array: ";
    display(arr, r);

    selection_sort(arr, r);
    cout << endl << "Sorted array: ";
    display(arr, r);

    return 0;
}
