#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main(){
    list <int> lst={2,1,4};
    lst.push_front(33);
    lst.push_back(55);
    cout<<"Before merging "<<endl;
    for (auto &it:lst){
        cout<<it<<endl;
        // lst.pop_front();
    }
    list <int> sec={2,5,2,5};
    lst.merge(sec);
    cout<<"After merging"<<endl;
    for (auto &it:lst){
        cout<<it<<endl;
    }
    cout<<"*****SORTING THE LIST*******"<<endl;
    lst.sort();
    for (auto &it:lst){
        cout<<it<<endl;
    }
    //Removing a specific value i.e 4
    lst.remove(4);
    auto rem=find(lst.begin(),lst.end(),2);
    if(rem!=lst.end()){
        cout<<"The value 2 is at "<<distance(lst.begin(),rem)<<endl; 
        //erase will remove the first occurence of 2
        lst.erase(rem);
    }
    for (auto &it:lst){
        cout<<it<<endl;
    }
    return 0;
}