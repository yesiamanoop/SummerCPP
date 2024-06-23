#include<iostream>
using namespace std;


int rev_number(int num){

    int rev=0;
    while(num!=0){
        rev=rev*10+num%10;
        num=num/10;
    }
    return rev;
}


int main()
{
    int num=2345;
    cout<<"The number is "<<rev_number(num);
   
 return 0;
}