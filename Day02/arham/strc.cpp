#include <iostream>
using namespace std;
struct groc
{
    int choc;
    int veg;
    int meat;
    int pencil;
};
struct price
{
    int price_choc;
    int price_veg;
    int price_meat;
    int price_misc;
};
struct rect {
    int length;
    int breadth;
};
struct compl_nm{
        int real_part;
        int imaginary_part;
};
struct stdnts{
    int roll_no[3];
    int marks[3];
    char adress[50];
    char phone[13];
};
int main(){
    struct price global={3,5,12,1};
    struct groc a={};
        cout << "welcome to strctres general stores we"<<endl<<"provide best chococalte veggies meat and pencils"<<endl;

        cout << "Chocolates: "<<endl;
        cin >> a.choc;

        cout << "Vegetables: "<<endl;
        cin >> a.veg;

        cout << "Meat: "<<endl;
        cin >> a.meat;

        cout << "Pencils: "<<endl;
        cin >> a.pencil;
        
        int total=global.price_choc*a.choc + global.price_meat*a.meat + global.price_misc*a.pencil 
        +global.price_veg*a.veg;
        cout<<"yr total is : "<<total<<"$"<<endl;
    return 0;
}
