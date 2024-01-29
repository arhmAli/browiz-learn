//SORT FIND ALGORITHM
//DISTANCE FUNCTION
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main(){
    int arr[]={11,22,13,4,55};
    // vector <int> arr={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sorted[size];
    copy(arr,arr+size,sorted);
    //FOR DESCENDING
    // sort(sorted,sorted+size,greater<int>());
    //DEFAULT ASCENDING
    // sort(sorted,sorted+size);
    int *a=find(sorted,sorted+size,4);
    //The find algorithm is used to give pointer of the location so if u want to store it 
    //use a pointer and distance function is used to calculate distance bw to numbers in an array,vector etc.
    cout<<"VALUE AT "<<distance(sorted,a)<<endl;
    cout<<"************************UNSORTED ARRAY**********************"<<endl;
    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"************************SORTED ARRAY**********************"<<endl;
    for (int i=0;i<size;i++){
        cout<<sorted[i]<<endl;
    }
    
    // sort(arr.begin(),arr.end());
    return 0;
}