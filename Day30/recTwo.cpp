#include<iostream>
using namespace std;
int factorial(int a){
    if(a==1){
        return 1;
    }
    int n=a-1;
    // int res=n*a;
    return a*factorial(n);
    // cout<<res;
}
int main(){
    int a;
    cout<<"Enter a no"<<endl;
    cin>>a;
    int res=factorial(a);
    cout<<res;
    return 0;
}