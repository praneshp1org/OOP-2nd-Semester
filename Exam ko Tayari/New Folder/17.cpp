#include <iostream>
#include <string.h>
using namespace std;
class stringCat
{
  char str[20];
  public:
  void input()
  {
      cout<<"Enter string: "<<endl;
      cin>>str;
  }
  void display()
  {
      cout<<"Concatenated string: "<<str;
  }
  stringCat operator *(stringCat s1)
  {
      stringCat s;
      strcpy(s.str, str);
      strcat(s.str, " ");
      strcat(s.str, s1.str);
      return s;
  }
};
int main(void)
{
    stringCat s1, s2, s3;
    s1.input();
    s2.input();
    s3 = s1*s2;
    s3.display();
}