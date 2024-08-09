#include<iostream.h>
 class distance
 {
 int feet;
 float inches;
 public:
 distance(): feet(0), inches (0.0)
{ }
 distance(int ft, float in) : feet (ft), inches(in)
{  }
 void getdist()
 {
 cout<<"enter feet:";
 cin>>feet>>inches;
 }
 void showdist () const
 {
 cout<<feet<< inches;  }
 distance add_dist(const   distance &) const ;
};
 distance distance:: add_dist (const distance& d2) const
{
  distance temp;
 // feet = 0;   // error, can’t   						modify this
 //d2.feet=0; // error, can’t 						modify d2
 temp.inches=inches+d2.inches;
 if(temp.inches >= 12.0)
  {
  temp.inches -= 12.0;
 temp.feet= 1;   }
temp.feet +=feet + d2.feet;
 return temp;  }



int main()
 {
 distance dist1, dist3;
 distance dist2(11, 6.25);
 dist1.getdist();
 dist3= dist1.add_dist(dist2);
 cout<<"dist1=";
  dist1.showdist();
 cout<<"dist2=";
 dist2.showdist();
 cout<<"dist3=";
 dist3.showdist();
 return 0;
 }


