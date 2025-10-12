#include <bits/stdc++.h>
using namespace std;

class Complex {
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    void showNum() {
        cout << real << "+" << img << "i" << endl;
    }

    // Operator overloading returning new object
    Complex operator + (const Complex &c2) {
        return Complex(real + c2.real, img + c2.img);
    }

    Complex operator - (const Complex &c2) {
        return Complex(real - c2.real, img - c2.img);
    }
};

int main() {
    Complex c1(3, 2);
    Complex c2(2, 1);

    Complex c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.showNum();

    Complex c4 = c1 - c2;
    cout << "c1 - c2 = ";
    c4.showNum();

    return 0;
}
