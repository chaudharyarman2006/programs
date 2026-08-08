#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int ar[9]={1,1,3,3,4,4,5,6,7};

    unordered_map<int,int> um;


       for(auto r:ar)
       {
        um[r]++;


       }

       for(auto r:um)
       {
        if(r.second>1)
        cout<<r.first<<" ";
       }
}