#include<iostream>
using namespace std;

class base{
    public:
    void print(){
        cout<<"from base"<<endl;
    }

};
class Derieved:public base{
    public:
    void print(){
        cout<<"From derived"<<endl;
    }

};
int main()
{
    // Derieved d1;
    // d1.base::print();

    Derieved d1;

    base *ptr= &d1;

    ptr->print();
    return 0;
}