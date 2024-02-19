#include <iostream>
#include <vector>
//add data/vector to somedata

using namespace std;
class smallObj{
    private:
    int data;
    vector <int> vctr;
    public:
    void setData(int a){
        vctr.push_back(a);
    }
    void showData(){
        for(auto i:vctr){
            cout <<i<<endl;
        }
    }
};
int main(){
    // vector <int> a={1}
    smallObj a;
    // a.setData(10);
    // a.setData(6);
    // a.setData(12);
    // a.setData(5);
    for (int i=1;i<11;i++){
        a.setData(i);
    }
    a.showData();
    return 0;
}