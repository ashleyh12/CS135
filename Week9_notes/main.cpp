#include <iostream>
#include "Shape.h"
using namespace std;

int main()
{
    Rectangle r1; //creating a rectangle object
    Rectangle r2(50, 3); //second rectangle object for alt. constructor
  
    r1.printName(); //using rectangle object to print the name (rectangle)
    cout << r1.add() << endl; // 9. Because the length is 4 and the width is 5. 
    cout << r1.add(7) << endl; // 16 because 4 + 5 + 7 = 16.
    r1.add("bowling",11);
    cout << endl << r2.add(); //using the alt. Rectangle constructor 
  
    return 0;
}

