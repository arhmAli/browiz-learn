//Bit manipulation Day 01
//Write a function that takes a decimal number and returns its binary equivalent

#include <iostream>
#include <string>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string convert2Bin(int num){
    string res="";
    while(num!=0){
        if(num%2==1){
            res=res+"1";
        }
        else{
            res=res+"0";
        }
        num=num/2; 
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int num;
    cout<<"Enter the number you'd like to convert"<<endl;
    cin>>num;
    string res=convert2Bin(num);
    cout<<"The binary representation is: "<<res<<endl;
    return 0;
}