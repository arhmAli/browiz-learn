#include <iostream>
#include <vector>
using namespace std;
//table print using recursion

void table(int a,int b){
    
    if(b>10){
        return;
    }
    cout<<a*b;
    table(a,b+1);
}
int main(){
    table(2,1);
    return 0;
}