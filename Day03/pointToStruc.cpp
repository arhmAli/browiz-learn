#include <iostream>
#include <string>

using namespace std;
struct name{
    string firstName;
    string lastName;
};
int main(){
    // name ar={"arham","khan"};
    // name *p=&ar;
    // cout<<p->firstName;
    name *p;
    p=new name;
    p->firstName="arham";
    cout<<p->firstName;
return 0;
}
