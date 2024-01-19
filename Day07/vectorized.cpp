#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr={11,2,3,4,5};
    for (int i=0;i<5;i++){
    cout<<arr[i]<<endl;
    }
    cout<<"Index"<<endl;
    int ind;
    cin>>ind;
    arr.insert(arr.begin()+ind,33);
    auto d=arr.begin()+ind;
    cout<<"begin"<<*d<<endl;
    cout<<"using vector"<<endl;
    for (auto i=arr.begin();i!=arr.end();i++){
        cout<<*i<<endl;
    }
    // if the index is more than vector gives error and program crashes at runtime there
    return 0;
}