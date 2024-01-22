// write a program to add and multiply two numbers and display them at end
#include<stdio.h>
#include<conio.h>
#include <windows.h>
int main()
{
    int a,b;
    printf("enter number 1",a);
    scanf("%d",&a);
    printf("enter number 2",b);
    scanf("%d",&b);
    int c=a+b;
    int d=a*b;
printf("the answer of addition is %d",c);
printf("the answer of prodcut is %d",d);
return 0;
}
printf my ata ha %d data typeko dekhany ke 
void clscreen() {
    system("cls"); // Use "cls" instead if you are on Windows
}

int main(){
    //get ch
    clscreen();
    char a,b;
    printf("Enter a character \n");
    a=getch();
    printf("Character entered is %c \n",a);
    //getche
    clscreen();
    printf("Enter a character \n");
    b=getche();
    printf("\nCharacter entered is %c",b);
    return 0;
}

int main()
{
    int a,b;
    printf("enterr a number from 0 to 10");
    scanf("%d",&a);
    printf("enter a number from 0 to 10");
    scanf("%d",&b);
    int c=a+b;
    if (c>10)
        printf("OUT OF RANGE SUM");
return 0;
}

write a program to check if a is 2 times  of b
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter number 1");
    scanf("%d",&a);
    printf("enter number 2");
    scanf("%d",&b);
    if(a*2==b)
    printf("%d  is two times %d",a,b);
    else
    printf("no");
    return 0;
}


write a program to make to determine what day it is if entered 1 => monday, 2=> tuesday and so on..
if entered is more than 7 print invalid range
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter a number to know what day it is");
    scanf("%d",&a);
    if(a==1)
    printf("monday");
    else if(a==2)
    printf("tuesday");
    else if(a==3)
    printf("wednesday");
    else if(a==4)
    printf("thursday");
    else if(a==5)
    printf("friday");
    else if(a==6)
    printf("saturday");
    else if (a=7)
    printf("sunday");
    else
    printf("Out of range");
    return 0;
}


write a program to know if number entered is less than 100 and then check if its even number if its 
greater than 100 print hello

#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);

    if(a<100){
    if(a%2==0){
        printf("is even");
        Beep(1500,1500);
    }
        else {
        printf("is odd");
        Beep(4000,2500);
        }
    }  
    else{
    printf("hello");
    }
    return 0;
}


#include<stdio.h>
#include <conio.h>
int main(){
    int ch=97;
    printf("%c",ch);
    printf("%d",++ch);
return 0;
}

#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        printf(" The current value is %d \n",i);
    }
    for(int i=0;i<=10;i++){
        printf(" The current value is %d \n",i);
    }
    int i=0;
    while(i<a){
        i++;
        printf("The value of a is %d \n",i);
    }
    do{
        a=a-1;
        printf(" The value of a is %d \n",a);
    }while(a>0);
    while loop is used when we dont know how many times the loop should run
    return 0;
}
i)
write a program to get the sum of first 100 natural numbers
ii)
write a program to add 5 to a number untill it reaches 100 the number is less than 100 so dont
use if else to check it at the end u should print how many 5's were added

#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
    printf("youre value is%d\n ",i);
    }
    return 0;
}




for (int i=1;i=10){

}