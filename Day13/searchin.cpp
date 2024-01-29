//search count
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int> vctr={2,22,1,0,32,55,2,22};
    vector <int> sub={2,22};
    auto it=search(vctr.begin(),vctr.end(),sub.begin(),sub.end());
    if (it!=vctr.end()){
        cout<<"Subrange present at "<<distance(vctr.begin(),it)<<endl;
    }
    else{
        cout<<"subrange not found"<<endl;
    }
    return 0;
}   