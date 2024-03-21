#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int x, int y) {
        return x + y;
    }

    int subtract(int x, int y) {
        return x - y;
    }

    int multiply(int x, int y) {
        return x * y;
    }

    float divide(int x, int y) {
        if (y != 0) {
            return static_cast<float>(x) / y;
        } else {
            cout << "Error: Division by zero\n";
            return 0;
        }
    }

    int modulus(int x, int y) {
        return x % y;
    }
};

int main() {
    Calculator calc;

    int x = 10;
    int y = 3;

    cout << "Addition: " << calc.add(x, y) << endl;
    cout << "Subtraction: " << calc.subtract(x, y) << endl;
    cout << "Multiplication: " << calc.multiply(x, y) << endl;
    cout << "Division: " << calc.divide(x, y) << endl;
    cout << "Modulus: " << calc.modulus(x, y) << endl;

    return 0;
}
