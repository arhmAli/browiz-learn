#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue <double> values;
    values.push(3.2);
    values.push(10.2);
    values.push(11.0);
    cout<<"*******DISPLAYING THE QUEUE************"<<endl;
    while(!values.empty()){
        cout<<"Value upfront of the queue is:"<<endl;
        cout<<values.top()<<endl;
        values.pop(); 
    }
    return 0;
}

// doubly linked list