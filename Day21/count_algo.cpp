#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector <int> arr={1,2,3,4,4,4,1,1,5,1,2,3};
    //Syntax for the count algorithm is as:
    //count(Starting Index, Ending Index , Value you want to count)
    int freq=count(arr.begin(),arr.end(),1);
    //Now let's see if you can count occurences of a pattern
    vector <int> pattern={1,2,3};
    int freq_vctr=count(arr.begin(),arr.end(),pattern);
    for(auto i:freq_vctr){
        cout<<i<<endl;
    }
    //I tried two diff approaches first i gave the whole vector it gave error in compiler
    //Then i tried to give like .begin and .end it gave error of function overloading so its 
    //no possible
    cout<<freq;
    return 0;
}