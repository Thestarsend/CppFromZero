//
// Created by StarsEnd.
//


#include "iostream"
#include "cmath"

using namespace std;

class Clock {
private:
    int hour, minute, second;
public:
    Clock() {
        hour = 0;
        minute = 0;
        second = 0;
    }

    void setTime(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    int getSeconds() {
        return hour * 3600 + minute * 60 + second;
    }

    int interval(Clock *clock) {
        return abs(this->getSeconds() - clock->getSeconds());
    }

    void showTime() {
        cout << (hour > 9 ? to_string(hour) : "0" + to_string(hour)) << ":"
             << (minute > 9 ? to_string(minute) : "0" + to_string(minute)) << ":"
             << (second > 9 ? to_string(second) : "0" + to_string(second)) << endl;
    }
};

int main() {
    int h, m, s;
    Clock *clock1 = new Clock();
    Clock *clock2 = new Clock();
    cin >> h >> m >> s;
    clock1->setTime(h, m, s);
    cin >> h >> m >> s;
    clock2->setTime(h, m, s);
    clock1->showTime();
    cout << clock1->interval(clock2);
    return 0;
}
