#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> a;
    a.push(2);
    a.push(3);
    a.push(4);
    // for (int itr=0;itr<size(a);itr++){
    //     cout<<a[itr]<<endl;
    // }
    while(!a.empty()){
        cout<<a.top()<<"is at top"<<endl;
        a.pop();
    }
return 0;
}

// but why stack? it is so dumb looking yeah right so why? well i think it can be used in several scenarios
// first the stack memory is useful if a action or a variable is stored in memory at last it should go out first when removing elements right?
// also it can be used in various algorithms like backpropagation in neural networks the last nueron to enter or to be present in the NN is solved first so 
// it works on the principle of stack. Also undo mechanism think of it like i pressed a key if i want to undo what would i do ? i would pop the top element which is
// in this scenario the last buttton pressed there would be many more apps etc

// METHODS
// stack <type> name;
// name.push(val)=> val pushed to top of the stack
// name.pop()=>removes top val
// name.top()=> accesses the top val without removing it
// name.empty()=> used to check if stack is empty returns a bool