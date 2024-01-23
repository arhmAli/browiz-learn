#include <iostream>
#include <string>
using namespace std;

class Parent {
protected:
    int alpha;
    int bravo;

public:
    void setData(int a, int b) {
        alpha = a;
        bravo = b;
    }

    int add() {
        return alpha + bravo;
    }
};

class Child : public Parent {
public:
    int sub() {
        return alpha - bravo;
    }
};

int main() {
    Child g;
    g.setData(10, 2);
    int c = g.add();
    int d = g.sub();
    printf("%d %d", c, d);
    return 0;
}
