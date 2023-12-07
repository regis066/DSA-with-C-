#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 6, 1, 9, 10, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        cout << "Pass " << (i + 1) << ": ";
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // Print the array after each pass
        for (int j = 0; j < size; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    cout << "Sorted array: ";
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}



// OPTIMIZATION OF BUBBLE SORT ALGORITHM 


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Initialize a flag to check if any swaps are made
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Set the flag to true as a swap is made
                swapped = true;
            }
        }

        // If no swaps were made, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {8, 6, 1, 9, 10, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the optimized bubbleSort function
    bubbleSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
