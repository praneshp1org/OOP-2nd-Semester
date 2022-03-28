#include <iostream>
using namespace std;
class complex
{
    int real, img;
    public:
    friend istream& operator >>(istream&, complex &);
    friend ostream& operator <<(ostream&, complex &);

};
istream& operator >>(istream &ip, complex &c)
{
    cout<<"Enter real part: "<<endl;
    ip>>c.real;
    cout<<"Complex part: "<<endl;
    ip>>c.img;
    return ip;
}
ostream& operator <<(ostream &op, complex &c)
{
    op<<c.real<<"+i"<<c.img<<endl;
    return op;

}

int main(void)
{
    complex c;
    cin>>c;
    cout<<c;
}