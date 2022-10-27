//
// Created by StarsEnd.
//


#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

class ComplexNumber {
private:
    double real = 0;
    double i = 0;

    void printI(bool hasReal) {
        cout << fixed << setprecision(1) << "";
        if (i > 0) {
            if (i == 1) {
                cout << (hasReal ? "+i" : "i");
            } else {
                cout << (hasReal ? "+" : "") << i << "i";
            }
        } else {
            if (i == -1) {
                cout << "-i";
            } else {
                cout << "-" << abs(i) << "i";
            }
        }
    }

public:
    ComplexNumber(double real) {
        this->real = real;
    }

    ComplexNumber(double real, double i) {
        this->real = real;
        this->i = i;
    }

    ComplexNumber add(ComplexNumber addNumber) {
        real += addNumber.real;
        i += addNumber.i;
        return *this;
    }

    void show() {
        cout << fixed << setprecision(1);
        if (real != 0 and i != 0) {
            cout << real;
            printI(true);
        } else {
            if (real == 0 and i == 0) {
                cout << "0.0";
            } else {
                if (real == 0) {
                    printI(false);
                }
                if (i == 0) {
                    cout << real;
                }
            }
        }

    }
};

int main() {
    double i1, i2;
    cin >> i1 >> i2;
    ComplexNumber complexNumber1 = *new ComplexNumber(i1, i2);
    cin >> i1 >> i2;
    ComplexNumber complexNumber2 = *new ComplexNumber(i1, i2);
    complexNumber1.add(complexNumber2);
    complexNumber1.show();
    return 0;
}
