#include <iostream>
#include <string>
#include <windows.h>
#include <stack>

using namespace std;
class stacker{
    private:
    stack <int> a;
    public:
    stacker &setData(int val){
        a.push(val);
        return *this;
    }
    auto showStack(){
        do{
            cout<<"VAL"<<a.top()<<endl;
            Beep(1500,1000);
            a.pop();
        }while(!a.empty());
    }
};
int main (){
    stack <stacker> a;
    stacker k;
    a.push(k.setData(10));
    a.push(k.setData(20));
    do{
            a.top().showStack();
            Beep(1500,1000);
            a.pop();
        }while(!a.empty());
    return 0;
}

//So if i want to use a method from the class i have to create an instance of that class do the
//necessary operations and then send that to stack then it will becom a stack of objects with type=>class