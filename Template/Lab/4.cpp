#include <iostream>
using namespace std;
template <class T>
float sum_arr(T a[])
{
    T sum=0;
    float avg;
    for(int i=0; i<10; i++)
    {
        sum+=a[i];
    }qq 1   `
    avg = sum/10;
    cout<<"Sum in an array is: "<<sum;
    return avg;
}
int main(void)
{
    int arr[10];
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    float avg = sum_arr(arr);
    cout<<""<<endl;
    cout<<"Average: "<<avg;

}