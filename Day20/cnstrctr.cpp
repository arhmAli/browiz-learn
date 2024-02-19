#include <iostream>
#include <conio.h>
using namespace std;

class Obj {
private:
    int data;

public:
    Obj() : data(10) {}

    void showData() {
        cout << data << endl;
    }

    void incCount() {
        data++;
        showData(); 
    }

    void decCount() {
        data--;
        showData(); 
    }
};

int main() {
    Obj count;
    count.showData();
    cout << "Increase or Decrease counter using W or S If you wish to quit press Q at anytime" << endl;
    while (true) {
        char s = _getch();
        if (s == 'W' || 'w') {
            count.incCount();
            system("cls");
        } else if (s == 'S'|| 's') {
            count.decCount();
        } else{
            break;
        }
    }
    return 0;
}
