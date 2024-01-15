#include<iostream>
#include<vector>
using namespace std;

//vector are arry on steroids


auto posNeg(vector<int>arr){
    int pos=0;
    int neg=0;
    vector <int> ans;
    for(auto i=arr.begin();i!=arr.end();i++){
        if(*i>0){
            pos+=1;
        }
        else if (*i<0){
            neg=neg+1;
        }
        
    }
    ans.push_back(pos);
    ans.push_back(neg);
    // for(int i:ans){
    //     cout<<i<<endl;
    // }
    return ans;
}
int main(){
    vector<int> a ={3,1,2,3,4,5,-4,-1,-5,-10};
    auto res=posNeg(a);
    cout<<"the no of positive part "<<res[0]<<endl<<"The number negative in the array "<<res[1]<<endl;
    return 0;
}

//Leetcode problem statement for this sol
// Count Positive and Negative Elements in an Array
// Given an array of integers, implement a function countPosNeg to return 
// a vector containing two values: the count of positive integers and the count
// of negative integers in the array.
