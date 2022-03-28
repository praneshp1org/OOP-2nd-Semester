#include <iostream>
#include <string.h>

using namespace std;
class strings
{
  private:
  char str[20];
  public:
  void input()
  {
      cout<<"Enter string: "<<endl;
      cin>>str;
  }
  strings operator +(strings s)
  {
      strings t;
      strcpy(t.str, str);
      strcpy(t.str, " ");
      strcat(t.str, s.str);
      return t;
  }
  void display()
  {
     cout<<"Concatenated string is: "<<str<<endl;
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