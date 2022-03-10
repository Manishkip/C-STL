// list functions in cpp

#include <iostream>
#include<list>
using namespace std;

int main() {
   
    list<int>l;
    
    list<int>n(5,100);  //list of size 5 declared and initialize with 100
    for(int i:n){
        cout<<i<<" ";       //printing the list
    }
    cout<<endl;
    
    
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(5);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    // l.erase(l.begin());
    l.pop_front();
    l.pop_back();
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Size of list "<<l.size()<<endl;

    return 0;
}
