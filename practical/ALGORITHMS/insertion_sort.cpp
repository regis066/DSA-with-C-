#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    // Start from the second element (index 1)
    for (int i = 1; i < size; i++) {
        int key = arr[i]; // Store the current element as the key
        int j = i - 1;    // Initialize j to the index of the element to the left of the key

        // Compare key with the elements to its left
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift the greater elements to the right
            j = j - 1;
        }

        // Insert key into its correct position
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 2, 4, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the insertionSort function
    insertionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



