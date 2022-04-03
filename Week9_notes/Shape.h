#include <string>
using namespace std;

//parent class
class Shape //defining the class shape
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

//child class (Rectangle) inherits all the public and protected members of shape

class Rectangle: public Shape  
{
   
   public:
   //it also has a constructor
   Rectangle();
 //overload = same name, different parameters
 //alternate constructor is an example of overloading
   Rectangle(int,int);
   int add(); //no paramters
   int add(int); //overload
   void add(string, int); //overload

  protected:
  //it has more variables
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

    PUBLIC INHERITANCE: When inheriting a class from a public parent class, public members of the parent class 
    become public members of the child class and protected members of the parent class become protected members of the child class.
    
    PRIVATE INHERITANCE: When we derive from a private parent class, then public and protected members of the parent class become 
    private members of the child class.
    
    PROTECTED INHERITANCE: When deriving from a protected parent class, then public and protected members of the parent class 
    become protected members of the child class.
    
-  ALL VARIABLES SHOULD BE PROTECTED!
    
    
*/
