#include <iostream>
using namespace std;

class distances
{
   private:
   int ft, inch;
   public:
   void input()
   {
      cout<<"Enter feet and inch: "<<endl;
      cin>>ft>>inch;
   }
   void add(distances d1, distances d2)
   {
      inch = d1.inch+d2.inch;
      ft = d1.ft+d2.ft+(inch/12);
      inch = inch%12;
   }
   void display()
   {
      cout<<"Feet = "<<ft<<" Inch = "<<inch<<endl;
   }
};
int main(void)
{
   distances d1, d2, d3;
   d1.input();
   d2.input();
   d3.add(d1, d2);
   d3.display();

}