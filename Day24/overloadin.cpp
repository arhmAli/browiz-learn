//constructor overloading , prototyping , Object as argument
#include <iostream>
using namespace std;

class Distance {
    private:
    int feet;
    float inches;
    public:
    Distance():feet(0),inches(0.0){};
    Distance(int ft,float in):feet(ft),inches(in){};
    void getDist(){
        cout<<"\n Enter Feet";cin>>feet;
        cout<<"\n Enter Inches";cin>>inches;
    }
    void showData(){
        cout<<feet<<","<<inches<<","<<endl;
    }
    void add_dist(Distance,Distance);
};
void Distance::add_dist(Distance d2,Distance d3){
    inches=d2.inches+d3.inches;
    feet=0;
    if(inches>=12.0){
        inches -=12.0;
        feet++;
    }
    feet =d2.feet+d3.feet;
}
int main(){
Distance dist1,dist3;
Distance dist2(11,6.25);
dist1.getDist();
dist3.add_dist(dist1,dist2);
cout<<"\n dist1 =";dist1.showData();
cout<<"\n dist2 =";dist2.showData();
cout<<"\n dist3 =";dist3.showData();
cout<<endl;
return 0;
}