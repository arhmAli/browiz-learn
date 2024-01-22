#include<stdio.h>
#include<conio.h>
 int main(){
      // char,int,float,double
      // variable decalaration
      int a;
      a=10;
      
      int b=20;
      a=a+b;
      // int a=10;
      // char a;
      // a='s';
      // float a=10.21;
      // double a=23123112;
      // printf("The value of a is  %d ",a);
      printf("The value before changing %d \n",a);
      printf("Enter a value\n");
      
      // If u want to take input from a user and u know what data type it is
      scanf("%d",&a);
      // &===> RAM k andar ik address us address p a ki value hai wo value idher ani chaiye
      printf("The value is %d",a);
 return 0;
 }
// int sum(int a,int b){
//    return a+b;
// } 


