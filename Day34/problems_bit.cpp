// the XOR working is like when there are even number of 1's==>0 when odd no of 1's =>>>1
// for instance the 5 is 101 and if we XOR 5^5
// 101
// 101
// ---
// 000====> because there are even no of 1's in each column so XOR of same number is 0.
// ---
//Making a function to convert to binary which shows as integer or vector or better off manipulating
// now the task is to swap two numbers without using 3rd variable


#include <iostream>
#include <vector>
using namespace std;

vector <int> convert2Bin(int num){
    vector <int> binary;
    while(num>0){
    binary.insert(binary.begin(),num%2);
    num=num/2;
    }
    return binary;
}
int main(){
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    vector <int> res=convert2Bin(num);
    for(auto i:res){
        cout<<i;
    }
    //Swap two numbers without using third variable.
    int first;int second;
    cout<<"Enter first number"<<endl;
    cin>>first;
    cout<<"Enter second number"<<endl;
    cin>>second;
    first=first^second;
    second=first^second;
    //This will do something like => (first^second)^second where second will lead to 0 and ans is first
    first=first^second;
    //Now second => first and we XOR (first^second)^first ans is second 
    cout<<"After swapping first is:"<<first<<endl<<"And second is :"<<second<<endl;
    return 0;
}
