// write examples of && || ^ >> in terms of bit manipulation
#include <iostream>
#include <string>
#include <algorithm>
std::string convert2Bin(int a){
    std::string res="";
    while(a!=0){
        res=(a%2==0? "0":"1")+res;
        a=a/2;
    }
    // std::reverse(res.begin(),res.end());
    return res;
}
int main(){
    int a ;int b;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>a;
    std::cout<<"Enter 2nd number"<<std::endl;
    std::cin>>b;
    int c=a>>b;
    int d=a&b;
    int e=a||b;
    int f=a^b;
    std::string g=convert2Bin(a);
    std::string h=convert2Bin(b);
    std::cout<<"THE Binary of a is:"<<g<<std::endl;
    std::cout<<"THE Binary of b is:"<<h<<std::endl;
    std::cout<<"THE AND OPERATION IS AS:"<<d<<std::endl;
    std::cout<<"THE OR OPERATION IS AS:"<<e<<std::endl;
    std::cout<<"THE XOR OPERATION IS AS:"<<f<<std::endl;
    std::cout<<"THE righ shift opeation is OPERATION IS AS:"<<c<<std::endl;
    return 0;
    
}