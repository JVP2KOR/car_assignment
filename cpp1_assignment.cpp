#include <iostream>
using namespace std;
class car
{
    int releaseyear;
    string customer;
    int speed;
    public:
    car(const int &release,const string &cus,const int &sp)
    {
        releaseyear=release;
        customer=cus;
        speed=sp;
    }
    int& accelerate()
    {
        speed+=10;
        return speed;
    }
    int& brake()
    {
        if(speed>0)
        {speed-=10;
        return speed;}
    }
    void display()
    {
        cout<<"speed of car : "<<speed<<endl;
    }
};
using namespace std;

int main()
{
    car customer(2023,"piyush",70);
    for (int i=0;i<5;i++)
    customer.accelerate();
    customer.display();
    for (int i=0;i<5;i++)
    customer.brake();
    customer.display();
    return 0;
}
