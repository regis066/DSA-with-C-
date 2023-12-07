#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int length;

public:
    Rectangle();           // Default constructor
    Rectangle(int, int);   // Parameterized constructor
    int area();
    Rectangle rectc();      // Declaration of a new function

};

Rectangle::Rectangle() {
    width = 5;
    length = 10;
}

Rectangle::Rectangle(int a, int b) {
    width = a;
    length = b;
}

int Rectangle::area() {
    return width * length; // Added a semicolon
}

Rectangle Rectangle::rectc() {
    Rectangle rec(3, 7);  // Create a new Rectangle object with specific dimensions
    return rec;
}

int main() {
    Rectangle recta;
    cout << "The area from recta: " << recta.area() << endl;
    Rectangle r = recta.rectc();
    cout << "The area from rectc: " << r.area() << endl; // Corrected 'cot' to 'cout'
    return 0;
}
