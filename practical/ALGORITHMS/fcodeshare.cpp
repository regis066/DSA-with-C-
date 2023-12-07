// #include<iostream>
// #include<stdio.h>
// int fun6 (int n) {
// int i = 1, m = 0; 
// while (i < n) {
// m += 1;
// i = i* 2;
//    }
// return m;
// }
// int main(){
// // Testing Code
// printf("N = 100, Number of instructions 0(log(n)) :: %d \n", fun6 (1000));
// return 0;
// }

    #include <iostream>
	using namespace std;
	 int sumArray(int a[]) {
	    int size = sizeof(a)/sizeof(a[0]);
	    int sum = 0;
	    for (int iterator = 0; iterator < size; iterator++)            
              {
	        sum += a[iterator];
	        }
	    return sum;
	}
	int main() {
	    int arr[5]={10,20,30,40,50};
	    cout << "The sum is "<<sumArray(arr)<<endl;
	    return 0;
	}
