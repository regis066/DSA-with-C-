// Create  a program  with a namespace userDefined with a  variable insideNamespace of type integer and give it initial value.
// Create a function cout inside the namespace which return integer as the value of insideNamespace.
// Create a global variable myGlobal of type integer and give it initial value
// Create a global function cout and return the square of myGlobal
// Create the main function with integer local variable cout with initial value.
// Display all  variables defined above and display the output of cout() function in userDefined namespace and cout()  global function using the following description: 
//  <<"The local variable cout in main is"<<
//  <<"The variable in userDefined namespace is"<<
// <<"The output of cout() in userDefined is"<<
// <<"The value of myGlobal  is"<<
// <<" The output of global cout() is"<<



// #include <iostream>

// namespace userDefined {
//     int insideNamespace = 42;

//     int cout() {
//         return insideNamespace;
//     }
// }

// int myGlobal = 5;

// int cout() {
//     return myGlobal * myGlobal;
// }

// int main() {
//     int localVariableCout = 10;

//     std::cout << "The local variable cout in main is: " << localVariableCout << std::endl;
//     std::cout << "The variable in userDefined namespace is: " << userDefined::insideNamespace << std::endl;
//     std::cout << "The output of cout() in userDefined is: " << userDefined::cout() << std::endl;
//     std::cout << "The value of myGlobal is: " << myGlobal << std::endl;
//     std::cout << "The output of global cout() is: " << ::cout() << std::endl;

//     return 0;
// }



// Build a  c++ program that compute the circumference and  area of the circle 
// Declare a double  constant which contains PI=3.14159265
// Request the user to enter the radius of a circle and compute  the area and circumference of the circle.


// #include <iostream>
// #include <cmath>

// int main() {
//     const double PI = 3.14159265;

//     double radius;
//     std::cout << "Enter the radius of the circle: ";
//     std::cin >> radius;

//     if (radius < 0) {
//         std::cout << "Radius cannot be negative." << std::endl;
//         return 1;
//     }

//     double circumference = 2 * PI * radius;
//     double area = PI * std::pow(radius, 2);

//     std::cout << "Circumference of the circle is: " << circumference << std::endl;
//     std::cout << "Area of the circle is: " << area << std::endl;

//     return 0;
// }



