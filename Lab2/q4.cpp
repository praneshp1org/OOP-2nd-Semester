#include <iostream>
using namespace std;

class teacher
{
    private:
    char name[20], faculty[20], post[20];
    public:
    void input()
    {
        cout<<"Enter name, faculty and post: "<<endl;
        cin>>name>>faculty>>post;
    }
    void display()
    {
        cout<<"Name = "<<name<<", faculty = "<<faculty<<" and post = "<<post<<endl;

    }
};
int main(void)
{
    teacher t[5];
    int i;
    for(i=0; i<5; i++)
    {
        t[i].input();
    }
    for(i=0; i<5; i++)
    {
        t[i].display();
    }
}