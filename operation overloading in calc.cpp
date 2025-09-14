#include <iostream>
using namespace std;

class Calculator {
    int value;
public:
    Calculator(int v = 0) {
        value = v;
    }

    Calculator operator+(Calculator &other) {
        Calculator result;
        result.value = value + other.value;
        return result;
    }

    Calculator operator-(Calculator &other) {
        Calculator result;
        result.value = value - other.value;
        return result;
    }

    Calculator operator*(Calculator &other) {
        Calculator result;
        result.value = value * other.value;
        return result;
    }

    Calculator operator/(Calculator &other) {
        Calculator result;
        result.value = value / other.value;
        return result;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Calculator num1(134), num2(22);

    Calculator sum = num1 + num2;
    Calculator diff = num1 - num2;
    Calculator prod = num1 * num2;
    Calculator quotient = num1 / num2;

    cout << "Addition: ";
    sum.display();
    cout << "Subtraction: ";
    diff.display();
    cout << "Multiplication: ";
    prod.display();
    cout << "Division: ";
    quotient.display();

    return 0;
}

/*
Output:
Addition: 156
Subtraction: 112
Multiplication: 2948
Division: 6
  */
