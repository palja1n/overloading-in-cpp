#include <iostream>
using namespace std;

class Shapes {
public:
    double circumference(double side, int) {
        double Circ_S = 4 * side;
        return Circ_S;
    }

    double circumference(double radius) {
        double Circ_C = 2 * 3.14 * radius;
        return Circ_C;
    }

    double circumference(double length, double breadth) {
        double Circ_R = 2 * (length + breadth);
        return Circ_R;
    }

    double circumference(double side1, double side2, double side3) {
        double Circ_T = side1 + side2 + side3;
        return Circ_T;
    }
};

int main() {
    Shapes a, b, c, d;

    cout << "Circumference of Square: " << a.circumference(3.4, 0) << endl;
    cout << "Circumference of Circle: " << b.circumference(2.5) << endl;
    cout << "Perimeter of Rectangle: " << c.circumference(1.3, 2.5) << endl;
    cout << "Perimeter of Triangle: " << d.circumference(3.0, 4.0, 5.0) << endl;

    return 0;
}

/*
Output:
Circumference of Square: 13.6
Circumference of Circle: 15.7
Perimeter of Rectangle: 7.6
Perimeter of Triangle: 12
*/
