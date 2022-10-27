//
// Created by StarsEnd.
//


#include <utility>

#include "iostream"
#include "cmath"

using namespace std;

class Student {
private:
    long id;
    string name;
    int mathMark{};
    int phyMark{};
    int englishMark{};
public:
    Student(long id, string name) {
        this->id = id;
        this->name = std::move(name);
    }

    ~Student() = default;

    void printMarks() {
        cout<<"name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout << "math scores: " << mathMark << endl;
        cout << "physics scores: " << phyMark << endl;
        cout << "english scores: " << englishMark<<endl;
        cout << "overall scores: " << this->getSum();
    }

    Student *setMath(int math) {
        mathMark = math;
        return this;
    }

    Student *setPhy(int phy) {
        phyMark = phy;
        return this;
    }

    Student *setEnglish(int english) {
        englishMark = english;
        return this;
    }

    long getID() const {
        return id;
    }

    int getSum() const {
        return (mathMark + phyMark + englishMark);
    }
};

int main() {
    long id;
    string name;
    int math, phy, english;
    Student *student[5];
    //input
    for (int i = 0; i < 5; ++i) {
        cin >> id >> name >> math >> phy >> english;
        student[i] = new Student(id, name);
        student[i]
                ->setMath(math)
                ->setPhy(phy)
                ->setEnglish(english);
    }
    //
    long input;
    cin >> input;
    //sum max
    int max = student[0]->getSum();
    for (int i = 1; i < 5; ++i) {
        if (student[i]->getSum() > max) {
            max = student[i]->getSum();
        }
    }
    cout << "max scores: " << max << endl;
    //search by id
    for (int i = 0; i < 5; ++i) {
        if (student[i]->getID() == input) {
            student[i]->printMarks();
            break;
        }
    }
    return 0;
}
