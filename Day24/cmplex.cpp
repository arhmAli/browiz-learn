// Create a class called Complex to represent complex numbers. The class should have two private members:
// real (an integer) and imaginary (a float). Implement the following functionalities:
// 1 ) Default constructor that initializes real to 0 and imaginary to 0.0.
// 2 )Parameterized constructor that takes two arguments to initialize real and imaginary.
// 3) A method void getComplex() to input values for real and imaginary.
// 4)A method void displayComplex() to display the complex number in the format real + imaginary i.
// 5) A method Complex addComplex(Complex c) that takes another complex number as an argument and returns a new complex number that is the sum of the current complex number and the argument.
// In the main function, create three Complex objects, c1, c2, and c3. Initialize c1 and c2 
// using the parameterized constructor. Input values for c3 using getComplex().
// Calculate the sum of c1 and c2 and store it in c3. Display the values of all three complex numbers.

#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
class Complex{
private:
int real;
float imaginary;
public:
Complex():real(0),imaginary(0.0){}
Complex(int a,float b):real(a),imaginary(b){}
void getComplex(int a,float b){
    real=a;
    imaginary=b;
}
void displayComplex(){
    cout<<real<<"+"<<imaginary<<"i"<<endl;
}

void addComplex(Complex,Complex);
};
void Complex::addComplex(Complex c,Complex d){
real=c.real+d.real;
imaginary=c.imaginary+d.imaginary;
cout<<real<<"+"<<imaginary<<"i"<<endl;
}
int main(){
Complex c1(5,1.5);
Complex c2(2,1.1);
Complex c3;
c3.getComplex(2,1.5);
c3.addComplex(c1,c2);
c1.displayComplex();
c2.displayComplex();
c3.displayComplex();
return 0;
}