//seatbelt indicator system
//Ask if seatbelt is fastened if yes all good if no then beep and blink
//after certain time beep fast and blink fast
//after some time beep stop but blink continue
//after some time both stop
#include <iostream>
#include <windows.h>
using namespace std;

void beepBlink(int a){
    for (int i =0; i<a;i++){
    cout<<"Beeping"<<endl<<"Blinking"<<endl;
    Sleep(1000);
    }
}
void beepFaster(int a){
    for (int i =0; i<a;i++){
    cout<<"Beeping"<<endl<<"Blinking"<<endl;
    Sleep(400);
    }
}
void blinkOnly(int a){
    for (int i =0; i<a;i++){
    cout<<"Blinking"<<endl;
    Sleep(400);
    }
}
int main(){
    bool fastened;
    bool interFast;
    bool finFast;
    cout<<"Is seatbelt fastened? type 1 for yes and 0 for no "<<endl;
    cin>>fastened;
    if (fastened){
        cout<<"Ok enjoy safe journey!"<<endl;
    }
    else {
        beepBlink(8);
        Sleep(10000);
        cout<<"Is the seatbelt Still not Fastened?"<<endl;
        cin>>interFast;
        if (!interFast){
            beepFaster(20);
        }
        cout<<"Is the seatbelt Still not Fastened?"<<endl;
        cin>>finFast;
        if(!finFast){
            blinkOnly(40);
        }
    }
    cout<<"Blinking and beeping stopped"<<endl;
    return 0;
}