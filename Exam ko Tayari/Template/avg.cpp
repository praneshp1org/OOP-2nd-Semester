#include <iostream>
using namespace std;
template <class T>
float find_average(T a[])
{
    T sum=0;
    float avg;
    for(int i=0; i<10; i++)
    {
        sum+=a[i];
    }
    avg = sum/10;
    cout<<"Sum: "<<sum<<endl;
    return avg;
}
int main(void)
{
    int arr[10];
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    float avg = find_average(arr);
    cout<<"Average: "<<avg<<endl;
}