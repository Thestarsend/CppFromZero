#include <iostream>
#include <vector>

using namespace std;

class Arr {
    typedef std::vector<int> IntVector;
    typedef std::vector<IntVector> IntVector2D;
private:
    int row, col = 3;
    IntVector2D *pArray2D = new IntVector2D;

    bool is_y_Min(int in, int y) {
        for (int j = 0; j < row; ++j) {
            if ((*pArray2D)[j][y] < in) {
                return false;
            }
        }
        return true;
    }

    bool is_x_Max(int in, int x) {
        for (int j = 0; j < col; ++j) {
            if ((*pArray2D)[x][j] > in) {
                return false;
            }
        }
        return true;
    }

public:
    Arr(int row, int col) {
        this->row = row;
        this->col = col;
        pArray2D->resize(row);
        for (int i = 0; i < row; ++i) {
            (*pArray2D)[i].resize(col);
        }
    }

    void setInput() {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cin >> (*pArray2D)[i][j];
            }
        }
    }

    void print() {
        int count = 0;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (is_x_Max((*pArray2D)[i][j], i) and is_y_Min((*pArray2D)[i][j], j)) {
                    count++;
                    cout << "(" << i << "," << j << ") " << (*pArray2D)[i][j] << endl;
                }
            }
        }
        if (count == 0) cout << "No" << endl;
    }

    IntVector2D getInput() {
        return *pArray2D;
    }
};

int main() {
    int row = 3;
    int col = 3;
    cin >> row >> col;
    Arr *arr = new Arr(row, col);
    arr->setInput();
    arr->print();
    return 0;
}
