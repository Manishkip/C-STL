// Vector functions

#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size -> "<<v.size()<<endl;
    
    cout<<"Element at 2nd Index -> "<<v.at(2)<<endl;
    cout<<"Front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;
    
    cout<<"Before pop : "<<endl;
    for(int i: v){
        cout<<i <<" ";
    }
    cout<<endl;
    
    v.pop_back();
    cout<<"after pop : "<<endl;
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Before clear size : "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size : "<<v.size()<<endl;
    
    vector<int> vec(5,1); //vector size declaration and initialization with 1
    for(int i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int>res(vec); //vector vec is copied to res
     for(int i: res){
        cout<<i<<" ";
    }
    


    return 0;
}
