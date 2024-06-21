////////////////////////////////////////////////////////////vector///////////////////////////////////////////////////////////

//difference between array and vector are array size cannot be chnaged while vectors size can change


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vector1={1,2,3,4};
    vector<int>::iterator itr;
    itr=vector1.end();

    vector1.push_back(10);//add 10 at the last of vector


    //access in 2 ways

    cout<<vector1[1]<<endl;
    cout<<vector1.at(0)<<endl;

    //add
    vector1.at(0)=8;
    cout<<vector1.at(0)<<endl;

    for (int item:vector1){
        cout<<item<<" ";
    }

    for (itr=vector1.begin();itr !=vector1.end(); itr++)
    {
        cout<<*itr<<" ";
    }
 return 0;
}