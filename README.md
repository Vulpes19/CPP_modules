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
