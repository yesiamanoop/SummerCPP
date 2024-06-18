#include<iostream>

using namespace std;

class Student{
    private:
    string name;
    int rollNumber;
    int age;
    char grade;

    public:
    Student(string name,int rollNumber, int age,char grade){

        this->name=name;
        this->rollNumber=rollNumber;
        this->age=age;
        this->grade=grade;
    }
    string getname(){
        return name;
    }
    int getrollNumber(){
        return rollNumber;
    }
    int getage(){
        return age;
    }
    char getgrade(){
        return grade;
    }
    void setname(string nname){
        name=nname;
    }
    void setrollNumber(int nrollNumber){
        rollNumber=nrollNumber;
    }
    void setage(int nage){
        age=nage;;
    }
    void setgrade(char ngrade){
        grade=ngrade;
    }
    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<rollNumber<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"grade: "<<grade<<endl;

    }


};
int main(){
    Student s("anoop",11,23,'A');
    s.print();
    return 0;
}