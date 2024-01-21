#include<iostream>
#include<stack>
#include<windows.h>
using namespace std;
int main(){
    stack <int> stacker;
    stacker.push(1);
    stacker.push(2);
    stacker.push(3);
    while(!stacker.empty()){
        cout<<"The value that is at top of stack"<<stacker.top()<<endl;
        Sleep(2000);
        stacker.pop();
    }
    return 0;
}