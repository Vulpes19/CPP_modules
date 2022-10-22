//http://www.edm2.com/0510/introcpp3.html

#include <iostream>

using namespace std;

class bad
  {
  public:
    bad(void);                  // default constructor
    bad(const bad&);            // copy constructor
    ~bad(void);                 // destructor
    bad& operator=(const bad&); // copy assignment
  private:
    int* pi;
  };

  bad::bad(void): pi(new int(5)) // allocate new int on heap and
                    // give it the value 5.
  {
    cout << "bad(void)" << endl;   
  }

  bad::bad(const bad& b): pi(new int(*b.pi)) // initialize pi with the value of b's pi
  {
    cout << "copy bad(void)" << endl;   
  }

  bad::~bad(void)
  {
    cout << "destructor called" << endl;
    delete pi;
  }

  bad& bad::operator=(const bad& b)
  {
    cout << "operator=" << endl;
    if (this != &b)
    {
        delete pi;
        pi = new int(*b.pi);
    }    // This seamingly logical and simple
    return *this; // assignment is also disasterous.
  }

  int main(void)
  {
    bad b1;
    {
      bad b2(b1); // b2.pi is now the same as b1.pi.
    } // Here b2 is destroyed, and b2's destructor is
      // called. This means that the memory area
      // pointed to by b2.pi (and hence also b1.pi) is
      // no longer valid

    bad b3(b1); // Make b3.pi point to the same invalid
                // memory area!
    bad b4;
    bad b5;
    b5 = b4;
    b5 = b5;
    return 0;
  } 