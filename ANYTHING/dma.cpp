#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
    char str[20] = "Hello World!";
    int len = strlen(str);
    char *ptr;
    ptr = new char[len+1];
    strcpy(ptr, ptr);
    cout<<"ptr= "<<ptr;
    delete ptr;
}