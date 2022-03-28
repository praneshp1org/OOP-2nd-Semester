#include <iostream>
#include <string.h>

using namespace std;
/*
string concatenation using +
*/
class strings
{
  char a[30];
  public:
  void read()
  {
      cout<<"Enter string: ";
      cin>>a;
  }
  void display()
  {
      cout<<"The string is "<<a<<endl;
  }
  strings operator +(strings s)
  {
      strings temp;
      strcpy(temp.a, strcat(a, s.a));
      return temp;
  }
};
int main(void)
{
    strings s1, s2, s3;
    s1.read();
    s2.read();
    s3 = s1+s2;
    s3.display();
}