#include <iostream>
#include <string.h>

using namespace std;
class strings
{
    char a[30];
    public:
    void input()
    {
        cout<<"String: "<<endl;
        cin>>a;
    }
    void display()
    {
        cout<<"String: "<<a<<endl;
    }
    strings operator +(strings b)
    {
        strings s;
        strcpy(s.a, strcat(a, b.a));
        return s;
    }
};

int main(void)
{
    strings s1, s2, s3;
    s1.input();
    s2.input();
    s3=s1+s2;
    s3.display();
}