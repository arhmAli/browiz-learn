#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> a;
    for (int i=0;i<10;i++){
        a.insert(a.begin(),i);
    }
    for (int b:a){
        cout<<b;
    }
    return 0;
}

// It is to be noted that in vector if u want to print out the vector u can simply do cout<<vector
// u need to iterate through it the reason is that they are part of built in standard lib but there
// is no << for vectors in std lib