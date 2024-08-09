#include <iostream>
using namespace std;

class Weapon{
    public:  void virtual loadFeatures()=0;
};
class Bomb : public Weapon
{  public:  void loadFeatures()
            { cout << "Loading bomb features.\n"; }
};
class Gun : public Weapon
{    public: void  loadFeatures()
             { cout << "Loading gun features.\n"; }
};
int main()
{  Weapon *b1;
   Gun g;
   Bomb k;

    b1=&g;
    b1->loadFeatures();
    b1=&k;
    b1->loadFeatures();

    return 0;
}
