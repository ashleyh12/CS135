#include <string>
using namespace std;
//parent class
class Shape
{

    private: //no other class can access this
    string stuff;
    
    
    protected: //only child classes can access this
    string name;
    
    public: //anyone can access this
    Shape(); //constructor
    void printName(); //print function
    //this function will eventually return the name variable above 

};

//child class: gets all of the public and protected members of its parent class
//inheritance
//protected == every child class of Shape can access
//private == only this class can access
//public == anyone can access

//child class (Rectangle) inherits all the public and protected members of shape

class Rectangle: public Shape 
{
   
   public:
   Rectangle();   //constructor

 //overload = same name, different parameters
   Rectangle(int,int); //alternate constructor is an example
   int add(); //no paramters
   int add(int); //overload
   void add(string, int); //another example of overload

    protected:
    //more variables
    int length;
    int width;

};

/*

Extra notes:

- For functions:
    ex: int add(); , int add(int)
    returntype functionname(datatype)

- How to set up a child class: 
    <child class> : <access specifier> <parent class>

- Access specifiers explained: 


  -- Public inheritance means:
    Public parent class members stay public
    Protected parent class members stay protected 
    Private parent class members stay inaccessible 

  -- Private inheritance means:
    Public inherited members become private
    Protected inherited members become private
    Private inherited members stay inaccessible

  -- Protected inheritance means: 
    Protected inheritance is almost never used. With protected inheritance, the public and protected members become protected, and private members stay inaccessible.

*/
