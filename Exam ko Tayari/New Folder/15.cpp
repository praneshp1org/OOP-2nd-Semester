#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char str[] = "The most stupendous WrestleMania";
    int len = strlen(str);
    char *ptr;
    ptr = new char[len+1];
    strcpy(ptr, str);
    cout<<"ptr= "<<ptr<<endl;
    delete ptr;

}