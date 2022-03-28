#include <iostream>
using namespace std;
int &max(int &x, int &y)
{
    return (x>y)?x:y;
}
int main(void)
{
    int a, b;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;
    max(a, b)=69;
    cout<<"a = "<<a<<" b = "<<b;
}