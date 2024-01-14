#include <iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int arr2[]={20,30,40,50,60};
    int i;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){
        cout<<"The sum of "<<i<<" th value of the array and arr2 is :"<<arr[i]+arr2[i]<<endl;
    }
    return 0;
}

// Iterating over elements of array
// int main(){
//     int arr[]={1,22,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i:arr){
//         cout<<"The values of array are "<<i<<endl;
//     }
//     return 0;
// }
