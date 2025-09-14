#include <iostream>
using namespace std;

class ComplexNumber {
    int realPart, imaginaryPart;
public:
    ComplexNumber(int r = 0, int i = 0) {
        realPart = r;
        imaginaryPart = i;
    }

    ComplexNumber operator+(ComplexNumber &other) {
        ComplexNumber result;
        result.realPart = realPart + other.realPart;
        result.imaginaryPart = imaginaryPart + other.imaginaryPart;
        return result;
    }

    void display() {
        cout << realPart << " +i" << imaginaryPart << endl;
    }
};

int main() {
    ComplexNumber num1(2, 5), num2(13, 4);
    ComplexNumber sum = num1 + num2;
    sum.display();
    return 0;
}

/*
Output:
15 +i9
  */
