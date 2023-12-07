#include <iostream>

using namespace std;

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int size = sizeof(arr) / sizeof(arr[0]);
  int element = 15;
  int index = 2;

  // Create a new array to store the inserted element.
  int newArr[size + 1];

  // Copy the elements of the original array to the new array.
  for (int i = 0; i < index; i++) {
    newArr[i] = arr[i];
  }

  // Insert the new element at the specified index.
  newArr[index] = element;

  // Copy the remaining elements of the original array to the new array.
  for (int i = index + 1; i < size + 1; i++) {
    newArr[i] = arr[i - 1];
  }

  // Print the new array.
  for (int i = 0; i < size + 1; i++) {
    cout << newArr[i] << " ";
  }

  cout << endl;

  return 0;
}
