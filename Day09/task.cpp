// class to show height
// name
// height in feet and inches 
// count the number of entries
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class person{
    private:
    string name;
    int feet;
    int inches;
    public:
    void setData(string a,float  b , float c){
        name=a;
        feet=b;
        inches=c;
    }
    void showData(){
        cout << "The name is "<<name<<" And height is "<<feet<<"'"<<inches<<endl;
    }
};
int main(){
    vector <person> people;
    // person first,second;
    int number;
    string n;
    int feet;
    int inch;
    cout<<"Enter the number of persons :";
    cin>>number;
    for (int i=0;i<number;i++){
        person p;
        cout<<"Enter name";
        cin>>n;
        cout<<"Enter feet";
        cin>>feet;
        cout<<"Enter inches";
        cin>>inch;
        p.setData(n,feet,inch);
        people.push_back(p);
    }
    // first.setData("arham",5,11);
    // second.setData("faizan",6,02);
    // store every person in vector
    //count the number of entries
    // people.push_back(first);
    // people.push_back(second);
    for (auto &itr:people){
        itr.showData();
    }
    // for (auto i=people.begin();i!=people.end();i++){
    //     cout<<*i;
    // }
    cout<<"Entries"<<people.size();
    return 0;
}