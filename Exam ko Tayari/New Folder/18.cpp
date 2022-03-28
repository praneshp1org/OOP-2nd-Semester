#include <iostream>
//#include <cstlib>
const int MAX=5;
using namespace std;
class sArray
{
  int arr[MAX];
  public:
  int &operator[] (int index)
  {
      if(index<0||index>=MAX)
      {3
          cout<<"Array out of bound..."<<endl;
          exit(1);
      }
      return arr[index];
  }
};

int main(void)
{
    sArray sa;
    for(int i=0; i<MAX; i++)
    {
        sa[i]=i+2;
    }
    for(int i=0; i<MAX; i++)
    {
        cout<<sa[i]<<"\t";
    }
    sa[MAX]=55;
    cout<<sa[MAX+1];
    cout<<sa[MAX+10];
}