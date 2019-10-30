#include<iostream>
using namespace std;

class person
{
    public:
    person()
    {
        cout<<"person"<<endl;
    }
};
class student:public person
{
    public:
    student()
    {
        cout<<"student"<<endl;
    }
};
class ug_student:public student
{
    public:
    ug_student()
    {
        cout<<"ug_student"<<endl;
    }
};
class ug_alumni:public ug_student
{
    public:
    ug_alumni()
    {
        cout<<"alumni"<<endl;
    }
};
int main()
{
    ug_alumni a;
    return 0;
}