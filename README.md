# CPP_modules

# Module 00

### Namespaces 
Declarative region that provides scope to identifiers like (functions, variables, etc) 
Namespaces are used to prevent name collisions that can occur. 

You can access members of a namespace by using the name of it like  

`std::string` or `using std::string` or `using namespace std` 

### Why using namespace std is bad 

Consider two libraries called Foo and Bar: 

`using namespace foo;` 
`using namespace bar;` 

Everything works fine, and you can call `Blah()` from Foo and `Quux()` from Bar without problems.
But one day you upgrade to a new version of Foo 2.0, which now offers a function called `Quux()`.
Now you've got a conflict: Both Foo 2.0 and Bar import `Quux()` into your global namespace.
This is going to take some effort to fix, especially if the function parameters happen to match. 

If you had used `foo::Blah()` and `bar::Quux()`, then the introduction of `foo::Quux()` would have been a non-event.

### Classes vs structs 

Structures and classes differ in the following particulars: 

   - Structures are value types; classes are reference types. A variable of a structure type contains the structure's data, rather than containing a reference to the data as a class type does. 

   - Structures use stack allocation; classes use heap allocation. 

   - All structure elements are Public by default; class variables and constants are Private by default, while other class members are Public by default. This behavior for class members provides compatibility with the Visual Basic 6.0 system of defaults. 

   - A structure must have at least one nonshared variable or nonshared, noncustom event element; a class can be completely empty. 

   - Structure elements cannot be declared as Protected; class members can. 

   - Structure variable declarations cannot specify initializers or initial sizes for arrays; class variable declarations can. 

   - Structures are not inheritable; classes are. 

   - A structure does not require a constructor; a class does. 

   - Structures can have nonshared constructors only if they take parameters; classes can have them with or without parameters.
   
### Stdio streams: 
**cout** is an instance of `std::ostream` class it is used to send characters to std output stream and it uses operator overloading `<<` 
**cin** is an instance of `std::istream` class it reads input from std input stream by using `>>` 
  
### Initializing lists 

It's used to initialize data members of a class. 
Cases we must use initialize lists: 
  - To initialize non static const data members. 
  - To initialize reference members. 
  - To initialize member objects which do not have default constructor. 
  - To initialize base class members. 
  - To initialize a data member with the same name as constructor parameter name. 
  - For performance reasons. 

*Example 1:* 
```
class Test 
{ 
private: 
    int x; 
    int y; 
public: 
    Test( void ) : x(0), y(1) { } 
 };
```

*Example 2:* 
```
class A  
{
    int i; 
public: 
    A( int in ) { i = in}; 
}; 
class B 
{ 
    A a; 
public: 
    B( int in ) : a(in) { } 
};
```

### Static class member
Declaring a member static means no matter how many objects of the class are created there's only one copy of that member. 
They are stored in Data segment their lifetime is the entire program run.

### Static function member
A static function can be called even if no objects of the class exist and the static functions are accessed using 
only the class name and the `::` operator 
It can only access static data members and other static member functions and any other function outside the class. 
They do not have access to the this pointer of the class.

## Module 01:

### new operator
Is an operator function if sufficient memory is available new operator intializes the memory and returns the address of the newly allocated memory. 
`void *operator new( size_t size ); `

### References:
It's an alias for an object.
*Example:*
```
void swap(int &x, int &y) 
{ 
   int tmp = x; 
   x= y; 
   y= tmp; 
} 
int main( void ) 
{ 
   int a = 1; 
   int b = 2; 
   swap(a, b); 
}
```
**x** and **y** are aliases for **a** and **b** it's not a copy or a pointer but **x** and **y** themselves with the same address. 

### Pointer to members
Pointers to members can refer to non static members of class objects, we can't use it to point to static class members because the address of a static member isn't associated with class objects. 
*Example:* 
```
class test 
{ 
   public: 
      int var; 
      void func(void) {}; 
}; 

int main( void ) 
{ 
   /*pointer to data member*/ 
   int test::*ptrvar = &test::var;
   
   /*pointer to data function*/ 
   void (test::*ptrfunc) (void) = &test::func; 

   /*access data member*/ 
   test t; 
   t.*ptrvar = 0; 
  
   /*call member function*/ 
   t.*ptrfunc; 
} 
```
### Stream
In C++, a stream is an abstract class that provides a framework for input/output operations. Streams are a key part of the C++ standard library, providing a flexible and extensible way to read and write data from various sources and to various outputs. A stream is associated with a specific input or output source, such as a file, a string, the standard input/output, or a custom input/output device.

## Module 02

### Ad Hoc Polymorphism
It's a programming concept used to describe functions with the same name but can be executed differently depending on the variable or argument type. 

For example sum function when you execute on 1 + 1 the result is 2 but if you execute it with strings the result will concatenate the two strings.

### Orthodox Canonical class Form

**Default constructor**\
It is automatically generated by the compiler if no other constructors are defined for a class. 

It takes no arguments and has an empty body its purpose is to initialize the object's data members to their default values.

**Copy constructor**\
Takes an object of the same class as an argument and it creates a new object as a copy of an existing object.\
*Example:*

```
class test 
{ 
   int x; 
   int y; 
   Test(const test &T) 
   { 
      x= T.x; 
      y= T.y; 
   } 
}; 
```

**Copy assignment operator**\
It's an operator that is called automatically when an object is assigned to the value of another object of the same class.\
*Example:*
```
class test 
{ 
   int x; 
   int y; 
   test &operator=(const test &T) 
   {
      if (this != &T) 
      { 
         x= T.x; 
         y= T.y; 
      } 
      return *this; 
   } 
}; 
```
**Destructor**\
It's a special member function of a class that is executed when an object of that class goes out of scope or is explicitly deleted. 

