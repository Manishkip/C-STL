#include <iostream>
using namespace std;
#include<array>

int main() {
    // Write C++ code here
    // int basic[5] = {1,2,3,4,5};
    
    array<int, 6> a = {1,2,3,4,5,6}; //array STL
    cout<<a.size()<<endl;
    cout<<a.empty()<<endl;
    
    cout<<"Element at 2nd Index -> "<<a.at(2)<<endl;
    cout<<"Element ar 3rd Index -> "<<a.at(3)<<endl;
    
    cout<<"First Element -> "<<a.front()<<endl;
    cout<<"Last Element -> "<<a.back()<<endl;
    
    //printing the elements of the array a
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    

    return 0;
}
