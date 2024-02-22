// 2019MC253
#include <iostream>
#include <conio.h>
using namespace std;

class lineFollowing{
private:
bool Sens_left;
bool Sens_Right;
float motor_left;
float motor_right;
public:
lineFollowing():Sens_left(false),Sens_Right(false),motor_left(50.0),motor_right(50);
void left_value(){
    // while(motor_left>motor_right){
    //     motor_left+=1.0;
    // }
    motor_left+=1.0;
    if(motor_left==motor_right){
        Sens_Right==false;
    }
}
void right_value(){
    motor_right+=1.0;
    if(motor_left==motor_right){
        Sens_left==false;
    }
}
void sens_val(bool a,bool b){
    if(a==false && b==true){
        left_value();
    }
    else if(a==false && b==false){
        cout<<"Following Line"<<endl;
    }
    else if(a==true && b==false){
        right_value();
    }
    else{
        cout<<"Error Exception"<<endl;
    }
}
};
int main(){
    lineFollowing a;
    a.sens_val(false,true);
    while(true){
        char a=_getch();
        if(a=='a'){
        
        }
        else if (a=='d'){

        }
        else{

        }
    }
    return 0;
}