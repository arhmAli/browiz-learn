#include <iostream>
using namespace std;

int callByVal(int val){
    val+=1;
    return val;
}
int callByAddress(int *val){
    *val+=2;
    return *val;
}
void callByRef(int &val){
    val+=5;
}
int main(){
    int a=6;
   callByVal(a);
    callByAddress(&a);
    cout<<a<<endl;
    cout<<"From address"<<a<<endl;
    callByRef(a);
    cout<<a;
    return 0;
}

// so basically call by value doesnt change the value directly meaning if i mutate the value
// then passing it by value doesnt change it rather i have to point it using pointer 
// or using reference using referencing references to the memory adress while pointer points to the address
// of the variable at hand
//  changes made to the parameter inside the function are local to that function and do not affect the original variable outside the function. The modifications are confined to the local scope of the function.
// In a call by value scenario (for immutable types like numbers and strings),
// a copy of the original value is passed to the function, and any modifications 
// made inside the function do not propagate back to the original variable.