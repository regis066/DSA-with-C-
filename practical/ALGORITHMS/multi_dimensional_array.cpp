#include<iostream>
using namespace std;
int main(){
    int rows = 3;
    int cols = 3;

int arr[3][3] = {};

for (int i = 0; i< rows; i++){
    for (int j = 0; j< cols; j++){
        cout<<arr[i][j];
    }
}
    return 0;
}