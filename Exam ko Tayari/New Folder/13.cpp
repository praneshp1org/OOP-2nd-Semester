#include <iostream>
using namespace std;
template <class T=double, int size=4>
class Array
{
    T a[size];
    public:
    void input(T temp[])
    {
        int i;
        for(i=0; i<size; i++)
        {
            a[i]=temp[i];
        }
    }
    void display();
    /*{
        T sum=0;
        int i;
        for(i=0; i<size; i++)
        {
            sum+=a[i];
        }
        cout<<"Sum: "<<sum;

    }*/

};
template <class T, int s>
void Array<T, s>:: display()
{
        T sum=0;
        int i;
        for(i=0; i<s; i++)
        {
            sum+=a[i];
        }
        cout<<"Sum: "<<sum<<endl;
}

int main(void)
{
    int temp[] = {1, 2, 3, 4, 5};
    Array<int, 5> a1;
    a1.input(temp);
    a1.display();

}