#include <iostream>
#include <stack>
using namespace std;
//function to return a stack in main
stack <int> gen(){
    stack <int> temp;
    for (int i=0;i<10;i++){
        temp.push(i);
    }
    return temp;
}
int main(){
    stack <int> stackGenerator=gen();
    while(!stackGenerator.empty()){
        cout<<stackGenerator.top();
        stackGenerator.pop();
    }
    return 0;
}