#include <iostream>
using namespace std;
template <class T>
T getMax(T a, T b)
{
    T result;
    result = (a>b)?a:b;
    return (result);
}
int main(void)
{
    int i = 5, j=6, k;
    long l=10, m=5, n;
    k=getMax<int>(i, j);
    n = getMax<long>(l, m);
    cout<<k<<endl;
    cout<<n<<endl;
}