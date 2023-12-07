// #include <stdio.h>
// int main(){
//     printf("Hello World!");

//     return 0;
// }

// ::scope resolution operator
// << (Insertion Operator):
// >> (Extraction Operator):

// #include <iostream>
// using namespace std;
// string fname = "MUHIRE";
// namespace groupd{
//     string fname = "Mahoro";
// }
// int main(){

//     string fname;
//     string lname;
//     cout<<"Enter your name:\n";
//     // cin>>fname;
//     getline(cin,fname); //you can use getline to print the whole line
//     cout<<"Hello "<<::fname<<endl;
//     cout<<"Hello "<<fname<<endl;
//     cout<<"Hello "<<groupd::fname<<endl;

//     return 0;
// }

// Q1

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
    
//     string firstName, lastName;
//     int age;

   
//     cout << "Enter your first name: ";
//     cin >> firstName;

   
//     cout << "Enter your last name: ";
//     cin >> lastName;

    
//     cout << "Enter your age: ";
//     cin >> age;

  
//     cout << "Name: " << firstName << " " << lastName << ", Age: " << age << endl;

//     return 0;
// }

// Q2
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     string fullname;
//     double initial_amount;
//     int rate;
//     int time;

//     cout << "Enter your full name: ";
//     getline(cin, fullname);

//     cout << "Enter your initial amount/capital: ";
//     cin >> initial_amount;
//     cout << "Enter your interest per year: ";
//     cin >> rate;
//     cout << "Enter the period of time: ";
//     cin >> time;

//     // Convert rate to a floating-point number (e.g., float or double)
//     double interest = initial_amount * time * (rate / 100.0);

//     cout << "The total interest of " << fullname << " is " << interest << " RFW";

//     return 0;
// }



// #include<iostream>
// using namespace std;
// // template<class GroupD>
// // template<typename T , typename GroupD>
// GroupD addition(T num1, GroupD num2){
//     return num1 + num2;
// }

// int addition(int num1, int num2){
//     return num1+num2;
// }
// double addition(double num1, double num2){
//     return num1+num2;
// }

// int main(){
    // int num= 95;
    // cout<<"Decimal base "<<dec<<num<<endl;
    // cout<<"Octal base "<<oct<<num<<endl;


    // int num1, num2;
    // cout<<"Enter the 2 numbers"<<endl;
    // cin>>num1>>num2;
    // int sum = addition(num1,num2);

    // cout<<"The sum of num1 and num2 is "<< sum <<endl;

//     double num3;
//     int num4;
//      cout<<"Enter the numbers"<<endl;
//     cin>>num3>>num4;

//     cout<<"The sum of num3 and num4 is "<< addition(num3,num4)<<endl;


//     return 0;
//


// #include <iostream>
// using namespace std;

// // Function to calculate factorial using recursion
// int factorial(int n) {
//     if (n <= 1) {
//         return 1; // Base case: factorial of 0 and 1 is 1
//     } else {
//         return n * factorial(n - 1); // Recursive case
//     }
// }

// int main() {
//     int num;

//     cout << "Enter a positive integer: ";
//     cin >> num;

//     if (num < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     } else {
//         int result = factorial(num);
//         cout << "Factorial of " << num << " is " << result << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: Fibonacci of 0 and 1 is the number itself
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

int main() {
    int num;

    cout << "Enter the value of n to find the nth Fibonacci number: ";
    cin >> num;

    if (num < 0) {
        cout << "Fibonacci sequence is not defined for negative numbers." << endl;
    } else {
        int result = fibonacci(num);
        cout << "The " << num << "th Fibonacci number is " << result << endl;
    }

    return 0;
}

//011235813