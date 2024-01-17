#include <iostream>
using namespace std;
struct rect {
    int length;
    int breadth;
};
int area (struct rect l){
    l.length=110;
    l.breadth=50;
    cout<<"In the local function by val"<<endl<<l.length<<endl<<"Breadth :"<<l.breadth<<endl;
}
int change (int arr,int l){
    return 0;
}
int areaPoint (struct rect *l){
    l->length=200;
    l->breadth=500;
    cout<<"In the local function by referencing"<<endl<<l->length<<endl<<"Breadth :"<<l->breadth<<endl;
}

int areaRef (struct rect &l){
    l.length=200;
    l.breadth=500;
    cout<<"In the local function by referencing"<<endl<<l.length<<endl<<"Breadth :"<<l.breadth<<endl;
}
int main(){
    struct rect a={10,20};
    // int b[]={1,2,3,4};
    // int b=area(a);
    // cout<<area(a)<<endl<<a.length<<endl<<a.breadth<<endl;
    // cout<<change(b,30)<<endl<<a.length<<endl<<a.breadth;
    area(a);
    cout<<"Using by value : "<<endl<<endl<<a.length<<endl;
    areaRef(a);
    cout<<"Using by referencing :"<<endl<<endl<<a.length;
    areaPoint(&a);
    cout<<"Using by Pointers :"<<endl<<endl<<a.length;
    return 0;
}

// In this program i verified that array needs to be send as adress or reference in a function 
// otherwise it would not work
// Also i learnt that structure can be send as val or address but the val will not mutate directly the
// variable at hand but if u wish to do that use addressing r referencing