// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int>v;   //created vector array
    //pushing elements in the vector
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    
    //check if 6 is present in the vector or not
    cout<<"Finding 6 -> " <<binary_search(v.begin(), v.end(), 6)<<endl;
    
    //checking for upper bound of 6
    cout<<"lower bound -> "<<lower_bound(v.begin(), v.end() , 6) - v.begin()<<endl;
    //checking for lower bound of 4
    cout<<"Upper bound -> "<<upper_bound(v.begin(), v.end(), 4) - v.begin()<<endl;
    
    int a = 3;
    int b = 5;
    
    cout<<"max -> "<<max(a, b)<<endl; //max of a, b
    cout<<"min -> "<<min(a, b)<<endl;  // min of a,b
    
    swap(a,b);    //swaping a,b
    cout<<"a -> "<<a<<endl;
    cout<<"b -> "<<b<<endl;
    
    string str = "manish";
    reverse(str.begin(), str.end());  //function to reverse a string
    cout<<str<<endl;
    
    rotate(v.begin(), v.begin() + 1, v.end());  //function to rotate string upto the given value
    cout<<"After rotate -> "<<endl;
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    sort(v.begin(), v.end());  // sort function- it uses intro sort which is combination of quicksort, insertion sort and heap sort
    for(int i: v){
        cout<<i<<" ";
    }

    return 0;
}
