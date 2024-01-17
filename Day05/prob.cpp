// Description: Rotate an array of n elements to the right by k steps.

#include <iostream>
#include <vector>
using namespace std;
void rot(vector<int>arr,int k){
    vector <int> b;
    for (int i=0;i<k;i++){
        int c=arr.back();
        arr.pop_back();
        arr.insert(arr.begin(),c);
    }
    for (int c:arr){
        cout << c;
    }
}
void cosect(vector<int>arr){
    //  Given a binary array, find the maximum number of consecutive 1s in this array.
    vector <int> b;
    int sum=0;
    auto prev=arr.begin();
    for (auto i=arr.begin();i!=arr.end();i++){
        if(*i==1&&*prev==1){
            sum=sum+1;
        }
        prev=i;
    }
   cout<<"the val"<<sum<<endl;
}
vector <int> sums(vector<int>arr){
    auto pos=0;
    auto neg=0;
    for (auto i = arr.begin();i!=arr.end();i++){
        if(*i>0){
            pos+=1;
        }
        else if(*i<0){
            neg+=1;
        }
    }
    vector <int> b;
    b.insert(b.begin(),pos);
    b.push_back(neg);
    return b;
}
int main(){
    vector <int> arr={-1,0,1,-1,1,1};
    // int k=3;
    // rot(arr,k);
    cosect(arr);
    vector <int> res=sums(arr);
    cout<<res[0]<<endl<<res[1];
    return 0;
}
// pop_back => removes elemte at the last 
// end  => basically used to tell the iterator where it ends like where does size end
// begin
// back => gives last value in the vectorss
// empty
// clear
// size=>no of elem
// capacity=>size in memo
// resize=>new size
// erase=>removes ele at specific pos
// at=>access an elem
