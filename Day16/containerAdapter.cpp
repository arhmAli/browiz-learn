//Container Adapters
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <list>

using namespace std;
// int main(){
//     priority_queue<int>custom;
//     custom.push(5);
//     custom.push(1);
//     custom.push(10);
//     priority_queue <int> temp=custom;
//     while(!temp.empty()){
//         cout<<temp.top()<<endl;
//         temp.pop();
//     }
//     return 0;
// }
template<typename T>void pushElements(T& stackRef);
template<typename T>void popElements(T& stackRef);

template<typename T>void pushElements(T& stackRef){
    for (int i{0};i<10;i++){
        stackRef.push(i);
        cout<<stackRef.top()<<endl;
    }
}

template<typename T>void popElements(T& stackRef){
    while(!stackRef.empty()){
        cout<<stackRef.top()<<endl;
        stackRef.pop();
    }
}

int main(){
    stack<int>intDequeStack;
    stack<int,vector<int>>intVectorStack;
    stack<int,list<int>>intListStack;
    cout<<"Pushing onto DequeStack"<<endl;
    pushElements(intDequeStack);
    cout<<"Pushing onto VectorStack"<<endl;
    pushElements(intVectorStack);
    cout<<"Pushing onto ListStack"<<endl;
    pushElements(intListStack);
    cout<<endl<<endl;
    cout<<"Pop onto DequeStack"<<endl;
    popElements(intDequeStack);
    cout<<"Pop onto VectorStack"<<endl;
    popElements(intVectorStack);
    cout<<"Pop onto ListStack"<<endl;
    popElements(intListStack);
    cout<<endl<<endl;
    return 0;
}

//Giveaway is that i used the same function to manipulate int,vector and list data type if i wanted to do that
//i would have to create different functions but now i can make one function to do everything
//Also that i can make a stack of different data types.
