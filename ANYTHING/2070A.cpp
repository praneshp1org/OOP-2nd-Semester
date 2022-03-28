#include <iostream>
using namespace std;
template <class T>
float sum(T a[])
{
    T sum=0;
    float avg;
    for(int i=0; i<10; i++)
    {
        sum+=a[i];
    }
    avg = sum/10;
    cout<<"Sum is: "<<sum<<endl;
    return avg;
    //cout<<"Average is: "<<avg<<endl;

}
int main(void)
{
    int a[10];
    for(int i=0; i<10; i++)
    {
        cin>>a[i];
    }
    float avg = sum(a);
    cout<<"Average is: "<<avg<<endl;

}