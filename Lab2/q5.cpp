#include <iostream>
using namespace std;

class myClass
{
    private:
    int x;
    static int count;
    public:
    void setData(int n)
    {
        x=n;
        count++;
    }
    void displayCount()
    {
        cout<<"Count is: "<<count<<endl;
    }
    void displayNumber()
    {
        cout<<"No. is "<<x<<endl;
    }

};
int myClass::count=0;
int main(void)
{
    myClass c1;
    c1.displayCount();
    myClass c2,c3;
    c2.setData(10);
    c3.setData(20);
    c2.displayCount();
}