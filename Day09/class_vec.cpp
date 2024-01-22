#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Make a class library add books to it and show it store the books in a vector.

class Library{
    private:
    int published;
    string title;
    string author;
    public:
    void setBook(string t ,string a, int p){
        title=t;
        author=a;
        published=p;
    }
    void showBook(){
        cout<<"Title of the book is"<<title<<" While its published on"<<published<<" Author is"<<author<<"Added"<<endl;
    }
};
int main(){
    vector<Library>book;
    int number;
    cout<<"How many books u would like to add?"<<endl;
    cin>>number;
    cin.ignore();//ignore buffer
    for(int i=0 ; i<number;i++){
        Library b;
        string a;
        string t;
        int p;
        cout<<"Enter author"<<endl;
        getline(cin,a);
        cout<<"Title"<<endl;
        getline(cin,t);
        cout<<"Published year"<<endl;
        cin>>p;
        b.setBook(t,a,p);
        book.push_back(b);
    }
    for (auto i:book){
        i.showBook();
    }
    return 0;
}