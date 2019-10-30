#include<iostream>
using namespace std;

class car
{
    public:
    virtual void show()
    {
        cout<<"car"<<endl;
    }
};
class d_car:public car
{
    public:
     void show()
    {
        cout<<"d_car"<<endl;
    }
};
class dd_car:public d_car
{
    public:
    void show()
    {
        cout<<"dd_car"<<endl;
    }
};
int main()
{
    car *c= new d_car;
    c->show();
}