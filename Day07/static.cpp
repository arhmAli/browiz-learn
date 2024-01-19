#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[5]={11,2,3,4,5};
    for (int i=0;i<5;i++){
    cout<<arr[i]<<endl;
    }
    cout<<"Index"<<endl;
    int ind;
    cin>>ind;
    arr[ind]=33;
    cout<<"Using simple array"<<endl;
     for (int i=0;i<=ind;i++){
        cout<<arr[i]<<endl;
    }
    // if index is less than the size array and vector gives diff scenario in arr the size mutates
    // and the end of array has a random value
    // if ind=3
    // 11
    // 2
    // 3
    // 33
    // 5
    // 107
    // // if the index is more than vector gives error and program crashes at runtime there
    // When you use a simple array and go beyond its valid index range, the behavior is undefined. 
    // In C++, accessing an array beyond its bounds can lead to unpredictable results, and it's 
    // considered undefined behavior. 
    return 0;
}