#include <iostream>
using namespace std;
template <class T>
T getMax(T a, T b)
{
    T result;
    result = (a>b)?a:b;
    return result;

}
int main(void)
{
    int i=41, j=60, k;
    k=getMax(i, j);
    cout<<k<<endl;
}