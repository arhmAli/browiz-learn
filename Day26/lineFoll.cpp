#include<iostream>
#include<vector>
#include<conio.h>
#include<cmath>
using namespace std;

class lineFollowing {
private:
    bool Sens_left;
    bool Sens_Right;
    float motor_left;
    float motor_right;

public:
    lineFollowing() : Sens_left(false), Sens_Right(false), motor_left(50.0), motor_right(50.0) {}

   void set_sens_left(bool l){
         Sens_left = l;
   }
   void set_sens_right(bool r){
            Sens_Right = r;
   }
   void set_motor_left(float l){
            motor_left = l;

   }
   void set_motor_right(float r){
            motor_right = r;

   }
   void dec_left_motor(){
       motor_left -= 1.0;
       cout<<"----Turning Left----"<<endl;
       }
    void dec_right_motor(){
       motor_right -= 1.0;
       cout<<"----Turning Right----"<<endl;
       }
       void checker(){
        if(fabs(motor_left-motor_right)<0.001){
            Sens_left = false;
            Sens_Right = false;
            cout<<"******The ROBOT IS BACK ON THE LINE******"<<endl;
        }
       }
    void show_values() {
        cout << "Sens_left: " << Sens_left << endl;
        cout << "Sens_Right: " << Sens_Right << endl;
        cout << "motor_left: " << motor_left << endl;
        cout << "motor_right: " << motor_right << endl;
    }
};

int main() {
    lineFollowing lf;
    // lf.set_sens_left(true);
    // lf.set_sens_right(true);
    // lf.set_motor_left(100.0);
    // lf.set_motor_right(100.0);
    lf.show_values();
    while(true){
        if(_kbhit()){
         char ch = getch();
            while(ch == 'a'){
                lf.set_sens_left(true); 
                lf.set_sens_right(false);
                lf.dec_left_motor();
                lf.checker();
                lf.show_values();
                if(!_kbhit()){
                    break;
                }
            }
        
            while(ch == 'd'){
                lf.set_sens_left(false);
                lf.set_sens_right(true);
                lf.dec_right_motor();
                lf.checker();
                lf.show_values();
                if(!_kbhit()){
                    break;
                }
            }
        }
    
    }
    
    return 0;
}
