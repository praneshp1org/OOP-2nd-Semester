#include <iostream>
using namespace std;

int main(void)
{
    int a=5;
    int &b = a;
    cout<<"a= "<<a<<" b= "<<b<<endl;
    b++;
    cout<<"a= "<<a<<" b= "<<b<<endl;
}