/*Virtual Destructors
Destructors in the Base class can be Virtual.
Whenever Upcasting is done,
Destructors of the Base class must be made virtual
for proper destrucstion of the object when the program exits.

NOTE : Constructors are never Virtual, only Destructors can be Virtual.
*/
#include<iostream.h>
class Base
{
 public:
 virtual  ~Base() {cout << "Base Destructor\t"; }
};

class Derived:public Base
{
 public:
 ~Derived() { cout<< "Derived Destructor"; }
};

int main()
{
 Base* b = new Derived;     //Upcasting
 delete b;
}
