// #include <iostream>

// int differBetnSquareOfSumAndSumOfSquares(int n) {
//     int sumOfSquares = 0;
//     int sum = 0;

//     for (int i = 1; i <= n; i++) {
//         sumOfSquares += i * i;
//         sum += i;
//     }

//     int squareOfSum = sum * sum;

//     int difference = squareOfSum - sumOfSquares;

//     return difference;
// }

// int main() {
//     int n;

//     std::cout << "Enter the value of N: ";
//     std::cin >> n;

//     int result = differBetnSquareOfSumAndSumOfSquares(n);
//     std::cout << "The difference between the square of the sum and the sum of the squares of the first " << n << " natural numbers is: " << result << std::endl;

//     return 0;
// }



#include <iostream>
using namespace std;

int differbtnsumodd_sumeven(int n) {
     int sum_even = 0;
     int sum_odd = 0;

    for (int i = 1; i < n; i++){
        if(i % 2 == 0){
           sum_even +=i;
        }else{
            sum_odd += i;
        }
    }

    int differ = sum_odd - sum_even;

    return differ;
}

int main() {
    int n;


    cout<<"Enter your number: \n"<<endl;
    cin>>n;

    int difference = differbtnsumodd_sumeven(n);

    cout<<"The difference between odd and even numbers is:"<<difference<<endl;
    return 0;
}



