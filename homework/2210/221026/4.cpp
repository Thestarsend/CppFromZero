//
// Created by StarsEnd.
//


#include "iostream"
#include "iomanip"

using namespace std;

class Point {
private:
    int x, y;
public:
    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }
};

class Circle {
    static int count;
private:
    Point point{};
    double radius;
public:
    Circle(Point point, double r) {
        this->point = point;
        radius = r;
        count++;
    }
    ~Circle(){
        count--;
    }

    void set(double r, int x, int y) {
        radius = r;
        point.setX(x);
        point.setY(y);
    }

    void showC() {
        cout << fixed << setprecision(2) << "";
        cout << radius << " (" << point.getX() << "," << point.getY() << ") ";
    }

    double getSquare() const {
        return 3.14 * radius * radius;
    }

    static void showCount() {
        cout << count << endl;
    }
};

int Circle::count = 0;

/**
 * 命名太丑 只改了名字
 */
int main() {
    Point p{};
    int x, y;
    double r;
    scanf("%lf%d%d", &r, &x, &y);
    Circle circle(p, r);
    {
        Point p1;
        Circle c1(p1, r);
        Circle::showCount();
    }
    circle.set(r, x, y);
    circle.showC();
    printf("%.2lf\n", circle.getSquare());
    Circle::showCount();
    return 0;
}
