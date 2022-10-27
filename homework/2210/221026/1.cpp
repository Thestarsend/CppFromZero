//
// Created by StarsEnd.
//


#include "iostream"
#include "cmath"

using namespace std;

class DO {
private:
    int number;
public:
    DO() {
        number = 0;
        cout << "无参构造函数被调用" << endl;
    }

    DO(int number) {
        this->number = number;
        cout << "有参构造函数被调用" << endl;
    }

    DO(DO const &c) {
        this->number = c.number;
        cout << "拷贝构造函数被调用" << endl;
    }

    ~DO() {
        cout << "析构函数被调用" << endl;
    }

    void setNumber(int number) {
        this->number = number;
    }

    int getNumber() {
        return number;
    }

    bool isWNumber() {
        if (number == 8 || number == 28 || number == 496 || number == 8128 || number == 33550336) {
            return true;
        }
        return false;
    }

    bool isPNumber() {
        if (number < 2) { return false; }
        for (int i = 2; i < sqrt(number) + 1; ++i) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    bool isRNumber() {
        string s = to_string(number);
        int l = this->getLength();
        for (int i = 0; i < l / 2; ++i) {
            if (s[i] != s[l - i - 1]) {
                return false;
            }
        }
        return true;
    }

    int getLength() {
        return to_string(number).length();
    }
};

int main() {
    int cmd;
    cin >> cmd;
    switch (cmd) {
        case 1: {
            DO *do1 = new DO();
            DO *do2 = new DO(1221);
            DO *do3 = new DO(*do2);
            delete do1;
            delete do2;
            delete do3;
            break;
        }
        case 2: {
            DO *do1 = new DO();
            int input;
            cin >> input;
            do1->setNumber(input);
            cout << (do1->isWNumber() ? "Yes" : "No") << endl;
            delete do1;
            break;
        }
        case 3: {
            DO *do1 = new DO();
            int input;
            cin >> input;
            do1->setNumber(input);
            cout << (do1->isPNumber() ? "Yes" : "No") << endl;
            delete do1;
            break;
        }
        case 4: {
            DO *do1 = new DO();
            int input;
            cin >> input;
            do1->setNumber(input);
            cout << (do1->isRNumber() ? "Yes" : "No") << endl;
            delete do1;
            break;
        }
        case 5: {
            DO *do1 = new DO();
            int input;
            cin >> input;
            do1->setNumber(input);
            cout << do1->getLength() << endl;
            delete do1;
            break;
        }
    }
    return 0;
}
