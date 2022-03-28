#include <iostream>
using namespace std;
void mySwapper(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping: x = "<<x<<" and y = "<<y<<endl;

}
int main(void)
{
    int x, y;
    cout<<"Enter x and y: "<<endl;
    cin>>x>>y;
    mySwapper(x, y);
}