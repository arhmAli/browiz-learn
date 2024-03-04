#include <iostream>
#include <string>
#include <list>

using namespace std;
void some(list <int> a){
    int b=1;
    a.push_back(b);
    if(a.size()==10){
    for(auto i:a){
        cout<<i<<endl;
    }
        cout<<"FINISHED"<<endl;
        
    }
    else{
    some(a);

        }
}
int main(){
    list <int> a={1,2,3};
    some(a);
}