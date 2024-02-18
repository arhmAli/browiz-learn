#include<iostream>
#include<vector>
#include<string>

using namespace std;

template <typename add>

add adder(add i,add b){
    return (i+10)*b;
};
vector <add> vctr(vector<add>arr){
    // for (auto i=arr.begin();)
    auto i=arr.begin();
    if(i!=arr.end()){
        *i=*i+10;
    }
    return arr;
}
int main(){
    vector <int> arr={1,2,3,4};
    auto a=10.5;
    auto b=10.5;
    cout<<adder(a,b);
    auto c=vctr(arr);
    for (auto i:c){
        cout<<i;
    }
    return 0;
}

//There are bugs is this code and i did not fix it just for later so that when i see this code later on
//i will know 