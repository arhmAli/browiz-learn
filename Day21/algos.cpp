#include <iostream>
#include <vector>
#include <algorithm>
#include <conio.h>

using namespace std;

int main(){
vector <int> parent;
int srch;
int length;
int sum=0;
cout<<"Enter length of the vector"<<endl;
cin>>length;
cout<<"Now you will be prompted to enter it's values"<<endl;
for(int i=0;i<length;i++){
    cout<<"Enter value"<<endl;
    int a;
    cin>>a;
    parent.push_back(a);
}

cout<<"Enter the value you would like to search in your given vector"<<endl;
cin>>srch;
auto ind=find(parent.begin(),parent.end(),srch);
for(auto i:parent){
    if (i==*ind){
        cout<<"The value is present in vector at "<<sum<<"th index"<<endl;
    }
    else{
        sum=sum+1;
        cout<<"Searching in the vector..."<<endl;
    }
}
return 0;
}