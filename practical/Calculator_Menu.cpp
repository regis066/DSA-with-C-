#include <iostream>
using namespace std;
namespace calculator {

    int add(int num1, int num2){
        return num1 + num2;
    }
    int subtract(int num1, int num2){
        return num1 - num2;
    }
    int multiply(int num1, int num2){
        return num1 * num2;
    }
    int divide(int num1, int num2){
        return num1 / num2;
    }
    int modulus(int num1, int num2){
        return num1 % num2;
    }

}


int main() {
    char choice;
    int num1,num2;
    do {
        int operation;

        cout<<"MENU"<<endl;
        cout<<"1. Add"<<endl;
        cout<<"2. Subtract"<<endl;
        cout<<"3. Multiply"<<endl;
        cout<<"4. Divide"<<endl;
        cout<<"5. Modulus"<<endl;
        cin>>operation;

        cout<<"Enter the 2 integer numbers:\n";
        cin>>num1>>num2;

         int result = 0;
        switch (operation) {
            case 1:
                result = calculator::add(num1, num2);
                break;
            case 2:
                result = calculator::subtract(num1, num2);
                break;
            case 3:
                result = calculator::multiply(num1, num2);
                break;
            case 4:
                result = calculator::divide(num1, num2);
                break;
            case 5:
                result = calculator::modulus(num1, num2);
                break;
            default:
                std::cout << "Invalid choice." << std::endl;
                break;
        }

        cout<<"The result is: " << result <<endl;

        cout << "Continue? (y/n): ";
        cin >> choice;

    } while (
        choice == 'y' || choice == 'Y'
    );
}