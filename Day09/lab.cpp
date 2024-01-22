#include <iostream>
#include <string>
using namespace std;
// attributes,membershipfunctions
// object in main func
//good practice to have a mf to initliaze data like int a comes from main function set it to private
//a
// Syntax
// class name {
//     private:
//     public:
// };
// Object is basically an istance of the class
class car{
    private:
    // These are called data member
    string name;
    int model;
    string numberPlate;
    float cost;
    public:
    void setCar(string n,int a , string b , float c){
        model=a;
        name=n;
        numberPlate=b;
        cost=c;
    }
    void showData(){
        cout<<"The car is " << name<<" With model of "<<model<<" and number plate is " << numberPlate <<" The cost is given as :"<<cost<<endl; 
    }
};
int main(){
    car civic,corolla;
    civic.setCar("Honda",2015,"FSD4023",427230);
    civic.showData();
    corolla.setCar("Toyota",2022,"LHR231",603215);
    corolla.showData();
    return 0;
}