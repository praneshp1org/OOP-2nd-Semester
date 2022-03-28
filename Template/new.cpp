#include <iostream>
using namespace std;

template <typename T>
void Swap(T &n1, T &n2)
{
        T temp;
        temp = n1;
        n1 = n2;
        n2 = temp;
}

int main(void)
{
        int i1 = 6, i2 = 3;
        float f1 = 7.2, f2 = 4.5;
        char c1 = 'p', c2 = 'x';

        cout << "Before passing data to function template.\n";
        cout << "i1 = " << i1 << "\ni2 = " << i2;
        cout << "\nf1 = " << f1 << "\nf2 = " << f2;
        cout << "\nc1 = " << c1 << "\nc2 = " << c2;

        Swap(i1, i2);
        Swap(f1, f2);
        Swap(c1, c2);

        cout << "\n\nAfter passing data to function template.\n";
        cout << "i1 = " << i1 << "\ni2 = " << i2;
        cout << "\nf1 = " << f1 << "\nf2 = " << f2;
        cout << "\nc1 = " << c1 << "\nc2 = " << c2;

        //return 0;
}