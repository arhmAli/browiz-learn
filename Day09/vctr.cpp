#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vctr;
    // for (int i = 0 ;i <=10; i++){
    //     vctr.push_back(i);
    // }
    //reversing now the value is adding at the beginning 
    for (int i=10 ; i<=20 ; i++){
        vctr.insert(vctr.begin(),i);
    }
    //same ascending order can be achieved if i add i in begin then 0+0 , 0+1 , 0+2,....
    // for (int i=0 ; i<=10 ; i++){
    //     vctr.insert(vctr.begin(),i);
    // }
    for (auto itr=vctr.begin();itr!=vctr.end();itr++){
        cout<<*itr<<endl;
    }
    cout<<"The length of the vector "<<vctr.size();
    return 0;
}
// cbegin,cend=>constant beginning;
// rbegin,rend=>reverse beginnning reverse end;