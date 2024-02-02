#include <iostream>
#include <string>
#include <map>

using namespace std;
struct Student{
    int sem;
    string name;
    float cgpa;
};
int main(){
    string name[]={"Arham","faizan","hassam"};
    int sem[]={1,4,7};
    float cgpa[] ={2.4,3.8,2.8};
    string regNum[]={"2019MC253","2019MC297","2019MC291"};
    map<string,Student> stuMap;
    for(int i=0;i<3;i++ ){
        stuMap[regNum[i]]=Student{sem[i],name[i],cgpa[i]};
    }
    for(auto &itr:stuMap){
        cout<<itr.first<<endl
        <<itr.second.name<<endl
        <<itr.second.sem<<endl
        <<itr.second.cgpa<<endl;
    }
    cout << "Enter registration number to fetch data: ";
    string regToFetch;
    getline(cin, regToFetch);

    auto it = stuMap.find(regToFetch);
    if (it != stuMap.end()) {
        cout << "Data for " << regToFetch << ":\n"
             << "Name: " << it->second.name << endl
             << "Semester: " << it->second.sem << endl
             << "CGPA: " << it->second.cgpa << endl;
    } else {
        cout << "No data found for " << regToFetch << endl;
    }

return 0;
}