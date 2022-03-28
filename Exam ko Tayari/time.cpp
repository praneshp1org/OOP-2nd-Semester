#include <iostream>
using namespace std;
class times
{
    int hr, min, sec;
    public:
    void input()
    {
        cout<<"Enter something.."<<endl;
        cin>>hr>>min>>sec;
    }
    void display()
    {
        cout<<"Hr: "<<hr<<" min: "<<min<<" sec: "<<sec<<endl;
    }
    void add(times t1, times t2)
    {
        sec = t1.sec+t2.sec;
        min = t1.min+t2.min+(sec/60);
        sec=sec%60;
        hr = t1.hr+t2.hr+(min/60);
        min=min%60;

    }
    void subtract(times t1, times t2)
    {
        min= 0;
        hr = 0;
        sec = t2.sec-t1.sec;
        if(sec<0)
        {
            sec=sec+60;
            min= min-1;
        }
        min = min + t2.min - t1.min;
        if(min<0)
        {
            min = min+60;
            hr = hr-1;
        }
        hr = hr+t2.hr - t1.hr;

    }
};
int main(void)
{
    times t1, t2, t3;
    t1.input();
    t2.input();
    t3.subtract(t1, t2);
    t3.display();
}
