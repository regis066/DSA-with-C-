// #include <iostream>

// using namespace std;

// int main() {
//   int arr[] = {10, 20, 30, 40, 50};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   int element = 15;

//   // Get the index of the element to be deleted.
//   int index;
//   cout << "Enter the index of the element to be deleted: ";
//   cin >> index;

//   // Check if the index is valid.
//   if (index < 0 || index >= size) {
//     cout << "Invalid index." << endl;
//     return 0;
//   }

//   // Delete the element at the specified index.
//   for (int i = index; i < size - 1; i++) {
//     arr[i] = arr[i + 1];
//   }

//   // Reduce the size of the array.
//   size--;

//   // Print the new array.
//   for (int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }

//   cout << endl;

//   return 0;
// }

// MULTIDIMENSIONAL ARRAY
#include <iostream>
using namespace std;

int main() {
    int arr[2][7] = {
        {1, 2, 3, 13, 17, 34, 16},
        {54, 23, 11, 45, 31, 65, 26}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 7; j++) {
            cout << arr[i][j] << endl;
        }
    }

    return 0;
}