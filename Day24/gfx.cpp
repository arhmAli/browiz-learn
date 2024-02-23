#include <iostream>
#include <conio.h>
using namespace std;

class Obj {
private:
    int data;

public:
    Obj(int x) : data(x) {}

    void showData() {
        cout << data << endl;
    }

    void incCount() {
        system("cls");
        data++;
        showData();
    }

    void decCount() {
        system("cls");
        data--;
        showData(); 
    }
};

int main() {
    Obj count(10);
    count.showData();
    cout << "Increase or Decrease counter using W or S. If you wish to quit, press Q at anytime." << endl;
    while (true) {
        char s = _getch();
        if (s == 'W' || s == 'w') {
            count.incCount();
        } else if (s == 'S' || s == 's') {
            count.decCount();
        } else if (s == 'Q' || s == 'q') {
            break;
        }
    }
    return 0;
}
