#include <iostream>
using namespace std;
class complex
{
  int real;
  int img;
  public:
  friend istream& operator>>(istream&, complex&);
  friend ostream& operator<<(ostream&, complex&);
};
istream& operator>>(istream &input, complex &c)
{
    cout<<"Enter real part:"<<endl;
    input>>c.real;
    cout<<"Enter imaginary part:"<<endl;
    input>>c.img;
    return input;
}
ostream& operator<<(ostream &output, complex &c)
{
    output<<c.real<<"+i"<<c.img<<endl;
    return output;
}

int main(void)
{
    complex c1;
    cin>>c1;
    cout<<c1;

}