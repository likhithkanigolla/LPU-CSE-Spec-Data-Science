#include <iostream>
 using namespace std;
class A{
public:
	
  void f(){
    cout<<"f()"<<endl;
  }
  
  static int put(int a)
  {
  	cout<<endl<<"a"<<a;
  }
public:
  int i;
};
 
int main(){
  //A *p;
  
  A *p=new A;
  
    p->f();
	
	int (*z)(int)=&A::put;
	
	(*z)(10);
} 

