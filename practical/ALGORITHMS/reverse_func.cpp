// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int size){
//     int start = 0;
//     int end = size - 1;

//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end]; 
//         arr[end] = temp;

//         end--;
//         start++;
//     }

// }

// int main(){

//     int scores[5] = {10,20,30,40,50};
//     int size = sizeof(scores)/sizeof(scores[0]);

//     reverseArray(scores, size);

//     for(int i= 0; i < size; i++){
//         cout << scores[i] <<endl;
//     }


//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> reverseArray(const vector<int> &arr) {
//     vector<int> reversedArr(arr.rbegin(), arr.rend());
//     return reversedArr;
// }

// int main() {
//     vector<int> scores = {10, 20, 30, 40, 50};

//     vector<int> reversedScores = reverseArray(scores);

//     cout << "Reversed Array:" << endl;
//     for (int i = 0; i < reversedScores.size(); i++) {
//         cout << reversedScores[i] << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int* reverseArray(const int arr[], int size) {
    int* reversedArr = new int[size]; // Create a new array to store the reversed elements
    int start = 0;
    int end = size - 1;

    while (start < end) {
        reversedArr[start] = arr[end];
        reversedArr[end] = arr[start];

        end--;
        start++;
    }

    // If the array size is odd, the middle element remains the same
    if (start == end) {
        reversedArr[start] = arr[start];
    }

    return reversedArr;
}

int main() {
    int scores[5] = {10, 20, 30, 40, 50};
    int size = sizeof(scores) / sizeof(scores[0]);

    int* reversedScores = reverseArray(scores, size);

    cout << "Reversed Array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << reversedScores[i] << endl;
    }

    // Don't forget to delete the dynamically allocated array to prevent memory leaks
    delete[] reversedScores;

    return 0;
}
