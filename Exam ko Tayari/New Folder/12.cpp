#include <iostream>
#include <cstring>
using namespace std;
template <class T>
T getMax(T a, T b)
{
    return (a>b)?a:b;
}

    char* getMax(char *a, char *b)
    {
        char *result;
        if(strcmp(a, b)>0)
        {
          result = a;
        }else
        {
            result = b;
        }
        return result;
    }

int main(void)
{
    int i=5, j=10;
    cout<<getMax(i, j)<<endl;
    char a[]="pranesh";
    char b[]="pranisha";
    cout<<getMax(a, b)<<endl;
}