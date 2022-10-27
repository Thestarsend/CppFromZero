#include <iostream>
#include <vector>

using namespace std;

class Mark {
private:
    string mark;
public:
    Mark(string input) {
        mark = input;
    }
    string getMark(){
        return mark;
    }
    int getIntMark(){
        if (mark == "优"){return 100;}
        if (mark == "良"){return 80;}
        if (mark == "中"){return 60;}
        if (mark == "及格"){return 40;}
        if (mark == "不及格"){return 20;}
        return stoi(mark);
    }
};

int main() {
    int i = 100;
    string s = "中";
    Mark *mark1 = new Mark(s);
    Mark *mark2 = new Mark(to_string(i));
    Mark *mark3 = new Mark(to_string(99));
    Mark *mark4 = new Mark(to_string(50));
    Mark *mark5 = new Mark(to_string(55));

    cout<<mark1->getIntMark();
    return 0;
}
