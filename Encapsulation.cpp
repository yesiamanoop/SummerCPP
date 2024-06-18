//Encapsulation


#include<iostream>
using namespace std;

class Employee{
  private:
  int empID;
double salary;

  public:
  Employee(){

  }
  Employee(int empID, double salary){
    this->empID=empID;
    this->salary=salary;
  }

  int getID(){
    return empID;
  }
  void setID(int newID){
    empID=newID;
  }
};
int main(){
    Employee e1(100, 1000);

    cout<<e1.getID();

    e1.setID(200);
    cout<<e1.getID()<<endl;
   
}
//getters and setters are applied to provide more security