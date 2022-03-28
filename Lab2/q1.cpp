#include <iostream>
using namespace std;

class times
{
  private:
  int day, hour, min, sec;
  public:
  void input()
  {
      cout<<"Day, hour, minute, second: "<<endl;
      cin>>day>>hour>>min>>sec;
  }
  void add(times t1, times t2)
  {
     sec = t1.sec+t2.sec;
     min = t1.min+t2.min+(sec/60);
     hour = t1.hour+t2.hour+(min/60);
     day = t1.day+t2.day+(hour/24);
     sec = sec%60;
     min = min%60;
     hour = hour%24;

  }
  void display()
  {
      cout<<"Day: "<<day<<" Hour: "<<hour<<" Minute: "<<min<<" Second: "<<sec<<endl;
  }
};
int main(void)
{
    times t1, t2, t3;
    t1.input();
    t2.input();
    t3.add(t1, t2);
    t3.display();
}