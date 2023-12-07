// DIVIDE AND CONQUER ALGORITHM


// #include <iostream>
// #include <vector>

// // Function to merge two sorted arrays into a single sorted array
// std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right) {
//     std::vector<int> result;
//     size_t i = 0; // Index for the left array
//     size_t j = 0; // Index for the right array

//     // Compare elements from both arrays and merge them in sorted order
//     while (i < left.size() && j < right.size()) {
//         if (left[i] < right[j]) {
//             result.push_back(left[i]);
//             ++i;
//         } else {
//             result.push_back(right[j]);
//             ++j;
//         }
//     }

//     // Append any remaining elements from the left and right arrays
//     while (i < left.size()) {
//         result.push_back(left[i]);
//         ++i;
//     }

//     while (j < right.size()) {
//         result.push_back(right[j]);
//         ++j;
//     }

//     return result;
// }

// // Function to perform merge sort on a given array
// std::vector<int> mergeSort(const std::vector<int>& arr) {
//     // Base case: If the array has one element or is empty, return it
//     if (arr.size() <= 1) {
//         return arr;
//     }

//     // Divide the array into two halves
//     size_t middle = arr.size() / 2;
//     std::vector<int> left(arr.begin(), arr.begin() + middle);
//     std::vector<int> right(arr.begin() + middle, arr.end());

//     // Recursively sort the left and right halves
//     left = mergeSort(left);
//     right = mergeSort(right);

//     // Merge the sorted halves
//     return merge(left, right);
// }

// int main() {
//     // Example usage
//     std::vector<int> unsortedArray = {64, 25, 12, 22, 11};

//     // Perform merge sort
//     std::vector<int> sortedArray = mergeSort(unsortedArray);

//     // Print the sorted array
//     std::cout << "Sorted array: ";
//     for (int num : sortedArray) {
//         std::cout << num << " ";
//     }

//     return 0;
// }



// #include <iostream>

// // Function to merge two sorted arrays into a single sorted array
// void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
//     int i = 0; // Index for the left array
//     int j = 0; // Index for the right array
//     int k = 0; // Index for the merged array

//     // Compare elements from both arrays and merge them in sorted order
//     while (i < leftSize && j < rightSize) {
//         if (left[i] < right[j]) {
//             arr[k] = left[i];
//             ++i;
//         } else {
//             arr[k] = right[j];
//             ++j;
//         }
//         ++k;
//     }

//     // Append any remaining elements from the left and right arrays
//     while (i < leftSize) {
//         arr[k] = left[i];
//         ++i;
//         ++k;
//     }

//     while (j < rightSize) {
//         arr[k] = right[j];
//         ++j;
//         ++k;
//     }
// }

// // Function to perform merge sort on a given array
// void mergeSort(int arr[], int size) {
//     // Base case: If the array has one element or is empty, return
//     if (size <= 1) {
//         return;
//     }

//     // Divide the array into two halves
//     int middle = size / 2;
//     int left[middle];
//     int right[size - middle];

//     // Copy elements to left and right arrays
//     for (int i = 0; i < middle; ++i) {
//         left[i] = arr[i];
//     }

//     for (int i = middle; i < size; ++i) {
//         right[i - middle] = arr[i];
//     }

//     // Recursively sort the left and right halves
//     mergeSort(left, middle);
//     mergeSort(right, size - middle);

//     // Merge the sorted halves
//     merge(arr, left, middle, right, size - middle);
// }

// int main() {
//     // Example usage
//     int unsortedArray[] = {64, 25, 12, 22, 11};
//     int size = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

//     // Perform merge sort
//     mergeSort(unsortedArray, size);

//     // Print the sorted array
//     std::cout << "Sorted array: ";
//     for (int i = 0; i < size; ++i) {
//         std::cout << unsortedArray[i] << " ";
//     }

//     return 0;
// }












// PROVIDED BY TEACHER

#include<iostream>
using namespace std;
void mergeArrays(int x[],int y[],int a[],int s,int e){
       int mid = (s+e)/2;
       int i=s;
       int j = mid+1;
       int k = s;
       while(i<=mid && j<=e){
//We need to do the  Comparison
           if(x[i] < y[j]){
            a[k] = x[i];
            i++;
            k++;
           }else{
             a[k] = y[j];
             j++;
             k++;
           }
       }
//Copy Rest of Elements
       while(i<=mid){
        a[k] = x[i];
        k++;
        i++;
       }
       while(j<=e){
        a[k] = y[j];
        k++;
        j++;
       }
}
void mergeSort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    int x[100],y[100];
    for(int i=s;i<=mid;i++){ 
        x[i] = a[i];
    }
    for(int i=mid+1;i<=e;i++){
        y[i] = a[i];
    }
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);
    mergeArrays(x,y,a,s,e);
}


int main(){
  int a[] = {7,3,10,5,6,2,-5};
  mergeSort(a,0,6);
  for(int i=0;i<7;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
