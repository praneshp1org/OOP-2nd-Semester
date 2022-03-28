#include <iostream>
using namespace std;
template <class T>
void display(T data)
{
    cout<<data<<endl;
}
template <class T>
void display(T data, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<data<<endl;
    }
}
int main(void)
{
    display("Pranesh", 4);
    display(10);
    display(10.6);
    display('a');
}