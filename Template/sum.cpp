#include <iostream>
using namespace std;
template <class T>
float sumArray(T a[])
{
    T sum = 0;
    float avg;
    for(int i=0; i<5; i++)
    {
        sum+=a[i];
    }
    cout<<"The sum of array elements is: "<<sum<<endl;
    avg = sum/5;
    return avg;
}
int main(void)
{
    cout<<"Enter array elements: "<<endl;
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    float avg = sumArray(arr);
    cout<<"Average: "<<avg<<endl;

}