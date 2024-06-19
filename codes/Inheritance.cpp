

                                                        //   INHERITANCE
// It allows us to create a new class (derived/child) from an existing class (base/parent)
// the child class inherits the features from the patrent class and can have additional features of its own

       /////////////////                              ////                       // EXAMPLE/////////////////////////////////////////////////////////////
// class base{
// public:
// int x;
// protected:
// int y;
// private:
// int z;

// class c1:public base{
// x is public
// y is protected
// z is not accessible
// };
// class c2:protected base{
// x is protected
// y is protected
// z is not accessible
// };
// class c3:private base{
// x is private
// y is private
// z is not accessible
// };

// };


#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }

};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"bark"<<endl;
    };

};
int main(){
    Animal a1;
    a1.eat();
    Dog d1;
    d1.eat();
    d1.bark();
    return 0;
}

                                                   //types of inheritance

#include<iostream>
using namespace std;

//multilevel
class A{


};
class B:public A{

};
class c:public B{

};
//multiple
// class A{
//     public:
// void print(){

// }

// };
// class B{
//     void print(){

//     }

// };
// class C:public B,public A{

// };
// int main(){
//     C c1;
//     c1.A::print();

// }

//Heirarchical
class A{

};
class B:public A{

};
class C:public A{

};


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
    Derieved d1;
    d1.base::print();

    Derieved d1;

    base *ptr= &d1;
    d1.print();
}