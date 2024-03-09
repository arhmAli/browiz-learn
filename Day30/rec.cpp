// calculate factorial of a number n
// 3!=3(3-1)*(3-2)
//n!=n(n-1)*(n-2)...untill n-x==1
#include <iostream>
using namespace std;
int recur(int n){
    // int x=1;
    if(n==0){
        return 1;
    }
    cout<<n<<endl;
    return n*recur(n-1);
    // recur(n);
    
}
int main(){
    int n=5;
    cout<<recur(n)<<endl;
    return 0;
}