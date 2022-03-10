// Deque Functions in STL
#include <iostream>
#include<deque>
using namespace std;

int main() {
    // Write C++ code here
    deque<int>d;
    d.push_back(1);  // Insert an element at the end
    d.push_front(2); // Insert an element at the start
    // d.push_back(3);
    for(int i:d){
        cout<<i<<" ";     //printing the deque elements
    }
    
    cout<<endl;
    // d.pop_back();
    // d.pop_front();
    // for(int i: d){
    //     cout<<i<<" ";
    // }
    
    cout<<"front -> "<<d.front()<<endl;    //fetch the front element 
    cout<<"Back -> "<<d.back()<<endl;      //fetch the back/last element   
    cout<<"Element at first index -> "<<d.at(1)<<endl;
    
    cout<<"Check Empty -> "<<d.empty()<<endl;   //checking for deque is empty or not
    
    cout<<"Before Erase -> "<<d.size()<<endl;   
    d.erase(d.begin(), d.begin() + 1);            //erase function, from stating index to the index upto where we want to erase the elements
    cout<<"After Erase -> "<<d.size()<<endl;
    
    for(int i:d){
        cout<<i<<" ";
    }
    return 0;
}
