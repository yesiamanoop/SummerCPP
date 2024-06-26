#include <iostream>
using namespace std;

int main()
{
    double sub1,sub2,sub3,result;
    cout<<"Enter sub1"<<endl;

    cin>>sub1;
    cout<<"Enter sub2"<<endl;
    cin>>sub2;
    cout<<"Enter sub2"<<endl;
    cin>>sub3;

    result = ((sub1+sub2+sub3)/300)*100;

    if (result>=33)
    {
        cout<<"pass";
    }
    else{ cout<< "fail";}
    
}