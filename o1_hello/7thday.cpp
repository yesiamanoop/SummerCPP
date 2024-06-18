//////////////////////////////////////////////////poly-many morphism-form ->POLYMORPHISM//////////////////////////////////////////////////////////////////////////////////
//compiletime polymorphism->compile time decide which method should run ,early binding         eg Function overloading,operator overloading
//runtime polymorphism->runtime decide which method should run


//compile time example
// #include<iostream>
// using namespace std;

// class Count{
//     private:
//     int value;

//     public:
//     Count(){
//         value=5;
//     }
//     void operator ++(){
//         value+=10;
//     }
//     void display(){
//         cout<<"Count:"<<value<<endl;

//     }
// };
// int main(){
//     Count c1;
//     c1.display();
//     ++c1;
//     c1.display();
//     return 0;
// }


/////////////////////////////////////////////////////////////////////virtual keyword///////////////////////////////////////////////////////////////////////////

//runtime example

// #include<iostream>
// using namespace std;

// class Base{
// public:
//      virtual void print(){
//         cout<<"From base"<<endl;
//     }


// };

// class Derived:public Base{
//     public:
//     void print()override {
//         cout<<"from derived"<<endl;
//     }
// };
// int main()
// {
//     Derived d1;
//     Base *ptr = &d1;

//     ptr->print();
//  return 0;
// }






/////////////////////////////////////////////////////////////////////pure virtual function/////////////////////////////////////////////////////////////////////////////////
//if a function doesnt have any use in the base class but the function must be implemented by all its derived classes





// #include<iostream>
// using namespace std;



// class A{
//     public:
//     virtua=l void display()=0;
// };
// class B:public A{
//     void display(){

//     }
// };

// class C:public A{

// };
// int main()
// {
//     B b1;
//     C c1;// we have to give the same method in pure virtual function
//  return 0;
// }

/////////////////////////////////////////////////////////////////////Friend Function////////////////////////////////////////////////////////////////////////




// #include<iostream>
// using namespace std;



// class Distance{
//            private:
//            int meter;
//           friend int increaseDistance(Distance);//friend will allow us to use datamembers from the private and we can use it after the class
//            public:
//            Distance(){
//             meter=0;
//            }
// };

//       int increaseDistance(Distance d){
//         d.meter+=10;
//         return d.meter;
//       }
// int main()
// {
//     Distance d1;
//     cout<<increaseDistance(d1);
//  return 0;
// }




////////////////////////////////////////////////////////////////////////////////Template///////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

template<class T>
class Number{
    private:
    T num;

    public:
    Number(T number){
        num=number;
    
    }
    T getNum(){
        return num;
    }
};
int main()
{
    Number<int> n1(5);
    Number<float> n2(5.5);
 
}

