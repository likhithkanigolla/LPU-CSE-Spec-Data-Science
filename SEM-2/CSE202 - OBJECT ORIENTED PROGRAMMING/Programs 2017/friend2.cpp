#include<iostream>
using namespace std;
class A;  // forward declaration of A needed by B
class B
{int b;
public:
    void fB(A& a);};

class A
{    int i;
public:
    friend void fA(A& a);    //specifying function fA as a friend of A, fA is not member function of A
    friend void B::fB(A& a);};

void fA(A& a)
{    a.i  = 11; // accessing and modifying Class A private member i
    cout<<a.i<<endl;}
void B::fB(A& a)
{    a.i  = 22;
b=20; // accessing and modifying Class A private member i in Class B member function fB
    cout<<a.i+b<<endl;}
int main()
{    A a;
    fA(a);    // calling friend function of class A
    B b;
    b.fB(a);  // calling B class member function fB, B:fB is friend of class A
   return 0;
}
