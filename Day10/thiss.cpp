#include <iostream>
using namespace std;

class calc {
private:
    int b;

public:
    void setData(int a) {
        b = a;
    }

    calc &add(int a) {
        b=a+b; 
        return *this;
    }

    void showData() {
        cout << b << endl;
    }
};

int main() {
    calc a;
    a.setData(10);
    a.add(5).add(10);
    a.showData();

    return 0;
}
//The *this is used in MF of class it will get the address of the class as the type 
//and uses current value to accumulate the given value