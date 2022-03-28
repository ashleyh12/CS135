#include <iostream>
#include "Shape.h"
using namespace std;

//Shape functions

//constructor (Must set up initial values w/ constructors)
Shape::Shape()
{
    name = "shape"; //setting initial values
}

//print function for print name variable
void Shape::printName() //all children will inherit
{
    cout << name << endl;
}

//Rectangle constructor
Rectangle::Rectangle()
{
    name = "rectangle"; //inherited from shape
    length = 5;
    width = 4;

}

//alternate Rectangle constr.
Rectangle::Rectangle(int l, int w) 
{
    name = "rectangle"; //inherited from shape
    length = l;
    width = w;
}

// Rectangle add functions
int Rectangle::add()
{
    return length+width; //from protected in the Rectangle child class
}
int Rectangle::add(int a) //overload
{
    return length+width+a;
}
void Rectangle::add(string b, int c)//overload
{
    cout << b << " is not a number but " << c << " is";
}
