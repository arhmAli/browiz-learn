#include <iostream>
using namespace std;

int main (){
    int a=10;
    int *p;
    // p=&a;
    p=new int [3];
    p[1]=21;p[2]=32;p[3]=40;
    for (int i =0;i<4;i++){
    cout<<p[i]<<endl;
    cout<<sizeof(p[i]);
    }
    return 0;
}
// derefrencing is the accessing of the value of a pointer if there is no * then the pointer only tellls us about the 
// adress that it occupied
// new takes the memory as heap memory while using defualt point like & will take space in the stack memo
//in the course it was thought that 8bytes are taken while observing the output in the program showed its taking 4 bytes which
// is the amount of memo taken by int