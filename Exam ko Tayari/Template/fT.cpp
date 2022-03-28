#include <iostream>
using namespace std;
/*
template <class template_type>
return_type function_name(parameter_list)
{
    //function body
}
*/
template <class T>

T getMax(T a, T b)
{
    T max;
    max = (a>b)?a:b;
    return max;

}
int main(void)
{
    cout<<"Integer: "<<getMax(14, 56)<<endl;
    cout<<"Double: "<<getMax(10.5, 10.3)<<endl;
    cout<<"Character: "<<getMax('a', 'A')<<endl;
}