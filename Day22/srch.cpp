#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector <int> vctr={1,2,3,4,5,1,2,3,7,2,1,9};
    std::vector <int> pattern={4,5};
    auto it=std::search(vctr.begin(),vctr.end(),pattern.begin(),pattern.end());
    if(it!=vctr.end()){
        std::cout<<std::distance(vctr.begin(),it)<<std::endl;
    }
    else{
        std::cout<<"No"<<std::endl;
    }
}
//So find,search,count,distance are the algorithms which i studied untill now