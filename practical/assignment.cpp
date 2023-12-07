// Sum of Two Numbers

// #include <iostream>

// int main() {
//     int num1, num2;

//     std::cout << "Enter the first number: ";
//     std::cin >> num1;

//     std::cout << "Enter the second number: ";
//     std::cin >> num2;

//     int sum = num1 + num2;

//     std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

//     return 0;
// }


// Swap Two Numbers

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Input the first number: ";
    std::cin >> num1;

    std::cout << "Input the second number: ";
    std::cin >> num2;

    std::cout << "Before swapping: " << std::endl;
    std::cout << "First number: " << num1 << std::endl;
    std::cout << "Second number: " << num2 << std::endl;

    // Swapping logic
    int temp = num1;
    num1 = num2;
    num2 = temp;

    std::cout << "After swapping: " << std::endl;
    std::cout << "First number: " << num1 << std::endl;
    std::cout << "Second number: " << num2 << std::endl;

    return 0;
}

// Calculate the Volume of a Sphere

#include <iostream>
#include <cmath>

const double PI = 3.14159265359;

double calculateSphereVolume(double radius) {
    return (4.0 / 3.0) * PI * std::pow(radius, 3);
}

int main() {
    double radius;

    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    if (radius < 0) {
        std::cout << "Radius cannot be negative." << std::endl;
        return 1;
    }

    double volume = calculateSphereVolume(radius);

    std::cout << "Volume of the sphere with radius " << radius << " is: " << volume << std::endl;

    return 0;
}


//  Sum of All Even Numbers Less Than 100

#include <iostream>

int main() {
    int sum = 0;

    for (int i = 2; i < 100; i += 2) {
        sum += i;
    }

    std::cout << "Sum of all even numbers less than 100 is: " << sum << std::endl;

    return 0;
}

// Product of All Odd Numbers Between 1 and 20

#include <iostream>

int main() {
    int product = 1;

    for (int i = 1; i <= 20; i += 2) {
        product *= i;
    }

    std::cout << "Product of all odd numbers between 1 and 20 is: " << product << std::endl;

    return 0;
}

//  Product of Prime Numbers Between 1 and 100

#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long product = 1;

    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i)) {
            product *= i;
        }
    }

    std::cout << "Product of prime numbers between 1 and 100 is: " << product << std::endl;

    return 0;
}


//  Integer Pairs Satisfying the Hypotenuse Rule

#include <iostream>
#include <cmath>

void findHypotenusePairs() {
    int count = 0;

    for (int a = 2; a < 100; ++a) {
        for (int b = a; b < 100; ++b) {
            int c_square = a * a + b * b;
            int c = static_cast<int>(std::sqrt(c_square));
            
            if (c * c == c_square) {
                std::cout << "(" << a << ", " << b << ", " << c << ")" << std::endl;
                count++;
            }
        }
    }

    std::cout << "Number of pairs found: " << count << std::endl;
}

int main() {
    findHypotenusePairs();

    return 0;
}


//  Area and Perimeter of a Rectangle
#include <iostream>

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
double calculateRectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

int main() {
    double length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    if (length <= 0 || width <= 0) {
        std::cout << "Invalid input. Length and width must be positive." << std::endl;
        return 1;
    }

    double area = calculateRectangleArea(length, width);
    double perimeter = calculateRectanglePerimeter(length, width);

    std::cout << "Area of the rectangle is: " << area << std::endl;
    std::cout << "Perimeter of the rectangle is: " << perimeter << std::endl;

    return 0;
}


// Celsius to Fahrenheit Conversion

#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double celsius;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    double fahrenheit = celsiusToFahrenheit(celsius);

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}

// Quotient and Remainder of Two Numbers

#include <iostream>

void computeQuotientAndRemainder(int dividend, int divisor, int &quotient, int &remainder) {
    quotient = dividend / divisor;
    remainder = dividend % divisor;
}

int main() {
    int dividend, divisor, quotient, remainder;

    std::cout << "Enter the dividend: ";
    std::cin >> dividend;

    std::cout << "Enter the divisor: ";
    std::cin >> divisor;

    if (divisor == 0) {
        std::cout << "Division by zero is not allowed." << std::endl;
        return 1;
    }

    computeQuotientAndRemainder(dividend, divisor, quotient, remainder);

    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;
}

// Check Whether a Number is Positive, Negative, or Zero

#include <iostream>

void checkNumber(int number) {
    if (number > 0) {
        std::cout << "Positive number." << std::endl;
    } else if (number < 0) {
        std::cout << "Negative number." << std::endl;
    } else {
        std::cout << "Zero." << std::endl;
    }
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    checkNumber(number);

    return 0;
}


//  Display Current Date and Time

#include <iostream>
#include <ctime>

void displayCurrentDateTime() {
    time_t now = time(0);
    tm *localTime = localtime(&now);

    std::cout << "Current Date and Time: ";
    std::cout << (localTime->tm_year + 1900) << "-"
              << (localTime->tm_mon + 1) << "-"
              << localTime->tm_mday << " "
              << localTime->tm_hour << ":"
              << localTime->tm_min << ":"
              << localTime->tm_sec << std::endl;
}

int main() {
    displayCurrentDateTime();

    return 0;
}

// Reverse First and Last Name


#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName;

    std::cout << "Input First Name: ";
    std::cin >> firstName;

    std::cout << "Input Last Name: ";
    std::cin >> lastName;

    std::cout << "Name in reverse is: " << lastName << " " << firstName << std::endl;

    return 0;
}

// Compute Area and Circumference of a Circle

#include <iostream>
#include <cmath>

const double PI = 3.14159265359;

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate the circumference of a circle
double calculateCircleCircumference(double radius) {
    return 2 * PI * radius;
}

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    if (radius <= 0) {
        std::cout << "Invalid input. Radius must be positive." << std::endl;
        return 1;
    }

    double area = calculateCircleArea(radius);
    double circumference = calculateCircleCircumference(radius);

    std::cout << "Area of the circle is: " << area << std::endl;
    std::cout << "Circumference of the circle is: " << circumference << std::endl;

    return 0;
}


// Compute the Volume of a Cube

#include <iostream>

double calculateCubeVolume(double side) {
    return side * side * side;
}

int main() {
    double side;

    std::cout << "Enter the side length of the cube: ";
    std::cin >> side;

    if (side <= 0) {
        std::cout << "Invalid input. Side length must be positive." << std::endl;
        return 1;
    }

    double volume = calculateCubeVolume(side);

    std::cout << "Volume of the cube is: " << volume << std::endl;

    return 0;
}

// Sort Three Integers in Ascending Order

#include <iostream>

void sortIntegers(int &a, int &b, int &c) {
    if (a > b) {
        std::swap(a, b);
    }
    if (a > c) {
        std::swap(a, c);
    }
    if (b > c) {
        std::swap(b, c);
    }
}

int main() {
    int num1, num2, num3;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    std::cout << "Enter the third integer: ";
    std::cin >> num3;

    sortIntegers(num1, num2, num3);

    std::cout << "Integers in ascending order: " << num1 << " " << num2 << " " << num3 << std::endl;

    return 0;
}

// Check if a String is a Palindrome


#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string &str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::cin >> input;

    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}

//  Calculate Age in Years

#include <iostream>

int main() {
    long long seconds;

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;

    if (seconds < 0) {
        std::cout << "Invalid input. Seconds cannot be negative." << std::endl;
        return 1;
    }

    long long secondsPerYear = 60LL * 60LL * 24LL * 365LL; // Seconds in a year
    long long years = seconds / secondsPerYear;

    std::cout << "John is approximately " << years << " years old." << std::endl;

    return 0;
}


// Count Spaces in a String

#include <iostream>
#include <string>

int countSpaces(const std::string &str) {
    int count = 0;
    for (char c : str) {
        if (c == ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::cin.ignore(); // Ignore any previous newline character
    std::getline(std::cin, input);

    int spaceCount = countSpaces(input);

    std::cout << "Number of spaces in the string: " << spaceCount << std::endl;

    return 0;
}

// Check if a Character is a Digit or Letter

#include <iostream>

bool isDigitOrLetter(char c) {
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main() {
    char character;

    std::cout << "Enter a character: ";
    std::cin >> character;

    if (isDigitOrLetter(character)) {
        std::cout << "The character is a digit or a letter." << std::endl;
    } else {
        std::cout << "The character is not a digit or a letter." << std::endl;
    }

    return 0;
}

// Word Count

#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;

    std::cout << "Enter a sentence: ";
    std::cin.ignore(); // Ignore any previous newline character
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int charCount = 0;
    int wordCount = 0;

    while (iss >> input) {
        charCount += input.size();
        wordCount++;
    }

    std::cout << "Number of characters (without spaces): " << charCount << std::endl;
    std::cout << "Number of characters (with spaces): " << charCount + wordCount - 1 << std::endl;
    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}


//  Reverse a String

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::cin >> input;

    std::string reversed = input;
    std::reverse(reversed.begin(), reversed.end());

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}


//  Calculate the Volume of a Cube

#include <iostream>

double calculateCubeVolume(double side) {
    return side * side * side;
}

int main() {
    double side;

    std::cout << "Enter the side length of the cube: ";
    std::cin >> side;

    if (side <= 0) {
        std::cout << "Invalid input. Side length must be positive." << std::endl;
        return 1;
    }

    double volume = calculateCubeVolume(side);

    std::cout << "Volume of the cube is: " << volume << std::endl;

    return 0;
}


// Read Three Integers and Print in Ascending Order

#include <iostream>

void sortIntegers(int &a, int &b, int &c) {
    if (a > b) {
        std::swap(a, b);
    }
    if (a > c) {
        std::swap(a, c);
    }
    if (b > c) {
        std::swap(b, c);
    }
}

int main() {
    int num1, num2, num3;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    std::cout << "Enter the third integer: ";
    std::cin >> num3;

    sortIntegers(num1, num2, num3);

    std::cout << "Integers in ascending order: " << num1 << " " << num2 << " " << num3 << std::endl;

    return 0;
}


// Check if a String is a Palindrome

#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string &str) {
    std::string cleanStr = str;
    cleanStr.erase(std::remove_if(cleanStr.begin(), cleanStr.end(), ::isspace), cleanStr.end()); // Remove spaces
    std::transform(cleanStr.begin(), cleanStr.end(), cleanStr.begin(), ::tolower); // Convert to lowercase
    std::string reversed = cleanStr;
    std::reverse(reversed.begin(), reversed.end());
    return cleanStr == reversed;
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::cin.ignore(); // Ignore any previous newline character
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}

// Calculate Age in Years

#include <iostream>

int main() {
    long long seconds;

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;

    if (seconds < 0) {
        std::cout << "Invalid input. Seconds cannot be negative." << std::endl;
        return 1;
    }

    long long secondsPerYear = 60LL * 60LL * 24LL * 365LL; // Seconds in a year
    long long years = seconds / secondsPerYear;

    std::cout << "John is approximately " << years << " years old." << std::endl;

    return 0;
}


// Count Spaces in a Given String

#include <iostream>
#include <string>

int countSpaces(const std::string &str) {
    int count = 0;
    for (char c : str) {
        if (c == ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::cin.ignore(); // Ignore any previous newline character
    std::getline(std::cin, input);

    int spaceCount = countSpaces(input);

    std::cout << "Number of spaces in the string: " << spaceCount << std::endl;

    return 0;
}


//  Reverse a Given String

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::cin.ignore(); // Ignore any previous newline character
    std::getline(std::cin, input);

    std::string reversed = input;
    std::reverse(reversed.begin(), reversed.end());

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}
