#include <iostream>

using namespace std;

// Function to partition the array and return the index of the pivot
int Partition(int arr[], int start, int end) {
    int pivot = arr[end]; // Choose the last element as the pivot
    int i = start - 1;    // Initialize the index of the smaller element

    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[end]); // Swap the pivot to its correct position
    return i + 1;              // Return the index of the pivot
}

// Function to perform Quicksort
void Quicksort(int arr[], int start, int end) {
    if (start < end) {
        int pivotIndex = Partition(arr, start, end);

        // Recursively sort the subarrays
        Quicksort(arr, start, pivotIndex - 1);
        Quicksort(arr, pivotIndex + 1, end);
    }
}

// Function to print the elements of an array
void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Example usage
    int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    PrintArray(arr, size);

    int start = 0;
    int end = size - 1;

    Quicksort(arr, start, end);

    cout << "Sorted array: ";
    PrintArray(arr, size);

    return 0;
}
