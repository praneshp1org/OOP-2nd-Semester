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
    for(int i=0; i<=n; i++)
    {
        cout<<data<<endl;
    }
}
int main(void)
{
    display(1);
    display(2.5);
    display('h');
    display("aj styles wins royal rumble.");
    display("aj styles wins royal rumble.", 4);
}