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
    display(1);
    cout<<"------"<<endl;
    display(20, 5);
    cout<<"------"<<endl;
    display("Hello World");
    cout<<"------"<<endl;
    display("Pranesh", 5);
}