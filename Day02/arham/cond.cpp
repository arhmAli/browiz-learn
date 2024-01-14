#include <iostream>
using namespace std;
int main(){
    int a;
    while(a!=5){
    cout<<"Enter a nmber between 1 and 10"<<endl;
    cin>>a;
    if(a==5){
     cout<<"yo entered the real answer"<<endl;
    }
    else{
    cout<<"the entered nmber"<<a<<"try again :-(  "<<endl;
    }
    }
}