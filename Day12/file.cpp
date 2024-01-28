#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int a ;int b;
    ofstream output("hello.txt");
    if(output.is_open()){
        output<<"Hello \n";
        cout<<"Enter a variable a"<<endl;
        cin>>a;
        cout<<"Enter b"<<endl;
        cin>>b;
        cout<<"Sum stored !"<<endl;
        output<<a+b;
        output.close();
    }
    else{
        cout<<"Error!"<<endl;
    }
    return 0;
}