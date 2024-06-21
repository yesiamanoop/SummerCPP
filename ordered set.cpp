///////////////////////////////////////////////////////////////////////SET PROPERTIES//////////////////////////////////////////////////////////////
//1.Unique elemnts:- no 2 elements can be equal
//2.immutabe:- we can addd or remove elements from a set, but we can not change the value of existing elements
//3. sorted order:-  btdefault the order will be ascending

#include<iostream>
#include<set>
using namespace std;

int main()
{
    
    
    //set<int>set1 = {5,3,8,1,9};ascending order
    set<int,greater<int>>set1 = {5,3,8,1,9};//descending order

    // for(int i : set1){
    //     cout<<i<<" ";
    // }

    set1.insert(20);
    set1.erase(8);
    for (int i : set1){
        cout<< i <<" ";
    }
 return 0;
}