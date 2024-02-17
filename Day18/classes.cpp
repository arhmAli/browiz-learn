//Practicing the constructor and how to call it
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Add {
    private:
    int a;
    int b;
    vector <int> c;
    public:
    Add(int first,int sec){
        a=first;
        b=sec;
    }
    // template<typename T>
    void addVec(){
        c.push_back(a);
        c.push_back(b);
    }
    void showVec(){
        for(auto i:c){
            cout<<i<<endl;
        }
    }
};
int main(){
    Add a(5,10);
    // a.add(5,10);
    a.addVec();
    a.showVec();
    return 0;
}
